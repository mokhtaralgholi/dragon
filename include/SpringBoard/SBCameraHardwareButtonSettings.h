//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@interface SBCameraHardwareButtonSettings : PTSettings
{
    BOOL _shutterButtonShouldUsePocketDetection;
    double _shutterButtonLongPressTimeout;
    double _shutterButtonLongPressCancellationTimeout;
}

+ (id)settingsControllerModule;
@property(nonatomic) BOOL shutterButtonShouldUsePocketDetection; // @synthesize shutterButtonShouldUsePocketDetection=_shutterButtonShouldUsePocketDetection;
@property(nonatomic) double shutterButtonLongPressCancellationTimeout; // @synthesize shutterButtonLongPressCancellationTimeout=_shutterButtonLongPressCancellationTimeout;
@property(nonatomic) double shutterButtonLongPressTimeout; // @synthesize shutterButtonLongPressTimeout=_shutterButtonLongPressTimeout;
- (void)setDefaultValues;

@end
