//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSystemGestureRecognizerDelegate-Protocol.h>

@class BSMonotonicReferenceTime, UIImageView, UIPanGestureRecognizer, UIView, _UIBackdropView;
@protocol BSInvalidatable, SBGrabberTongueDelegate;

@interface SBGrabberTongue : NSObject <SBSystemGestureRecognizerDelegate>
{
    BOOL _invalidated;
    UIPanGestureRecognizer *_edgePullGestureRecognizer;
    UIView *_tongueContainer;
    _UIBackdropView *_tongueBackdropView;
    UIImageView *_tongueChevron;
    BOOL _tongueVisible;
    BOOL _inPullGesture;
    BOOL _inShowTongueGesture;
    BOOL _inDismissTongueGesture;
    BOOL _inAmbiguousGesture;
    BOOL _beganAmbiguousPullGesture;
    NSUInteger _screenEdge;
    NSUInteger _systemGestureType;
    UIView *_containingView;
    BSMonotonicReferenceTime *_gestureStartReferenceTime;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
    id <SBGrabberTongueDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SBGrabberTongueDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_handlePullGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)_updateCancelsTouchesWithRecognizer:(id)arg1;
- (double)_edgeOrientedVelocityForRecognizer:(id)arg1;
- (double)_distanceFromEdgeForRecognizer:(id)arg1;
- (CGAffineTransform)_transformForTongueContainer;
- (CGRect)_chevronFrameForTongueBounds:(CGRect)arg1;
- (UIEdgeInsets)_grabberTongueScreenInsets;
- (CGRect)_frameForTongueWhenVisible:(BOOL)arg1;
- (void)_presentTongueAnimated:(BOOL)arg1;
- (void)_dismissTongueWithStyle:(long long)arg1 animated:(BOOL)arg2;
- (void)_cancelPendingTongueDismissRequests;
- (void)_dismissTongue:(id)arg1;
- (id)_newChevronView;
- (id)_newBackdropViewWithColorStyle:(long long)arg1;
- (id)_createEdgePullGestureRecognizerWithAction:(SEL)arg1;
- (void)_createTongueAndGestureRecognizersIfNecessaryWithColorStyle:(long long)arg1;
- (void)_didPresentInteractively:(id)arg1;
- (void)_willPresentInteractively:(id)arg1;
- (void)_didDismiss;
- (void)_willDismiss;
- (void)_willPresent;
- (void)_pullGestureCanceled:(id)arg1;
- (void)_pullGestureEnded:(id)arg1;
- (void)_pullGestureUpdated:(id)arg1;
- (void)_pullGestureBegan:(id)arg1;
- (double)_centerOnScreenEdge;
- (double)_ambiguousActivationMarginIfHonored;
- (double)_ambiguousActivationMargin;
- (BOOL)_shouldAllowSecondSwipeWithRecognizer:(id)arg1;
- (BOOL)_shouldReceiveTouch:(id)arg1;
- (BOOL)_shouldShowTongueOnFirstSwipeWithRecognizer:(id)arg1;
- (BOOL)_tongueOrPullEnabled;
@property(readonly, nonatomic, getter=isVisible) BOOL visible;
- (BOOL)isEdgeLocationInGrabberRegion:(double)arg1;
- (double)edgeLocationForTouch:(id)arg1;
- (double)edgeOrientedVelocity;
- (double)distanceFromEdge;
- (id)edgePullGestureRecognizer;
- (BOOL)dismissWithStyle:(long long)arg1 animated:(BOOL)arg2;
- (void)presentAnimated:(BOOL)arg1;
- (void)uninstall;
- (void)installInView:(id)arg1 withColorStyle:(long long)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 edge:(NSUInteger)arg2 type:(NSUInteger)arg3;
- (id)init;

@end
