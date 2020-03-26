//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UISettings.h>

@interface _UIMotionAnalyzerSettings : _UISettings
{
    BOOL _showIdleIndicator;
    BOOL _jumpEnabled;
    BOOL _playJumpSound;
    BOOL _directionalLockEnabled;
    BOOL _showDirectionalLockIndicators;
    BOOL _referenceShiftEnabled;
    double _inputSmoothingFactor;
    double _referenceShiftSpeed;
    double _idleLeeway;
    double _delayBeforeIdle;
    double _jumpThreshold;
    double _directionalLockThreshold;
    double _directionalLockStickiness;
    double _directionalLockSharpness;
    double _referenceShiftDistanceDependence;
}

@property double referenceShiftDistanceDependence; // @synthesize referenceShiftDistanceDependence=_referenceShiftDistanceDependence;
@property BOOL referenceShiftEnabled; // @synthesize referenceShiftEnabled=_referenceShiftEnabled;
@property BOOL showDirectionalLockIndicators; // @synthesize showDirectionalLockIndicators=_showDirectionalLockIndicators;
@property double directionalLockSharpness; // @synthesize directionalLockSharpness=_directionalLockSharpness;
@property double directionalLockStickiness; // @synthesize directionalLockStickiness=_directionalLockStickiness;
@property double directionalLockThreshold; // @synthesize directionalLockThreshold=_directionalLockThreshold;
@property BOOL directionalLockEnabled; // @synthesize directionalLockEnabled=_directionalLockEnabled;
@property BOOL playJumpSound; // @synthesize playJumpSound=_playJumpSound;
@property double jumpThreshold; // @synthesize jumpThreshold=_jumpThreshold;
@property BOOL jumpEnabled; // @synthesize jumpEnabled=_jumpEnabled;
@property BOOL showIdleIndicator; // @synthesize showIdleIndicator=_showIdleIndicator;
@property double delayBeforeIdle; // @synthesize delayBeforeIdle=_delayBeforeIdle;
@property double idleLeeway; // @synthesize idleLeeway=_idleLeeway;
@property double referenceShiftSpeed; // @synthesize referenceShiftSpeed=_referenceShiftSpeed;
@property double inputSmoothingFactor; // @synthesize inputSmoothingFactor=_inputSmoothingFactor;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setDefaultValues;

@end
