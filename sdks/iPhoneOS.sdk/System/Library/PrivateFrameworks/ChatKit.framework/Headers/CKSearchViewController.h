//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKScrollViewController.h>

#import <ChatKit/CKSearchControllerDelegate-Protocol.h>
#import <ChatKit/CKSearchResultsTitleHeaderCellDelegate-Protocol.h>
#import <ChatKit/_UIContextMenuInteractionDelegate-Protocol.h>

@class CKSearchCollectionView, IMTimingCollection, NSArray, NSMutableSet, NSString, UICollectionViewCompositionalLayout, UICollectionViewDiffableDataSource, _UIContextMenuInteraction;
@protocol CKContainerSearchControllerDelegate;

@interface CKSearchViewController : CKScrollViewController <CKSearchResultsTitleHeaderCellDelegate, _UIContextMenuInteractionDelegate, UISearchResultsUpdating, UICollectionViewDelegate, CKSearchControllerDelegate>
{
    BOOL _isInitialLoad;
    BOOL _suppressNextReloadAnimation;
    id <CKContainerSearchControllerDelegate> _delegate;
    NSUInteger _mode;
    NSArray *_searchControllers;
    NSString *_searchText;
    CKSearchCollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    UICollectionViewCompositionalLayout *_collectionViewLayout;
    id /* CDUnknownBlockType */ _performAfterInitialLoadBlock;
    NSMutableSet *_searchCompleteControllerSet;
    IMTimingCollection *_timingCollection;
    _UIContextMenuInteraction *_contextMenuInteraction;
}

@property(retain, nonatomic) _UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
@property(retain, nonatomic) IMTimingCollection *timingCollection; // @synthesize timingCollection=_timingCollection;
@property(retain, nonatomic) NSMutableSet *searchCompleteControllerSet; // @synthesize searchCompleteControllerSet=_searchCompleteControllerSet;
@property(copy, nonatomic) id /* CDUnknownBlockType */ performAfterInitialLoadBlock; // @synthesize performAfterInitialLoadBlock=_performAfterInitialLoadBlock;
@property(nonatomic) BOOL suppressNextReloadAnimation; // @synthesize suppressNextReloadAnimation=_suppressNextReloadAnimation;
@property(nonatomic) BOOL isInitialLoad; // @synthesize isInitialLoad=_isInitialLoad;
@property(retain, nonatomic) UICollectionViewCompositionalLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CKSearchCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) NSArray *searchControllers; // @synthesize searchControllers=_searchControllers;
@property(nonatomic) NSUInteger mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <CKContainerSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)contextMenuInteractionShouldBegin:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (BOOL)_currentModeIsDetails;
- (Class)_searchResultsHeaderClass;
- (BOOL)_needsIndexing;
- (BOOL)_isInternalInstall;
- (id)globalLayoutConfiguration;
- (id)footerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2;
- (id)headerBoundryItemsForController:(id)arg1 withEnvironment:(id)arg2;
- (id)_layoutSectionForController:(id)arg1 withEnvironment:(id)arg2;
- (id)_identifiersToAppendForResults:(id)arg1;
- (id)_newSnapshotForCurrentControllerState;
- (void)reloadData;
- (void)searchEnded;
- (void)cancelCurrentQuery;
- (id)containerTraitCollectionForController:(id)arg1;
- (double)containerWidthForController:(id)arg1;
- (UIEdgeInsets)parentMarginInsetsForSearchController:(id)arg1;
- (void)deleteMessageItem:(id)arg1;
- (void)deleteTransferGUID:(id)arg1;
- (void)searchController:(id)arg1 requestsItemDeletionAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 requestsPresentationOfAlertController:(id)arg2 atRect:(CGRect)arg3;
- (void)searchController:(id)arg1 requestsPresentationOfShareController:(id)arg2 atRect:(CGRect)arg3;
- (id)searchController:(id)arg1 conversationForChatGUID:(id)arg2;
- (void)searchControllerContentsDidChange:(id)arg1;
- (void)_searchImmediately;
- (void)searchWithText:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (id)scrollView;
- (void)searchResultsTitleCellShowAllButtonTapped:(id)arg1;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)_configureIndexingCell:(id)arg1;
- (id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 forSupplementryViewKind:(id)arg3;
- (id)cellForItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 withIdentifier:(id)arg3;
- (id)layoutSectionForSection:(long long)arg1 withEnvironment:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDissapeaer:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewLayoutMarginsDidChange;
- (void)_registerCells;
- (void)loadView;
- (void)dealloc;
- (id)initWithSearchControllerClasses:(id)arg1;

@end
