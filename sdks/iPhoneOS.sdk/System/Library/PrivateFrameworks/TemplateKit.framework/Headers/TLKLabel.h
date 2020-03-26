//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class TLKFormattedText, TLKMultilineText, TLKRichText, UIFont;

@interface TLKLabel : UILabel
{
    BOOL _supportsColorGlyphs;
    BOOL _hasCustomTextColor;
    BOOL _attributedTextExplicitelySet;
    BOOL _attributedTextUpdateDisabled;
    BOOL _attributedTextUpdateSkipped;
    NSUInteger _prominence;
    TLKRichText *_richText;
    UILabel *_overlayLabelForNonColoredGlyphs;
    UIFont *_originalFont;
}

+ (id)genericLabel;
+ (id)tertiaryLabel;
+ (id)secondaryLabel;
+ (id)primaryLabel;
@property BOOL attributedTextUpdateSkipped; // @synthesize attributedTextUpdateSkipped=_attributedTextUpdateSkipped;
@property BOOL attributedTextUpdateDisabled; // @synthesize attributedTextUpdateDisabled=_attributedTextUpdateDisabled;
@property BOOL attributedTextExplicitelySet; // @synthesize attributedTextExplicitelySet=_attributedTextExplicitelySet;
@property BOOL hasCustomTextColor; // @synthesize hasCustomTextColor=_hasCustomTextColor;
@property(retain) UIFont *originalFont; // @synthesize originalFont=_originalFont;
@property(retain, nonatomic) UILabel *overlayLabelForNonColoredGlyphs; // @synthesize overlayLabelForNonColoredGlyphs=_overlayLabelForNonColoredGlyphs;
@property(nonatomic) BOOL supportsColorGlyphs; // @synthesize supportsColorGlyphs=_supportsColorGlyphs;
@property(retain, nonatomic) TLKRichText *richText; // @synthesize richText=_richText;
@property(nonatomic) NSUInteger prominence; // @synthesize prominence=_prominence;
// - (void).cxx_destruct;
- (void)updateWithString:(id)arg1;
- (void)updateWithAttributedString:(id)arg1;
- (void)updateAttributedText;
- (void)performBatchUpdates:(id /* CDUnknownBlockType */)arg1;
- (void)setTextColor:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)setAttributedText:(id)arg1;
@property(retain, nonatomic) TLKFormattedText *formattedText;
@property(retain, nonatomic) TLKMultilineText *multilineText;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setFont:(id)arg1 keepOriginal:(BOOL)arg2;
- (void)setFont:(id)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)layoutSubviews;
- (id)initWithProminence:(NSUInteger)arg1;
- (id)init;

@end
