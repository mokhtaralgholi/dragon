//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUICachedLayout-Protocol.h>

@class NSAttributedString, NSShadow, NSStringDrawingContext;

__attribute__((visibility("hidden")))
@interface SKUIAttributedStringLayout : NSObject <SKUICachedLayout>
{
    NSAttributedString *_attributedString;
    CGSize _boundingSize;
    NSStringDrawingContext *_context;
    double _topInset;
    BOOL _usesTallCharacterSet;
    UIEdgeInsets _edgeInsetsForShadow;
    NSShadow *_shadow;
}

@property(readonly, nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(readonly, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(readonly, nonatomic) UIEdgeInsets edgeInsetsForShadow; // @synthesize edgeInsetsForShadow=_edgeInsetsForShadow;
@property(readonly, nonatomic) BOOL usesTallCharacterSet; // @synthesize usesTallCharacterSet=_usesTallCharacterSet;
@property(readonly, nonatomic) NSStringDrawingContext *stringDrawingContext; // @synthesize stringDrawingContext=_context;
@property(readonly, nonatomic) CGSize boundingSize; // @synthesize boundingSize=_boundingSize;
@property(readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
// - (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfLines;
@property(readonly, nonatomic) double firstBaselineOffset;
@property(readonly, nonatomic) double baselineOffset;
- (id)initWithLayoutRequest:(id)arg1;

@end
