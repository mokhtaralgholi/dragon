//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCNotificationListCellDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListCoalescingControlsHandlerDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListComponent-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListViewDataSource-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationManagementContentProviderDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationViewControllerDelegatePrivate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationViewControllerObserving-Protocol.h>

@class NCNotificationListCache, NCNotificationListCell, NCNotificationListCoalescingControlsCell, NCNotificationListCoalescingHeaderCell, NCNotificationListView, NCNotificationRequest, NCNotificationSectionSettings, NCNotificationSummaryBuilder, NSArray, NSMutableArray, NSMutableDictionary, NSString, _UILegibilitySettings;
@protocol NCNotificationGroupListDelegate;

@interface NCNotificationGroupList : NSObject <NCNotificationListViewDataSource, NCNotificationViewControllerDelegatePrivate, NCNotificationViewControllerObserving, NCNotificationListCellDelegate, NCNotificationListCoalescingControlsHandlerDelegate, NCNotificationManagementContentProviderDelegate, NCNotificationListComponent>
{
    BOOL _deviceAuthenticated;
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _grouped;
    BOOL _clockNotificationGroup;
    BOOL _longLookDismissalFinalFrameCalculatedWithoutWindow;
    NSString *_logDescription;
    id <NCNotificationGroupListDelegate> _delegate;
    NCNotificationListCache *_notificationListCache;
    NSString *_sectionIdentifier;
    NSString *_threadIdentifier;
    NCNotificationSectionSettings *_notificationSectionSettings;
    double _horizontalMarginInset;
    NCNotificationListView *_groupListView;
    NSMutableArray *_orderedRequests;
    NSMutableDictionary *_contentProviders;
    NSMutableDictionary *_clockSnoozeAlarmContentProviders;
    NCNotificationListCoalescingHeaderCell *_headerView;
    NCNotificationListCoalescingControlsCell *_footerView;
    double _headerViewHeight;
    double _footerViewHeight;
    NCNotificationRequest *_leadingNotificationRequest;
    NCNotificationSummaryBuilder *_summaryBuilder;
    _UILegibilitySettings *_legibilitySettings;
    NSString *_backgroundGroupNameBase;
    NCNotificationListCell *_cellRecycledWhilePresentingLongLook;
}

