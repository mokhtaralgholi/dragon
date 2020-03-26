//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TSDRep, TSWPHyperlinkField, TSWPSmartField;

@protocol TSWPHyperlinkHostRepProtocol <NSObject>
- (TSDRep *)hyperlinkContainerRep;
- (void)willDisplayEditHyperlinkUIForHyperlinkField:(TSWPHyperlinkField *)arg1 beginEditing:(BOOL)arg2;
- (CGRect)naturalBoundsRectForHyperlinkField:(TSWPHyperlinkField *)arg1;
- (void)setHighlightedHyperlinkField:(TSWPHyperlinkField *)arg1;
- (TSWPSmartField *)smartFieldAtPoint:(CGPoint)arg1;

@optional
- (BOOL)shouldDismissHyperlinkUIOnApplicationEnterBackground;
- (BOOL)shouldUseHyperlinkHighlight;
- (void)didDismissEditHyperlinkUIForHyperlinkField:(TSWPHyperlinkField *)arg1;
- (TSWPHyperlinkField *)hyperlinkFieldForEditingHyperlinkField:(TSWPHyperlinkField *)arg1;
@end
