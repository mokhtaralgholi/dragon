//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDRep, TSPData;
@protocol TSDImageDrawingDataSource;

__attribute__((visibility("hidden")))
@interface TSDImageDrawingHelper : NSObject
{
    TSDRep<TSDImageDrawingDataSource> *_rep;
}

@property(readonly, nonatomic) __weak TSDRep<TSDImageDrawingDataSource> *rep; // @synthesize rep=_rep;
// - (void).cxx_destruct;
- (CGSize)p_desiredSizedImageSize;
- (id)p_validatedThumbnailImageProvider;
- (id)p_validatedBitmapImageProvider;
- (id)p_validatedImageProvider;
- (id)p_imageProvider;
- (CGSize)p_imagePixelSize;
@property(readonly, nonatomic) BOOL shouldShowCheckerboard;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(CGContext )arg2;
@property(readonly, nonatomic) BOOL drawsBitmap;
@property(readonly, nonatomic) BOOL drawsError;
@property(readonly, nonatomic) TSPData *imageDataForDrawing;
- (BOOL)p_canDrawThumbnailAsSizedImage;
- (CGRect)p_antialiasingDefeatedRectForRect:(CGRect)arg1 inContext:(CGContext )arg2;
- (void)drawInContext:(CGContext )arg1 forLayer:(BOOL)arg2 forShadowOrHitTest:(BOOL)arg3;
- (CGRect)imageRectInContext:(CGContext )arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithRep:(id)arg1;

@end
