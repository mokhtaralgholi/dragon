//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSOrderedSet;
@protocol PXPlacesMapLayoutItem;

@protocol PXPlacesMapLayoutItem <NSObject>
@property(readonly, nonatomic) NSOrderedSet *geotaggables;
@property struct CLLocationCoordinate2D coordinate;
- (BOOL)isEqualToLayoutItem:(id <PXPlacesMapLayoutItem>)arg1;
@end
