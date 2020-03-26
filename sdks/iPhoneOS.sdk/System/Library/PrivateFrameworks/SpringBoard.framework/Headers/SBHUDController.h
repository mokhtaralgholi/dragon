//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/_SBHUDHostViewControllerDelegate-Protocol.h>

@class NSCountedSet, NSString, SBHUDSettings, SBMainScreenActiveInterfaceOrientationWindow, UIScreen, _SBHUDHostViewController;
@protocol BSInvalidatable;

@interface SBHUDController : NSObject <_SBHUDHostViewControllerDelegate, PTSettingsKeyObserver, BSDescriptionProviding, UIViewControllerTransitioningDelegate>
{
    NSCountedSet *_hudHiddenAssertions;
    id <BSInvalidatable> _stateCaptureHandle;
    UIScreen *_screen;
    SBMainScreenActiveInterfaceOrientationWindow *_hudWindow;
    _SBHUDHostViewController *_hudViewController;
    SBHUDSettings *_settings;
}

+ (id)_defaultCrossfadeAnimatorForHUDController:(id)arg1;
@property(readonly, nonatomic) SBHUDSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) _SBHUDHostViewController *hudViewController; // @synthesize hudViewController=_hudViewController;
@property(readonly, nonatomic) SBMainScreenActiveInterfaceOrientationWindow *hudWindow; // @synthesize hudWindow=_hudWindow;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
// - (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)hudViewController:(id)arg1 willPresentHUD:(id)arg2;
- (void)hudViewController:(id)arg1 didPresentHUD:(id)arg2;
- (void)hudViewController:(id)arg1 didDismissHUD:(id)arg2;
- (void)hudViewController:(id)arg1 willDismissHUD:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_notificationWhichWeWantToUseToTearEverythingDown:(id)arg1;
- (void)_tearDown;
- (void)_tearDownIfNoHuds;
- (void)_createHUDWindowIfNeeded;
- (void)_finishedTransitionForHUD:(id)arg1 intendedState:(long long)arg2 finalState:(long long)arg3;
- (void)_dismissHUD:(id)arg1 animated:(BOOL)arg2;
- (void)_presentHUD:(id)arg1 animated:(BOOL)arg2;
- (void)dismissHUDs:(BOOL)arg1;
- (id)acquireHUDHiddenAssertionForIdentifier:(id)arg1 withReason:(id)arg2;
- (id)HUDSessionForViewController:(id)arg1 identifier:(id)arg2;
- (id)knownHUDControllerForIdentifier:(id)arg1;
- (id)presentedHUDControllerForIdentifier:(id)arg1;
@property(readonly, nonatomic) BOOL anyHUDsVisible;
- (id)knownHUDs;
- (id)presentingHUDs;
- (id)presentedHUDs;
- (void)_setupStateCapture;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithScreen:(id)arg1;
- (id)init;

@end
