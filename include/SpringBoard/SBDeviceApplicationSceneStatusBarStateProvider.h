//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProvider_Base.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneHandleObserver-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride-Protocol.h>

@class SBDeviceApplicationSceneHandle, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector;

@interface SBDeviceApplicationSceneStatusBarStateProvider : SBDeviceApplicationSceneStatusBarStateProvider_Base <SBDeviceApplicationSceneHandleObserver, SBDeviceApplicationSceneStatusBarStateProviderBaseSubclassesMustOverride, BSInvalidatable>
{
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    UIApplicationSceneSettingsDiffInspector *_appSceneSettingsDiffInspector;
    SBDeviceApplicationSceneHandle *_sceneHandle;
}

// - (void).cxx_destruct;
- (BOOL)_anyObserverWants:(SEL)arg1;
- (void)_performUpdateWith:(id)arg1 actions:(id /* CDUnknownBlockType */)arg2;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (long long)_fallbackInterfaceOrientation;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (BOOL)_suppressInheritedPartStyles;
- (id)statusBarSceneIdentifier;
- (id)statusBarControllingSceneHandle;
- (CGRect)statusBarAvoidanceFrame;
- (int)statusBarStyleOverridesToSuppress;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (BOOL)_statusBarHiddenGivenFallbackOrientation:(long long)arg1;
- (double)_statusBarAlpha;
- (long long)_statusBarStyleForPartWithIdentifier:(id)arg1 suppressingInherited:(BOOL)arg2;
- (id)_statusBarPartStyles;
- (long long)_statusBarStyle;
- (void)invalidate;
- (void)invalidateStatusBarSettings;
- (void)dealloc;
- (id)_initWithSceneHandle:(id)arg1;

@end
