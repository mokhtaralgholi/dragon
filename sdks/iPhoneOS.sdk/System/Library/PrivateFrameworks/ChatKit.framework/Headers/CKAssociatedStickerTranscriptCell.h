//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAssociatedMessageTranscriptCell.h>

#import <ChatKit/CKAnimationTimerObserver-Protocol.h>

@class CKAnimatedImage, CKBalloonImageView, NSArray, UIImage, UILongPressGestureRecognizer, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface CKAssociatedStickerTranscriptCell : CKAssociatedMessageTranscriptCell <CKAnimationTimerObserver>
{
    CKBalloonImageView *_imageView;
    UIImage *_image;
    CKAnimatedImage *_animatedImage;
    NSArray *_frames;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

+ (double)associatedStickerXOriginForStickerFrame:(CGRect)arg1 parentSize:(CGSize)arg2 contentAlignmentRect:(CGRect)arg3 orientation:(BOOL)arg4 geometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor)arg5 outBalloonOffset:(double )arg6;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(retain, nonatomic) CKAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) CKBalloonImageView *imageView; // @synthesize imageView=_imageView;
// - (void).cxx_destruct;
- (void)longPressGestureRecognized:(id)arg1;
- (void)doubleTapGestureRecognized:(id)arg1;
- (void)updateAnimationTimerObserving;
- (void)animationTimerFired:(NSUInteger)arg1;
- (void)performReload:(id /* CDUnknownBlockType */)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)performReveal:(id /* CDUnknownBlockType */)arg1;
- (void)performHide:(id /* CDUnknownBlockType */)arg1;
- (void)layoutSubviewsForDrawer;
- (void)layoutSubviewsForAlignmentContents;
- (void)didMoveToWindow;
- (void)prepareForReuse;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)configureForChatItem:(id)arg1;

@end