@property(nonatomic) BOOL longLookDismissalFinalFrameCalculatedWithoutWindow; // @synthesize longLookDismissalFinalFrameCalculatedWithoutWindow=_longLookDismissalFinalFrameCalculatedWithoutWindow;
@property(retain, nonatomic) NCNotificationListCell *cellRecycledWhilePresentingLongLook; // @synthesize cellRecycledWhilePresentingLongLook=_cellRecycledWhilePresentingLongLook;
@property(copy, nonatomic) NSString *backgroundGroupNameBase; // @synthesize backgroundGroupNameBase=_backgroundGroupNameBase;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) NCNotificationSummaryBuilder *summaryBuilder; // @synthesize summaryBuilder=_summaryBuilder;
@property(retain, nonatomic) NCNotificationRequest *leadingNotificationRequest; // @synthesize leadingNotificationRequest=_leadingNotificationRequest;
@property(nonatomic) double footerViewHeight; // @synthesize footerViewHeight=_footerViewHeight;
@property(nonatomic) double headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
@property(retain, nonatomic) NCNotificationListCoalescingControlsCell *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NCNotificationListCoalescingHeaderCell *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSMutableDictionary *clockSnoozeAlarmContentProviders; // @synthesize clockSnoozeAlarmContentProviders=_clockSnoozeAlarmContentProviders;
@property(retain, nonatomic) NSMutableDictionary *contentProviders; // @synthesize contentProviders=_contentProviders;
@property(retain, nonatomic) NSMutableArray *orderedRequests; // @synthesize orderedRequests=_orderedRequests;
@property(retain, nonatomic) NCNotificationListView *groupListView; // @synthesize groupListView=_groupListView;
@property(nonatomic, getter=isClockNotificationGroup) BOOL clockNotificationGroup; // @synthesize clockNotificationGroup=_clockNotificationGroup;
@property(nonatomic) double horizontalMarginInset; // @synthesize horizontalMarginInset=_horizontalMarginInset;
@property(retain, nonatomic) NCNotificationSectionSettings *notificationSectionSettings; // @synthesize notificationSectionSettings=_notificationSectionSettings;
@property(nonatomic, getter=isGrouped) BOOL grouped; // @synthesize grouped=_grouped;
@property(readonly, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(readonly, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(retain, nonatomic) NCNotificationListCache *notificationListCache; // @synthesize notificationListCache=_notificationListCache;
@property(nonatomic) __weak id <NCNotificationGroupListDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property(nonatomic, getter=isDeviceAuthenticated) BOOL deviceAuthenticated; // @synthesize deviceAuthenticated=_deviceAuthenticated;
@property(copy, nonatomic) NSString *logDescription; // @synthesize logDescription=_logDescription;
// - (void).cxx_destruct;
- (void)_reloadRecycledNotificationCellForRequest:(id)arg1;
- (void)_reloadRecycledGroupedNotificationCells;
- (void)_reloadNotificationCellAtIndex:(NSUInteger)arg1;
- (BOOL)_isContentRevealedForNotificationRequest:(id)arg1;
- (long long)_compareNotificationRequest:(id)arg1 withNotificationRequest:(id)arg2;
- (NSUInteger)_insertionIndexForNotificationRequest:(id)arg1;
- (NSUInteger)_existingIndexForNotificationRequest:(id)arg1;
- (NSUInteger)_lockScreenPriorityForNotificationRequest:(id)arg1;
- (NSUInteger)_lockScreenPersistenceForNotificationRequest:(id)arg1;
- (void)_invalidateSnoozeAlarmNotificationStaticContentProviderTimerForNotificationRequest:(id)arg1;
- (id)_clockSnoozeAlarmNotificationStaticContentProviderForNotificationRequest:(id)arg1 viewController:(id)arg2;
- (void)_performAction:(id)arg1 forNotificationRequest:(id)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)_performDefaultActionForNotificationRequest:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)_clearNotificationRequest:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (double)_cachedHeightForNotificationRequest:(id)arg1 isLeadingNotificationRequest:(BOOL)arg2;
- (id)_currentCellForNotificationRequest:(id)arg1;
- (id)_cachedCellForNotificationRequest:(id)arg1 createNewIfNecessary:(BOOL)arg2 shouldConfigure:(BOOL)arg3;
- (void)_updateSummaryTextForNewLeadingNotificationRequest:(id)arg1 oldLeadingNotificationRequest:(id)arg2;
- (void)_hintSideSwipeForDefaultActionForNotificationRequest:(id)arg1;
- (void)_toggleGroupedState;
- (void)_scrollToTopIfNecessaryAndPerformBlock:(id /* CDUnknownBlockType */)arg1;
- (void)_reloadNotificationViewForNotificationRequest:(id)arg1;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (void)notificationListCoalescingControlsHandler:(id)arg1 didTransitionToClearState:(BOOL)arg2;
- (void)notificationListCoalescingControlsHandlerDidDismissPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsHandlerDidPresentPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsHandlerDidBeginPreviewInteraction:(id)arg1;
- (id)containerViewForCoalescingControlsHandlerPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsHandlerRequestsClearingAllNotifications:(id)arg1;
- (void)notificationListCoalescingControlsHandlerRequestsClearingNotifications:(id)arg1;
- (void)notificationListCoalescingControlsHandlerRequestsRestackingNotifications:(id)arg1;
- (void)willTearDownNotificationListCell:(id)arg1;
- (void)notificationListCellRequestsPresentingManagementView:(id)arg1 withPresentingView:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)notificationListCellRequestsSectionSettings:(id)arg1 sectionIdentifier:(id)arg2;
- (void)notificationListCellRequestsPresentingLongLook:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)notificationListCellRequestsDismissAction:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)notificationListCellRequestsDefaultAction:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)notificationListCellDidSignificantUserInteraction:(id)arg1;
- (void)notificationListCellDidRevealCellActions:(id)arg1;
- (void)notificationListCellDidHideCellActions:(id)arg1 resetCellScrollPosition:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)notificationListCellShouldPerformClipping:(id)arg1;
- (void)notificationListCell:(id)arg1 didMoveToNewXPosition:(double)arg2;
- (BOOL)notificationListCell:(id)arg1 shouldPanHorizontallyWithTouch:(id)arg2;
- (void)longLookDidDismissForNotificationViewController:(id)arg1;
- (void)longLookWillDismissForNotificationViewController:(id)arg1;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (void)notificationViewControllerDidEndUserInteraction:(id)arg1;
- (void)notificationViewControllerWillBeginUserInteraction:(id)arg1;
- (void)notificationManagementContentProvider:(id)arg1 requestsPresentingNotificationManagementViewType:(NSUInteger)arg2 forNotificationRequest:(id)arg3 withPresentingView:(id)arg4;
- (id)notificationViewController:(id)arg1 auxiliaryOptionsContentProviderForNotificationRequest:(id)arg2 withLongLook:(BOOL)arg3;
- (id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2;
- (BOOL)notificationViewControllerShouldAllowLongPressGesture:(id)arg1;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)arg1;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
- (id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
- (id)notificationViewController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
- (CGRect)notificationViewController:(id)arg1 finalFrameForDismissingLongLookFromView:(id)arg2;
- (CGRect)notificationViewController:(id)arg1 initialFrameForPresentingLongLookFromView:(id)arg2;
- (id)notificationUsageTrackingStateForNotificationViewController:(id)arg1;
- (void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionForTrigger:(long long)arg2 withCompletionBlock:(id /* CDUnknownBlockType */)arg3;
- (BOOL)notificationViewControllerShouldAllowClickPresentationInteraction:(id)arg1;
- (BOOL)showAdditionalMessageLinesForNotificationViewController:(id)arg1;
- (long long)notificationViewControllerDateFormatStyle:(id)arg1;
- (BOOL)notificationViewControllerIsCoalescedBundle:(id)arg1;
- (BOOL)notificationViewControllerShouldInterpretTapAsDefaultAction:(id)arg1;
- (void)notificationViewController:(id)arg1 requestsExpandingCoalescedBundleForNotificationRequest:(id)arg2;
- (void)notificationViewControllerWillDismissForCancelAction:(id)arg1;
- (void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)recycleView:(id)arg1;
- (double)footerViewHeightForNotificationList:(id)arg1;
- (double)headerViewHeightForNotificationList:(id)arg1;
- (id)footerViewForNotificationList:(id)arg1;
- (id)headerViewForNotificationList:(id)arg1;
- (NSUInteger)notificationListViewNumberOfItems:(id)arg1;
- (BOOL)notificationListViewIsGroup:(id)arg1;
- (id)notificationListView:(id)arg1 viewForItemAtIndex:(NSUInteger)arg2;
- (double)notificationListView:(id)arg1 heightForItemAtIndex:(NSUInteger)arg2;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)reloadNotificationRequest:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)insertNotificationRequest:(id)arg1;
@property(readonly, nonatomic) NSUInteger notificationCount;
@property(readonly, nonatomic) NSUInteger count;
- (BOOL)isLeadingNotificationRequest:(id)arg1;
- (BOOL)isGroupForNotificationRequest:(id)arg1;
@property(readonly, nonatomic) BOOL containsNonPersistentNotificationRequests;
- (void)setGrouped:(BOOL)arg1 animated:(BOOL)arg2;
- (void)mergeNotificationRequests:(id)arg1;
- (BOOL)matchesGroup:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) NSArray *criticalAlerts;
@property(readonly, nonatomic) NSArray *persistentNotificationRequests;
@property(readonly, nonatomic) NSArray *allNotificationRequests;
- (id)initWithSectionIdentifier:(id)arg1 threadIdentifier:(id)arg2;

@end
