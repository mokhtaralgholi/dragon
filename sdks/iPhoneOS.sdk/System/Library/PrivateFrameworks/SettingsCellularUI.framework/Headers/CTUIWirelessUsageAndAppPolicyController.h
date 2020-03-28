//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <SettingsCellularUI/CoreTelephonyClientSubscriberDelegate-Protocol.h>

@class CoreTelephonyClient, PSSpecifier, PSUIAppDataUsageGroup;

@interface CTUIWirelessUsageAndAppPolicyController : PSListController <CoreTelephonyClientSubscriberDelegate>
{
    BOOL _shouldCalculateUsage;
    PSSpecifier *_groupSpecifier;
    PSUIAppDataUsageGroup *_appDataUsageGroup;
    CoreTelephonyClient *_coreTelephonyClient;
}

@property BOOL shouldCalculateUsage; // @synthesize shouldCalculateUsage=_shouldCalculateUsage;
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(retain, nonatomic) PSUIAppDataUsageGroup *appDataUsageGroup; // @synthesize appDataUsageGroup=_appDataUsageGroup;
@property(retain, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
// - (void).cxx_destruct;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)_handleWirelessDataUsageChangedNotification:(id)arg1;
- (void)_handleCellularPlanChangedNotification:(id)arg1;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)_handleNewCarrierNotification:(id)arg1;
- (id)specifiers;
- (void)dealloc;
- (id)init;

@end
