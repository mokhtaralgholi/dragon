//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class HMDHAPAccessory;

@interface HMDTargetControllerErrorEvent : HMDLogEvent <HMDAWDLogEvent>
{
    NSUInteger _errorType;
    HMDHAPAccessory *_accessory;
}

+ (id)errorEventWithErrorType:(NSUInteger)arg1 accessory:(id)arg2;
+ (id)uuid;
@property(readonly, nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSUInteger errorType; // @synthesize errorType=_errorType;
// - (void).cxx_destruct;
- (id)initWithErrorType:(NSUInteger)arg1 accessory:(id)arg2;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;

@end
