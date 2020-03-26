//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class NSBundle, SFShareAudioConnectingViewController, SFShareAudioSessionClient, UIStoryboard;

@interface SFShareAudioViewController : UINavigationController
{
    unsigned int _flags;
    id /* CDUnknownBlockType */ _completion;
    SFShareAudioSessionClient *_shareAudioSession;
    NSBundle *_mainBundle;
    UIStoryboard *_mainStoryboard;
    SFShareAudioConnectingViewController *_vcConnecting;
}

+ (id)instantiateViewController;
@property(retain, nonatomic) SFShareAudioConnectingViewController *vcConnecting; // @synthesize vcConnecting=_vcConnecting;
@property(retain, nonatomic) UIStoryboard *mainStoryboard; // @synthesize mainStoryboard=_mainStoryboard;
@property(retain, nonatomic) NSBundle *mainBundle; // @synthesize mainBundle=_mainBundle;
@property(retain, nonatomic) SFShareAudioSessionClient *shareAudioSession; // @synthesize shareAudioSession=_shareAudioSession;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
// - (void).cxx_destruct;
- (void)_transitionToViewController:(id)arg1 animate:(BOOL)arg2;
- (void)_showConnecting:(id)arg1;
- (void)_showPairInstructions:(id)arg1;
- (void)_showConfirm:(id)arg1;
- (void)_showError:(id)arg1;
- (void)_showBringClose;
- (void)_sessionProgressEvent:(int)arg1 info:(id)arg2;
- (void)_sessionStart;
- (void)reportUserCancelled;
- (void)reportError:(id)arg1;
- (void)_reportCompletion:(id)arg1 mediaRouteID:(id)arg2;
- (id)_imageForPID:(unsigned int)arg1 colorCode:(unsigned int)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)_canShowWhileLocked;

@end
