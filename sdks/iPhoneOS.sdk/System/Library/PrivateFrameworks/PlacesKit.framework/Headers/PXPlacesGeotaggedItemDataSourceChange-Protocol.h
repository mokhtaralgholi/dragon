//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSSet;
@protocol PXPlacesGeotaggedItemDataSourceChange;

@protocol PXPlacesGeotaggedItemDataSourceChange <NSObject>
@property(readonly) NSSet *updatedItems;
@property(readonly) NSSet *removedItems;
@property(readonly) NSSet *addedItems;
- (BOOL)hasChanges;
- (void)updateWithChange:(id <PXPlacesGeotaggedItemDataSourceChange>)arg1;
@end
