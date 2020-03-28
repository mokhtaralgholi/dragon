//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SBFolderController, SBFolderPresentingViewController, SBNestingViewController, UIView;
@protocol SBViewControllerTransitionCoordinator, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@protocol SBFolderPresentingViewControllerDelegate <NSObject>

@optional
- (UIView *)folderPresentationController:(SBFolderPresentingViewController *)arg1 sourceViewForPresentingViewController:(SBNestingViewController *)arg2;
- (double)minimumHomeScreenScaleForFolderPresentationController:(SBFolderPresentingViewController *)arg1;
- (double)statusBarHeightForFolderPresentationController:(SBFolderPresentingViewController *)arg1;
- (void)folderPresentationController:(SBFolderPresentingViewController *)arg1 willPerformTransitionWithFolder:(SBFolderController *)arg2 presenting:(BOOL)arg3 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg4;
- (id <UIViewControllerInteractiveTransitioning>)folderPresentationController:(SBFolderPresentingViewController *)arg1 interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning>)arg2;
- (id <UIViewControllerAnimatedTransitioning>)folderPresentationController:(SBFolderPresentingViewController *)arg1 animationControllerForTransitionWithFolder:(SBFolderController *)arg2 presenting:(BOOL)arg3 animated:(BOOL)arg4;
@end
