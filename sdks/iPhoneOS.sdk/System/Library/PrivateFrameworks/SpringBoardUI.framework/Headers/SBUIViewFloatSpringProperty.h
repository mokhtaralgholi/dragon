//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewFloatAnimatableProperty.h>


@interface SBUIViewFloatSpringProperty : UIViewFloatAnimatableProperty <UIViewSpringAnimationBehaviorDescribing>
{
    double _dampingRatio;
    double _response;
    double _impulse;
    double _trackingDampingRatio;
    double _trackingResponse;
    double _trackingImpulse;
    BOOL _tracking;
}

+ (void)_withoutAnimation:(id /* CDUnknownBlockType */)arg1;
@property(nonatomic) BOOL tracking; // @synthesize tracking=_tracking;
- (double)projectForTime:(double)arg1;
- (double)projectForDeceleration:(double)arg1;
- (CDStruct_aa45ca86)parametersForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)setTrackingDampingRatio:(double)arg1 response:(double)arg2 impulse:(double)arg3;
- (void)setTrackingDampingRatio:(double)arg1 response:(double)arg2;
- (void)setDampingRatio:(double)arg1 response:(double)arg2 impulse:(double)arg3;
- (void)setDampingRatio:(double)arg1 response:(double)arg2;
@property(nonatomic) double output;
@property(nonatomic) double input;
- (id)init;

@end
