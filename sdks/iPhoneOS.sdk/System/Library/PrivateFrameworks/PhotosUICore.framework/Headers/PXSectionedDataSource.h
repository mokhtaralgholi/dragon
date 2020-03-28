//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXSectionedLayoutEngineDataSourceSnapshot-Protocol.h>

@class NSString, PXIndexPathSet;
@protocol OS_os_log;

@interface PXSectionedDataSource : NSObject <NSCopying, PXSectionedLayoutEngineDataSourceSnapshot>
{
    NSUInteger _identifier;
}

+ (id)emptyDataSource;
@property(readonly, nonatomic) NSUInteger identifier; // @synthesize identifier=_identifier;
- (long long)_numberOfAssetsWithMaximum:(long long)arg1;
- (id)inputForItem:(id)arg1;
- (id)fetchAllItemObjects;
- (void)prefetchSections:(id)arg1;
- (void)prefetchIndexPaths:(id)arg1;
- (BOOL)couldObjectReferenceAppear:(id)arg1;
- (id)indexPathSetFromIndexPath:(struct PXSimpleIndexPath)arg1 toIndexPath:(struct PXSimpleIndexPath)arg2;
- (id)itemIndexPathsForSections:(id)arg1;
- (id)indexPathSetForItemsInIndexPath:(struct PXSimpleIndexPath)arg1;
@property(readonly, nonatomic) PXIndexPathSet *allItemIndexPaths;
@property(readonly, nonatomic) struct PXSimpleIndexPath lastItemIndexPath;
@property(readonly, nonatomic) struct PXSimpleIndexPath firstItemIndexPath;
@property(readonly, nonatomic) PXIndexPathSet *allSectionIndexPaths;
@property(readonly, nonatomic) struct PXSimpleIndexPath lastSectionIndexPath;
@property(readonly, nonatomic) struct PXSimpleIndexPath firstSectionIndexPath;
- (void)enumerateItemIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath)arg1 untilEndIndexPath:(struct PXSimpleIndexPath)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (void)enumerateItemIndexPathsStartingAtIndexPath:(struct PXSimpleIndexPath)arg1 reverseDirection:(BOOL)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
@property(readonly, nonatomic) BOOL containsMultipleItems;
@property(readonly, nonatomic) BOOL containsAnyItems;
- (struct PXSimpleIndexPath)convertIndexPath:(struct PXSimpleIndexPath)arg1 fromSectionedDataSource:(id)arg2;
- (id)objectReferenceForObjectReference:(id)arg1;
- (id)objectReferenceAtIndexPath:(struct PXSimpleIndexPath)arg1;
@property(readonly, nonatomic) NSObject<OS_os_log> *sectionedDataSourceLog;
- (Class)objectReferenceClassForSubItem;
- (Class)objectReferenceClassForItem;
- (Class)objectReferenceClassForSection;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
@property(readonly, nonatomic) long long numberOfSections;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (NSUInteger)totalItemCount;

@end
