//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, UITableView, UIVisualEffectView;

@interface HKSplashScreenView : UIView
{
    UILabel *_titleLabel;
    UITableView *_featureTableView;
    UIButton *_continueButton;
    UIVisualEffectView *_topBlurView;
    UIVisualEffectView *_bottomBlurView;
}

@property(retain, nonatomic) UIVisualEffectView *bottomBlurView; // @synthesize bottomBlurView=_bottomBlurView;
@property(retain, nonatomic) UIVisualEffectView *topBlurView; // @synthesize topBlurView=_topBlurView;
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) UITableView *featureTableView; // @synthesize featureTableView=_featureTableView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
// - (void).cxx_destruct;
- (void)updateTableViewInsetsForHeaderAndFooterBlurView;
- (void)layoutSubviews;
- (void)updateForFontOrTextChange;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
