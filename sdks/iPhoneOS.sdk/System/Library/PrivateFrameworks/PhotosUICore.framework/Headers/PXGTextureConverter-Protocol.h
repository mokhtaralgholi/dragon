//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSObject, PXGImageTexture, PXGPayloadTexture;
@protocol NSCopying, OS_dispatch_queue, PXGTextureAtlasManager;

@protocol PXGTextureConverter <NSObject>
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property(readonly, nonatomic) BOOL supportsTextureAtlas;
@property(readonly, nonatomic) PXGImageTexture *transparentTexture;
@property(readonly, nonatomic) int presentationType;
- (id <PXGTextureAtlasManager>)createTextureAtlasManagerForImageDataSpec:(CDStruct_1b544862)arg1;
- (PXGPayloadTexture *)createPayloadTextureFromPayload:(id <NSCopying>)arg1;
- (PXGImageTexture *)createTextureFromCVPixelBuffer:(struct __CVBuffer )arg1 transform:(CGAffineTransform)arg2;
- (PXGImageTexture *)createTextureFromCGImage:(CGImage )arg1 orientation:(unsigned int)arg2;
@end
