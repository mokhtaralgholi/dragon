//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VideosExtrasZoomingImageTransitionParticipant-Protocol.h>

@class NSAttributedString, NSString, UIColor, UIImage;

@protocol VideosExtrasCarouselCollectionViewCell <VideosExtrasZoomingImageTransitionParticipant>
- (UIImage *)thumbnailImage;
- (NSString *)descriptionTextStyle;
- (NSString *)subtitleTextStyle;
- (NSString *)titleTextStyle;
- (void)setItemIndex:(NSUInteger)arg1;
- (NSUInteger)itemIndex;
- (void)setZoomingImageTransitionIdentifier:(NSString *)arg1;
- (void)setAllowsPinchingThumbnailImageForInteractiveZoomingImageTransition:(BOOL)arg1;
- (NSString *)descriptionText;
- (void)setDescriptionText:(NSAttributedString *)arg1;
- (NSString *)subtitleText;
- (void)setSubtitleText:(NSAttributedString *)arg1;
- (NSString *)titleText;
- (void)setTitleText:(NSAttributedString *)arg1;
- (void)setThumbnailOverlayImage:(UIImage *)arg1;
- (void)setThumbnailImageAccessibilityText:(NSString *)arg1;
- (void)setThumbnailImagePlaceholder:(UIImage *)arg1;
- (void)setThumbnailBorderColor:(UIColor *)arg1;
- (void)setThumbnailImage:(UIImage *)arg1;
- (CGSize)thumbnailMaxSize;
- (void)setThumbnailMaxSize:(CGSize)arg1;
@end
