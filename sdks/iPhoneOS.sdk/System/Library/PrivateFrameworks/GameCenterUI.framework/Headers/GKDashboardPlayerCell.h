//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class GKDashboardPlayerShadowView, GKPlayer, NSLayoutConstraint, UIColor, UILabel, UIView;

@interface GKDashboardPlayerCell : UICollectionViewCell
{
    BOOL _onDarkBackground;
    GKPlayer *_player;
    GKDashboardPlayerShadowView *_playerView;
    NSLayoutConstraint *_playerViewBottomToNameLabelTopConstraint;
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    UIColor *_nameColor;
    UIColor *_statusColor;
    double _playerViewBottomToNameLabelTopConstant;
}

+ (double)preferredCollectionHeight;
+ (CGSize)defaultSize;
@property(nonatomic) double playerViewBottomToNameLabelTopConstant; // @synthesize playerViewBottomToNameLabelTopConstant=_playerViewBottomToNameLabelTopConstant;
@property(retain, nonatomic) UIColor *statusColor; // @synthesize statusColor=_statusColor;
@property(retain, nonatomic) UIColor *nameColor; // @synthesize nameColor=_nameColor;
@property(nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) NSLayoutConstraint *playerViewBottomToNameLabelTopConstraint; // @synthesize playerViewBottomToNameLabelTopConstraint=_playerViewBottomToNameLabelTopConstraint;
@property(nonatomic) GKDashboardPlayerShadowView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) BOOL onDarkBackground; // @synthesize onDarkBackground=_onDarkBackground;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)canBecomeFocused;
- (void)updateLabelColorForDashboard;
- (void)setStatusWithLastPlayedDate:(id)arg1;
- (void)setStatusText:(id)arg1;
- (void)setNameText:(id)arg1;
@property(readonly, nonatomic) UIView *popoverSourceView;
- (void)dealloc;
- (void)awakeFromNib;

@end
