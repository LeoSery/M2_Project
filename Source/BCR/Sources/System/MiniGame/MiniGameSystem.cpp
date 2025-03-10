#include "BCR/Headers/System/MiniGame/MiniGameSystem.h"
#include "BCR/Headers/Interfaces/IPickable.h"
#include "BCR/Headers/System/QTE/QTE_Subsystem.h"
#include <BCR/Headers/Interfaces/BCR_Helper.h>
#include <Components/BillboardComponent.h>
#include <Kismet/KismetMathLibrary.h>
#include <Kismet/KismetSystemLibrary.h>
#include "BCR/Headers/System/QTE/QTE_Subsystem.h"
#include "BCR/Headers/Player/MainPlayer.h"

AMiniGameSystem::AMiniGameSystem()
{
	DefaultRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultRootComponent"));
	SetRootComponent(DefaultRootComponent);

	snapPlayerPoint1 = CreateDefaultSubobject<UBillboardComponent>(TEXT("Snap Point Player 1"));
	snapPlayerPoint2 = CreateDefaultSubobject<UBillboardComponent>(TEXT("Snap Point Player 2"));
	outputSpawnPoint = CreateDefaultSubobject<UBillboardComponent>(TEXT("OutPut Spawn Point"));

	snapPlayerPoint1->SetupAttachment(RootComponent);
	snapPlayerPoint2->SetupAttachment(RootComponent);
	outputSpawnPoint->SetupAttachment(RootComponent);

	inputBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Input Box"));

	inputBox->SetupAttachment(RootComponent);

	PrimaryActorTick.bCanEverTick = true;
}

void AMiniGameSystem::OnFirstSnapPointResult(bool bSuccess)
{
	// technical log
	IBCR_Helper::LogConsole(this, FString::Printf(TEXT("Player 1 action: %s"), bSuccess ? TEXT("Success") : TEXT("Failed")));
}

void AMiniGameSystem::OnSecondSnapPointResult(bool bSuccess)
{
	// technical log
	IBCR_Helper::LogConsole(this, FString::Printf(TEXT("Player 2 action: %s"), bSuccess ? TEXT("Success") : TEXT("Failed")));
}

// Called when the game starts or when spawned
void AMiniGameSystem::BeginPlay()
{
	snapPointMap.Add(snapPlayerPoint1,nullptr);
	snapPointMap.Add(snapPlayerPoint2, nullptr);
	
	itemList = inputItems;
	Super::BeginPlay();
}

void AMiniGameSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMiniGameSystem::SetInputItem(TArray<TSubclassOf<APickableItem>> _items)
{
	inputItems = _items;
	itemList = _items;
}

void AMiniGameSystem::SetQTE(UQTEConfigurationAsset* _datas)
{
	QTEConfig = _datas;
}

void AMiniGameSystem::SetOutputItem(TArray<TSubclassOf<APickableItem>> _items)
{
	outputItems = _items;
}

void AMiniGameSystem::StartExecute()
{
	if (itemList.IsEmpty())
	{
		if (!QTEConfig)
		{
			// technical log
			IBCR_Helper::LogConsole(this, "No QTE Configuration assigned!");
			return;
		}

		if (UGameInstance* GameInstance = GetGameInstance())
		{
			if (UQTE_Subsystem* QTESystem = GameInstance->GetSubsystem<UQTE_Subsystem>())
			{
				if (QTESystem->GetCurrentState() != EQTEState::Running && QTESystem->GetCurrentState() != EQTEState::WaitingForPlayers)
				{
					// technical log
					IBCR_Helper::LogConsole(this, "Setting up QTE");
					
					// Binding callbacks
					QTESystem->OnQTEComplete.AddDynamic(this, &AMiniGameSystem::FinishExecute);
					QTESystem->OnSnapPointFirstResult.AddDynamic(this, &AMiniGameSystem::OnFirstSnapPointResult);
					QTESystem->OnSnapPointSecondResult.AddDynamic(this, &AMiniGameSystem::OnSecondSnapPointResult);

					CallQTEReader();
				}
				
				if (snapPointMap[snapPlayerPoint1])
				{
					QTESystem->OnPlayerEnterSnapPoint(snapPointMap[snapPlayerPoint1], ESnapPointType::First);
				}
				if (snapPointMap[snapPlayerPoint2])
				{
					QTESystem->OnPlayerEnterSnapPoint(snapPointMap[snapPlayerPoint2], ESnapPointType::Second);
				}
			}
		}
	}
	else
	{
		// visual log for demonstration
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Need more resources!"));
		}
	}
}

