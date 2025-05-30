#pragma once

#include "UObject/ObjectMacros.h"
#include "FlowModes.generated.h"

UENUM(BlueprintType)
enum class EFlowModes : uint8
{
	Off     UMETA(DisplayName = "Off"),
	Vignette    UMETA(DisplayName = "Vignette"),
	Flow    UMETA(DisplayName = "Flow")
};
