//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKExplanationViewController.h>

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSString, PKMobileAssetManager, PKPaymentHeroImageController, PKPaymentPass, PKPaymentSetupHeroView, PKPaymentSetupInitialCardEducationIconsView, UIImageView, UILabel, UIView;

@interface PKEducationViewController : PKExplanationViewController <PKExplanationViewDelegate>
{
    UIImageView *_heroPhone;
    UIView *_heroPhoneBackground;
    UIImageView *_passSnapshot;
    UILabel *_instructionLabel;
    PKPaymentHeroImageController *_heroImageController;
    PKPaymentSetupHeroView *_heroView;
    PKPaymentSetupInitialCardEducationIconsView *_iconsView;
    PKMobileAssetManager *_mobileAssetManager;
    PKPaymentPass *_paymentPass;
    NSUInteger _educationContext;
    BOOL _isFaceIDDevice;
    BOOL _isPad;
    double _maxHeight;
    AVPlayerLayer *_video;
    UIView *_videoBoundingView;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    BOOL _playerStarted;
    BOOL _invalidated;
    BOOL _offerAddToWatch;
    id /* CDUnknownBlockType */ _continueHandler;
    NSString *_titleOverride;
    NSString *_bodyAddition;
}

+ (id)assetBackgroundColorPad;
+ (id)assetBackgroundColor;
+ (BOOL)shouldPresentForPass:(id)arg1 inEducationContext:(NSUInteger)arg2;
@property(copy, nonatomic) NSString *bodyAddition; // @synthesize bodyAddition=_bodyAddition;
@property(copy, nonatomic) NSString *titleOverride; // @synthesize titleOverride=_titleOverride;
@property(nonatomic) BOOL offerAddToWatch; // @synthesize offerAddToWatch=_offerAddToWatch;
@property(copy, nonatomic) id /* CDUnknownBlockType */ continueHandler; // @synthesize continueHandler=_continueHandler;
// - (void).cxx_destruct;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (void)_performAddToWatchFlow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)_removePlayerItem;
- (void)didFinishPlaying;
- (void)invalidate;
- (void)performContinue;
- (void)startPlayingVideo;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 setupContext:(long long)arg2 educationContext:(NSUInteger)arg3;
- (id)init;
- (BOOL)_canShowWhileLocked;

@end
