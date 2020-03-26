//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIView;

@interface PKNumericBorderButton : UIButton
{
    UIView *_bottomBorder;
    UIView *_topBorder;
    UIView *_trailingBorder;
    UIView *_leadingBorder;
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
}

@property(copy, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(copy, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
// - (void).cxx_destruct;
- (void)setBorder:(NSUInteger)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)pk_applyAppearance:(id)arg1;

@end
