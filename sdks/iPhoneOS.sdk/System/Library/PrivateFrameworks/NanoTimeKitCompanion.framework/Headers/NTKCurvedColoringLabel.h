//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKColoringLabel.h>

@class CLKUICurvedLabel, UIView;

@interface NTKCurvedColoringLabel : NTKColoringLabel
{
    CLKUICurvedLabel *_curvedLabel;
}

// - (void).cxx_destruct;
- (void)_setAnimationAlpha:(double)arg1;
- (void)_setUpSnapshot;
- (void)getTextCenter:(CGPoint )arg1 startAngle:(double )arg2 endAngle:(double )arg3;
@property(readonly, nonatomic) CGRect textBoundingRect;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (void)setBounds:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)invalidateCachedSize;
- (void)setImageView:(id)arg1 placement:(NSUInteger)arg2 padding:(double)arg3;
@property(nonatomic) __weak UIView *imageView;
@property(nonatomic) double imagePadding;
@property(nonatomic) NSUInteger imagePlacement;
- (void)setTracking:(double)arg1;
- (id)textProviderFont;
- (void)setTextProviderFont:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (long long)numberOfLines;
- (void)setNumberOfLines:(long long)arg1;
- (double)alpha;
- (void)setAlpha:(double)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
@property(nonatomic) double maxAngularWidth;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (BOOL)isTextTruncated;
- (void)setUsesTextProviderTintColoring:(BOOL)arg1;
@property(nonatomic) double centerAngle;
@property(nonatomic) double circleRadius;
@property(nonatomic) BOOL interior;
- (double)_firstLineBaseline;
- (double)_lastLineBaseline;
- (id)initWithFrame:(CGRect)arg1;

@end
