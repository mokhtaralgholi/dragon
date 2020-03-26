//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookCoverUtility/BCUBookCoverEffectsFilter-Protocol.h>
#import <BookCoverUtility/BCUImageFilter-Protocol.h>

@class BCULayerRenderer, NSString, _BCUCoverEffectsAssets, _BCUCoverEffectsShadow;

@interface _BCUCoverEffectsBase : NSObject <BCUBookCoverEffectsFilter, BCUImageFilter>
{
    _BCUCoverEffectsAssets *_assets;
    _BCUCoverEffectsShadow *_shadow;
    _BCUCoverEffectsShadow *_seriesShadow;
    BOOL _shadowOnly;
    BOOL _restricted;
    NSString *_identifier;
    BCULayerRenderer *_renderer;
}

@property(retain, nonatomic) BCULayerRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)newOperationWithImage:(CGImage )arg1 size:(CGSize)arg2 contentsScale:(double)arg3 priority:(float)arg4 options:(id)arg5 completion:(id /* CDUnknownBlockType */)arg6;
- (id)_coverLayerWithImage:(CGImage )arg1 size:(CGSize)arg2;
- (id)_layerWithImage:(CGImage )arg1 size:(CGSize)arg2 scale:(double)arg3 shadow:(id)arg4;
- (CGImage )newRestrictedImage:(CGImage )arg1 size:(CGSize)arg2;
- (id)_shadowLayerWithImage:(CGImage )arg1 size:(CGSize)arg2 tint:(BOOL)arg3 shadow:(id)arg4;
- (id)coverLayerWithImage:(CGImage )arg1 size:(CGSize)arg2 contentsScale:(double)arg3;
- (id)shadowLayerWithImage:(CGImage )arg1 size:(CGSize)arg2 contentsScale:(double)arg3 kind:(NSUInteger)arg4;
- (double)_assetsScale;
- (double)tintBlurRadius;
- (double)cornerRadius;
- (BOOL)includeBinding;
- (id)initWithIdentifier:(id)arg1 renderer:(id)arg2 assets:(id)arg3 shadow:(id)arg4 seriesShadow:(id)arg5 shadowOnly:(BOOL)arg6 restricted:(BOOL)arg7;
- (id)initWithIdentifier:(id)arg1 renderer:(id)arg2 assets:(id)arg3 shadow:(id)arg4 seriesShadow:(id)arg5 shadowOnly:(BOOL)arg6;

@end
