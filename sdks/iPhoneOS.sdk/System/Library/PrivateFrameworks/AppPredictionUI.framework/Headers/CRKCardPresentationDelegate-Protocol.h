//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIViewController;
@protocol CRKAnimationCoordinating, CRKCardPresenting, CRKCardViewControllerDelegate, CRKCardViewControlling, CRKIdentifiedCardSectionViewProviding, CRKIdentifiedProviding;

@protocol CRKCardPresentationDelegate <NSObject>

@optional
@property(readonly, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
- (double)boundingWidthForPresentation:(id <CRKCardPresenting>)arg1;
- (void)cardPresentation:(id <CRKCardPresenting>)arg1 willTransitionFromCardViewController:(UIViewController<CRKCardViewControlling> *)arg2 toCardViewController:(UIViewController<CRKCardViewControlling> *)arg3 withAnimationCoordinator:(id <CRKAnimationCoordinating>)arg4;
- (long long)semanticContentAttributeForCardPresentation:(id <CRKCardPresenting>)arg1;
- (long long)cardPresentation:(id <CRKCardPresenting>)arg1 compareCardSectionViewProviderOne:(id <CRKIdentifiedCardSectionViewProviding>)arg2 providerTwo:(id <CRKIdentifiedCardSectionViewProviding>)arg3;
- (long long)cardPresentation:(id <CRKCardPresenting>)arg1 compareCardViewControllerProviderOne:(id <CRKIdentifiedProviding>)arg2 providerTwo:(id <CRKIdentifiedProviding>)arg3;
@end
