//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class UIScrollView, UITraitCollection;

@protocol TUBarCompressionAnimating
@property(nonatomic) double topOffset;
@property(readonly, nonatomic) BOOL shouldCompressAtTop;
- (void)reloadWithTraitCollection:(UITraitCollection *)arg1;
- (double)minimumBarHeightForTraitCollection:(UITraitCollection *)arg1;
- (double)maximumBarHeightForTraitCollection:(UITraitCollection *)arg1;
- (BOOL)animationShouldBeginForScrollView:(UIScrollView *)arg1 currentlyFullyCompressed:(BOOL)arg2;
- (void)scrollViewIsAtTop:(BOOL)arg1;
- (void)updateWithPercentage:(double)arg1;
@end
