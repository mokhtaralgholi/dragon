//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CKAvatarContactNameCollectionReusableView : UICollectionReusableView
{
    BOOL _shouldDisplayTitle;
    long long _style;
    UILabel *_titleLabel;
}

+ (id)supplementaryViewKind;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) BOOL shouldDisplayTitle; // @synthesize shouldDisplayTitle=_shouldDisplayTitle;
@property(nonatomic) long long style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithEntity:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
