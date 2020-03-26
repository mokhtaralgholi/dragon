//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <SpringBoardUIServices/SBUILegibility-Protocol.h>
#import <SpringBoardUIServices/_SBFVibrantView-Protocol.h>

@class NSString, SBUILegibilityLabel, SBUILegibilityView, UIImage, UIImageView, UILabel, UIView, _SBFVibrantSettings, _UILegibilitySettings;

@interface SBUIVibrantButton : UIControl <_SBFVibrantView, SBUILegibility>
{
    _SBFVibrantSettings *_vibrantSettings;
    _UILegibilitySettings *_legibilitySettings;
    UIImage *_glyphImage;
    NSString *_title;
    double _minimumTitleScaleFactor;
    long long _numberOfLines;
    long long _textAlignment;
    long long _lineBreakMode;
    UIView *_vibrantMaskView;
    UILabel *_vibrantMaskLabel;
    UIImageView *_vibrantMaskGlyphView;
    UIView *_vibrantGlyph;
    UIView *_vibrantGlyphBackgroundView;
    UIView *_vibrantGlyphTintView;
    UIView *_nonVibrantGlyph;
    SBUILegibilityView *_nonVibrantGlyphLegibilityView;
    SBUILegibilityLabel *_nonVibrantLegibilityLabel;
    BOOL _vibrancyAllowed;
    double _strength;
}

+ (id)_labelFont;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic, getter=isVibrancyAllowed) BOOL vibrancyAllowed; // @synthesize vibrancyAllowed=_vibrancyAllowed;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(retain, nonatomic) _SBFVibrantSettings *vibrantSettings; // @synthesize vibrantSettings=_vibrantSettings;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) double minimumTitleScaleFactor; // @synthesize minimumTitleScaleFactor=_minimumTitleScaleFactor;
@property(retain, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
// - (void).cxx_destruct;
- (void)setLegibilitySettings:(id)arg1 textStrength:(double)arg2;
- (void)setBackgroundView:(id)arg1;
- (void)_updateForState;
- (double)_alphaForState;
- (id)_lazyGlyphLegibilityView;
- (void)_layoutNonVibrantSubviews;
- (void)_layoutVibrantSubviews;
- (CGRect)_glyphFrameForSize:(CGSize)arg1 inRect:(CGRect)arg2;
- (CGRect)_labelFrameForSize:(CGSize)arg1 baselineOffset:(double)arg2 inRect:(CGRect)arg3;
- (CGSize)_sizeThatFitsForLabelView:(id)arg1;
- (CGSize)_sizeThatFitsWithoutVibrancy;
- (CGSize)_sizeThatFitsWithVibrancy;
- (void)_setUpForCurrentVibrancy;
- (BOOL)_shouldUseVibrancy;
- (void)setHighlighted:(BOOL)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
