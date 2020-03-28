//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKMessageTypeSearchController.h>

#import <ChatKit/QLPreviewControllerDelegate-Protocol.h>

@interface CKPhotosSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate>
{
    NSUInteger _contentMode;
}

+ (Class)cellClass;
+ (id)indexingString;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (BOOL)supportsQuicklook;
@property(nonatomic) NSUInteger contentMode; // @synthesize contentMode=_contentMode;
- (NSDirectionalEdgeInsets)additionalGroupInsets;
- (void)saveAttachmentForResult:(id)arg1;
- (id)_activityItemProviderForResult:(id)arg1;
- (id)_pasteboardItemsForResult:(id)arg1;
- (id)previewViewControllerForResult:(id)arg1;
- (id)_additionalMenuActionsForResult:(id)arg1;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (void)fractionalWidth:(double )arg1 count:(NSUInteger )arg2 forLayoutWidth:(NSUInteger)arg3;
- (void)_filterControlTapped:(id)arg1;
- (void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2;
- (id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3;
- (Class)headerOverrideClass;
- (BOOL)wantsHeaderSection;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (double)interGroupSpacing;
- (double)_internalInterGroupSpacing;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id)queryResultsForItems:(id)arg1;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (id)filterQueries;
- (id)queryAttributesForText:(id)arg1;
- (id)fetchAttributes;
- (id)initWithSectionIndex:(NSUInteger)arg1;

@end
