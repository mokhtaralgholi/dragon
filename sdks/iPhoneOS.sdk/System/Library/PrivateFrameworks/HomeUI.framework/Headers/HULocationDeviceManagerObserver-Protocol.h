//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HULocationDevice, HULocationDeviceManager, NSSet;

@protocol HULocationDeviceManagerObserver <NSObject>

@optional
- (void)locationDeviceManager:(HULocationDeviceManager *)arg1 didUpdateAvailableLocationDevices:(NSSet *)arg2;
- (void)locationDeviceManager:(HULocationDeviceManager *)arg1 didUpdateActiveLocationDevice:(HULocationDevice *)arg2;
@end
