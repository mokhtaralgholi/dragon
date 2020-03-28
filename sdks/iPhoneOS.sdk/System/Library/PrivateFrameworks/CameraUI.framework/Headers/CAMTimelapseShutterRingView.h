//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CAReplicatorLayer;

@interface CAMTimelapseShutterRingView : UIView
{
    BOOL _animating;
    double __smallTickRotationRadians;
    double __largeTickRotationRadians;
    CALayer *__smallTickLayer;
    CALayer *__largeTickLayer;
    CAReplicatorLayer *__smallTickReplicatorLayer;
    CAReplicatorLayer *__largeTickReplicatorLayer;
    CALayer *__timerHandLayer;
    CALayer *__timerHandParentLayer;
    CDStruct_8ae1ff66 _spec;
}

@property(readonly, nonatomic) CALayer *_timerHandParentLayer; // @synthesize _timerHandParentLayer=__timerHandParentLayer;
@property(readonly, nonatomic) CALayer *_timerHandLayer; // @synthesize _timerHandLayer=__timerHandLayer;
@property(readonly, nonatomic) CAReplicatorLayer *_largeTickReplicatorLayer; // @synthesize _largeTickReplicatorLayer=__largeTickReplicatorLayer;
@property(readonly, nonatomic) CAReplicatorLayer *_smallTickReplicatorLayer; // @synthesize _smallTickReplicatorLayer=__smallTickReplicatorLayer;
@property(readonly, nonatomic) CALayer *_largeTickLayer; // @synthesize _largeTickLayer=__largeTickLayer;
@property(readonly, nonatomic) CALayer *_smallTickLayer; // @synthesize _smallTickLayer=__smallTickLayer;
@property(readonly, nonatomic) double _largeTickRotationRadians; // @synthesize _largeTickRotationRadians=__largeTickRotationRadians;
@property(readonly, nonatomic) double _smallTickRotationRadians; // @synthesize _smallTickRotationRadians=__smallTickRotationRadians;
@property(nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
@property(readonly, nonatomic) CDStruct_8ae1ff66 spec; // @synthesize spec=_spec;
// - (void).cxx_destruct;
- (double)_rotationZFromTransform:(struct CATransform3D)arg1;
- (void)_addStopAnimations;
- (void)_addStartAnimations;
- (BOOL)_shouldUseAnimations;
- (void)_removeStopAnimations;
- (void)_removeStartAnimations;
- (void)_stopAnimating;
- (void)_startAnimating;
- (double)_tickRadiusForTickSize:(CGSize)arg1 ringSize:(CGSize)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (double)_rotationRadiansFromTickCount:(long long)arg1;
- (void)_commonCAMTimelapseShutterRingViewInitializationWithSpec:(CDStruct_8ae1ff66)arg1;
- (id)initWithFrame:(CGRect)arg1 spec:(CDStruct_8ae1ff66)arg2;
- (id)initWithSpec:(CDStruct_8ae1ff66)arg1;

@end
