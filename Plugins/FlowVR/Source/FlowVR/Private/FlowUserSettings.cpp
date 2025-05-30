// Fill out your copyright notice in the Description page of Project Settings.


#include "FlowUserSettings.h"
#include "FlowModes.h"

UFlowUserSettings::UFlowUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
    mode = EFlowModes::Off;
    vignette_intensity = 1.0f;
    countervection_intensity = 1.0f;
    halo_intensity = 1.0f;
    distortion_intensity = 1.0f;
    use_countervection_3d = false;
}

UFlowUserSettings *UFlowUserSettings::GetFlowUserSettings()
{
    return Cast<UFlowUserSettings>(UGameUserSettings::GetGameUserSettings());
}

void UFlowUserSettings::SetMode(EFlowModes new_value)
{
    mode = new_value;
}

EFlowModes UFlowUserSettings::GetMode() const
{
    return mode;
}

void UFlowUserSettings::SetVignetteIntensity(float new_value)
{
    vignette_intensity = new_value;
}

float UFlowUserSettings::GetVignetteIntensity() const
{
    return vignette_intensity;
}

void UFlowUserSettings::SetCountervectionIntensity(float new_value)
{
    countervection_intensity = new_value;
}

float UFlowUserSettings::GetCountervectionIntensity() const
{
    return countervection_intensity;
}

void UFlowUserSettings::SetHaloIntensity(float new_value)
{
    halo_intensity = new_value;
}

float UFlowUserSettings::GetHaloIntensity() const
{
    return halo_intensity;
}

void UFlowUserSettings::SetDistortionIntensity(float new_value)
{
    distortion_intensity = new_value;
}

float UFlowUserSettings::GetDistortionIntensity() const
{
    return distortion_intensity;
}

void UFlowUserSettings::SetUseCountervection3D(bool new_value)
{
    use_countervection_3d = new_value;
}

bool UFlowUserSettings::GetUseCountervection3D() const
{
    return use_countervection_3d;
}