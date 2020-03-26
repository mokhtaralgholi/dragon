//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexPath, NSSet, PXPeopleSwipeSelectionManager;

@protocol PXPeopleSwipeSelectionManagerDelegate <NSObject>
- (void)swipeSelectionManager:(PXPeopleSwipeSelectionManager *)arg1 didSelectIndexPaths:(NSSet *)arg2;
- (NSSet *)swipeSelectionManager:(PXPeopleSwipeSelectionManager *)arg1 indexPathSetFromIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (NSIndexPath *)swipeSelectionManager:(PXPeopleSwipeSelectionManager *)arg1 itemIndexPathAtLocation:(CGPoint)arg2;
- (NSSet *)initialSelectedIndexPathsForSwipeSelectionManager:(PXPeopleSwipeSelectionManager *)arg1;

@optional
- (NSIndexPath *)swipeSelectionManager:(PXPeopleSwipeSelectionManager *)arg1 itemIndexPathClosestAboveLocation:(CGPoint)arg2;
- (NSIndexPath *)swipeSelectionManager:(PXPeopleSwipeSelectionManager *)arg1 itemIndexPathClosestLeadingLocation:(CGPoint)arg2;
@end
