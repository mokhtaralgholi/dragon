//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXProtoMutableFeatureView-Protocol.h>

@class UIColor, UIImageView;
@protocol PXProtoFeature;

@interface PXProtoFeatureView : UIView <PXProtoMutableFeatureView>
{
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct {
        BOOL content;
    } _needsUpdateFlags;
    BOOL _selected;
    BOOL _disabled;
    BOOL _shouldUpdateContentOnResize;
    id <PXProtoFeature> _feature;
    UIImageView *__removeIconView;
    UIView *_contentView;
    UIEdgeInsets _minimumMargins;
}

@property(readonly, nonatomic) UIEdgeInsets minimumMargins; // @synthesize minimumMargins=_minimumMargins;
@property(readonly, nonatomic) BOOL shouldUpdateContentOnResize; // @synthesize shouldUpdateContentOnResize=_shouldUpdateContentOnResize;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIImageView *_removeIconView; // @synthesize _removeIconView=__removeIconView;
@property(readonly, nonatomic, getter=isDisabled) BOOL disabled; // @synthesize disabled=_disabled;
@property(readonly, nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) id <PXProtoFeature> feature; // @synthesize feature=_feature;
// - (void).cxx_destruct;
- (void)_updateContentIfNeeded;
- (void)_invalidateContent;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)performChanges:(id /* CDUnknownBlockType */)arg1;
- (UIEdgeInsets)_contentInsets;
- (CGRect)_contentViewFrame;
- (void)updateContent;
@property(readonly, nonatomic) BOOL wantsContentView;
@property(readonly, nonatomic) UIColor *preferredBackgroundColor;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(readonly, nonatomic) CGSize compactContentSize;
@property(readonly, nonatomic) CGSize regularContentSize;
@property(readonly, nonatomic) double recommendedCompactContentHeight;
- (CGSize)intrinsicContentSize;
- (BOOL)canBecomeFocused;

@end
