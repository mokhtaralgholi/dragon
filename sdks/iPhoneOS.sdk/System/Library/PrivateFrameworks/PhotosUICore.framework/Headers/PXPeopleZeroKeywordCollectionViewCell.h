//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSearchZeroKeywordCollectionViewCell.h>

@class UIView;

@interface PXPeopleZeroKeywordCollectionViewCell : PXSearchZeroKeywordCollectionViewCell
{
    UIView *_peopleContentView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIView *peopleContentView; // @synthesize peopleContentView=_peopleContentView;
// - (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setThumbnailSize:(CGSize)arg1;
- (void)setPeople:(id)arg1 withThumbnailSize:(CGSize)arg2;

@end
