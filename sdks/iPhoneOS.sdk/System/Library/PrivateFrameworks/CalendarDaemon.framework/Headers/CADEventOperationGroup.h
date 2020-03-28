//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADEventInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADEventOperationGroup : CADOperationGroup <CADEventInterface>
{
}

+ (BOOL)requiresReminderAccess;
+ (BOOL)requiresEventAccess;
+ (BOOL)requiresEventOrReminderAccess;
- (void)CADDatabaseGetSecurityScopedLocalURLWrapperForAttachment:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADDatabaseShouldWhitelistOrganizerPhoneNumberFromJunkChecks:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADDatabaseShouldWhitelistOrganizerEmailFromJunkChecks:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADOccurrencesExistInRangeForEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(BOOL)arg4 timezone:(id)arg5 reply:(id /* CDUnknownBlockType */)arg6;
- (void)CADOccurrenceCacheCancelSearchWithReplyID:(int)arg1;
- (void)CADOccurrenceCacheSearchLocationsWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)CADOccurrenceCacheSearchWithTerm:(id)arg1 inCalendars:(id)arg2 responseToken:(int)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)CADOccurrenceCacheDoEvents:(id)arg1 haveOccurrencesAfterDate:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)CADOccurrenceCacheGetOccurrenceDateOfEventWithRowID:(int)arg1 nearestDate:(id)arg2 prefersForwardSearch:(BOOL)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)CADOccurrenceCacheGetOccurrenceForCalendars:(id)arg1 onDay:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)CADOccurrenceCacheGetOccurrenceCountsForCalendars:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADOccurrenceCacheAreOccurrencesBeingGenerated:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseActOnSuggestedEvent:(id)arg1 action:(int)arg2 validator:(id)arg3 reply:(id /* CDUnknownBlockType */)arg4;
- (void)CADDatabaseActOnSuggestedEvent:(id)arg1 action:(int)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_CADDatabaseCanModifySuggestedEventCalendar;
- (void)CADDatabaseCanModifySuggestedEventCalendar:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseSetShowsDeclinedEvents:(BOOL)arg1;
- (void)CADDatabaseGetEndDateOfEarliestExpiringNotifiableEventAfterDate:(id)arg1 timeZone:(id)arg2 reply:(id /* CDUnknownBlockType */)arg3;
- (void)CADDatabaseGetCountOfNotifiableEvents:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseGetCountOfUnacknowledgedEvents:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseGetAllEventsWithUniqueID:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADDatabaseGetEventWithUniqueID:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADDatabaseGetEventWithEventIdentifier:(id)arg1 reply:(id /* CDUnknownBlockType */)arg2;
- (void)CADDatabaseRemoveSuggestedEventCalendarWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseInsertSuggestedEventCalendarWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseGetNaturalLanguageSuggestedEventCalendarWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseGetSuggestedEventCalendarWithReply:(id /* CDUnknownBlockType */)arg1;
- (void)CADDatabaseSetDefaultCalendarForNewEvents:(id)arg1 delegateSource:(id)arg2;
- (void)CADDatabaseGetDefaultCalendarForNewEventsInDelegateSource:(id)arg1 withReply:(id /* CDUnknownBlockType */)arg2;
- (id)_getDefaultCalendarIDForNewEventsInStoreWithID:(id)arg1;
- (void)CADDatabaseGetDefaultLocalCalendarWithReply:(id /* CDUnknownBlockType */)arg1;

@end