void AMiniGameSystem::CallQTEReader()
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		if (UQTE_Subsystem* QTESystem = GameInstance->GetSubsystem<UQTE_Subsystem>())
		{
			QTESystem->StartQTEFromAsset(QTEConfig);
		}
	}
}

void AMiniGameSystem::FinishExecute(bool _success)
{
	if (UGameInstance* GameInstance = GetGameInstance())
	{
		if (UQTE_Subsystem* QTESystem = GameInstance->GetSubsystem<UQTE_Subsystem>())
		{
			QTESystem->OnQTEComplete.RemoveDynamic(this, &AMiniGameSystem::FinishExecute);
			QTESystem->OnSnapPointFirstResult.RemoveDynamic(this, &AMiniGameSystem::OnFirstSnapPointResult);
			QTESystem->OnSnapPointSecondResult.RemoveDynamic(this, &AMiniGameSystem::OnSecondSnapPointResult);
		}
	}

	// technical log
	IBCR_Helper::LogConsole(this, 
		FString::Printf(TEXT("QTE Execution finished with result: %s"), 
			_success ? TEXT("Success") : TEXT("Failure")));
	
	if (_success)
	{
		// visual log for demonstration
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, TEXT("Machine active!"));
		}
		
		SpawnItem(0);
	}
	else
	{
		// visual log for demonstration
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Machine failed!"));
		}
		Reset();
	}
}

void AMiniGameSystem::SpawnItem(int i)
{
	if (i >= outputItems.Num())
	{
		// visual log for demonstration
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("Production complete"));
		}
		
		Reset();
		return;
	}
	
	FTimerHandle TimerHandle;
	FTimerDelegate TimerDelegate = FTimerDelegate::CreateUObject(this, &AMiniGameSystem::SpawnItem, i + 1);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, 3, false);

	// technical log
	IBCR_Helper::LogConsole(this, FString::Printf(TEXT("Spawning item: %s"), *outputItems[i].GetDefaultObject()->GetItemName()));

	FRotator Rotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;
	GetWorld()->SpawnActor<APickableItem>(outputItems[i], outputSpawnPoint->GetComponentLocation(), GetActorRotation());
}

void AMiniGameSystem::Reset()
{
	itemList = inputItems;
}

void AMiniGameSystem::Interact_Implementation(AMainPlayer* Player)
{
	if (snapPointMap.Find(snapPlayerPoint1)[0] == Player)
	{
		snapPointMap.Add(snapPlayerPoint1, nullptr);
		//set state machine to liberate the player
		return;
	}
	if (snapPointMap.Find(snapPlayerPoint2)[0] == Player)
	{
		snapPointMap.Add(snapPlayerPoint2, nullptr);
		//set state machine to liberate the player
		return;
	}
	
	if (snapPointMap.Find(snapPlayerPoint1)[0] == nullptr)
	{
		snapPointMap.Add(snapPlayerPoint1, Player);
		Player->SetActorLocation(snapPlayerPoint1->GetComponentLocation());
		//set state machine to stopped /occupied / not moving or something
	}
	else if (snapPointMap.Find(snapPlayerPoint2)[0] == nullptr)
	{
		snapPointMap.Add(snapPlayerPoint2, Player);
		Player->SetActorLocation(snapPlayerPoint2->GetComponentLocation());
		//set state machine to stopped /occupied / not moving or something
	}

	if (snapPointMap.Find(snapPlayerPoint1) != nullptr && snapPointMap.Find(snapPlayerPoint2) != nullptr)
	{
		StartExecute();
	}
}

void AMiniGameSystem::InteractWithObject_Implementation(AMainPlayer* Player, AActor* Object)
{
	FVector boxOrigin;
	FVector boxExtent;
	float sphereRadius;
	UKismetSystemLibrary::GetComponentBounds(inputBox, boxOrigin, boxExtent, sphereRadius);
	
	if (UKismetMathLibrary::IsPointInBox(Player->GetActorLocation(), boxOrigin, boxExtent))
	{
		APickableItem* item = Cast<APickableItem>(Object);
		
		if (item)
		{
			for (int i = 0; i < itemList.Num(); i++)
			{
				if (itemList[i].GetDefaultObject()->GetItemName() == item->GetItemName())
				{
					/* Get the name of the Object (name is given by the class of the pickable */
					itemList.RemoveAt(i);
					Player->PickUp();
					Object->Destroy();
					return;
				}
			}
			IBCR_Helper::LogScreen(this, "Item not in itemList");
		}
	}
}
