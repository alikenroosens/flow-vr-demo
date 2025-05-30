// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "FlowModes.h"
#include "FlowUserSettings.generated.h"

/**
 * 
 */
UCLASS()
class UFlowUserSettings : public UGameUserSettings
{
	GENERATED_UCLASS_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "FlowVR")
	static UFlowUserSettings* GetFlowUserSettings();
	
	
	//Getters & setters
	UFUNCTION(BlueprintCallable, Category = "FlowVR")
	void SetMode(EFlowModes new_value);
	
	UFUNCTION(BlueprintPure, Category = "FlowVR")
	EFlowModes GetMode() const;
	
	UFUNCTION(BlueprintCallable, Category = "FlowVR")
	void SetVignetteIntensity(float new_value);
	
	UFUNCTION(BlueprintPure, Category = "FlowVR")
	float GetVignetteIntensity() const;
	
	UFUNCTION(BlueprintCallable, Category = "FlowVR")
	void SetCountervectionIntensity(float new_value);
	
	UFUNCTION(BlueprintPure, Category = "FlowVR")
	float GetCountervectionIntensity() const;
	
	UFUNCTION(BlueprintCallable, Category = "FlowVR")
	void SetHaloIntensity(float new_value);
	
	UFUNCTION(BlueprintPure, Category = "FlowVR")
	float GetHaloIntensity() const; 
	
	UFUNCTION(BlueprintCallable, Category = "FlowVR")
	void SetUseCountervection3D(bool new_value);
	
	UFUNCTION(BlueprintPure, Category = "FlowVR")
	bool GetUseCountervection3D() const;
	
	UFUNCTION(BlueprintCallable, Category = "FlowVR")
	void SetDistortionIntensity(float new_value);
	
	UFUNCTION(BlueprintPure, Category = "FlowVR")
	float GetDistortionIntensity() const; 
	

protected:
	UPROPERTY(Config)
	EFlowModes mode;

	UPROPERTY(Config)
	float vignette_intensity;
	
	UPROPERTY(Config)
	float countervection_intensity;

	UPROPERTY(Config)
	float halo_intensity;
	
	UPROPERTY(Config)
	float distortion_intensity;
	
	UPROPERTY(Config)
	bool use_countervection_3d;
	
};
