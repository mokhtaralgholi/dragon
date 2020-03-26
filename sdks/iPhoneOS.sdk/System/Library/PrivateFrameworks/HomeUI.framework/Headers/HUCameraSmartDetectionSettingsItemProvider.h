//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class NSMutableSet, NSSet;

@interface HUCameraSmartDetectionSettingsItemProvider : HFItemProvider
{
    NSMutableSet *_items;
    NSSet *_cameraProfiles;
    NSUInteger _settingsContext;
}

@property(readonly, nonatomic) NSUInteger settingsContext; // @synthesize settingsContext=_settingsContext;
@property(readonly, copy, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(readonly, nonatomic) NSMutableSet *items; // @synthesize items=_items;
// - (void).cxx_destruct;
- (id)reloadItems;
- (id)init;
- (id)initWithCameraProfiles:(id)arg1 settingsContext:(NSUInteger)arg2;

@end
