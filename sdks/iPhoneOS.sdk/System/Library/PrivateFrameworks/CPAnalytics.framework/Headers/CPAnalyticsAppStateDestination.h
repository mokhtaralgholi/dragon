//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CPAnalytics/CPAnalyticsDestination-Protocol.h>

@class CPAnalytics, CPAnalyticsScreenManager, NSDictionary, NSMutableArray, NSSet;

@interface CPAnalyticsAppStateDestination : NSObject <CPAnalyticsDestination>
{
    CPAnalytics *_cpAnalyticsInstance;
    NSDictionary *_config;
    CPAnalyticsScreenManager *_screenManager;
    NSSet *_appEventNames;
    NSMutableArray *_counters;
}

+ (BOOL)_isValidSessionEndEvent:(id)arg1;
@property(retain, nonatomic) NSMutableArray *counters; // @synthesize counters=_counters;
@property(readonly, nonatomic) NSSet *appEventNames; // @synthesize appEventNames=_appEventNames;
@property(readonly, nonatomic) CPAnalyticsScreenManager *screenManager; // @synthesize screenManager=_screenManager;
@property(readonly, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(readonly, nonatomic) __weak CPAnalytics *cpAnalyticsInstance; // @synthesize cpAnalyticsInstance=_cpAnalyticsInstance;
// - (void).cxx_destruct;
- (void)_sendCoreAnalyticsEventWithStandardPropertiesForEvent:(id)arg1 withPayload:(id)arg2;
- (id)_buildCoreAnalyticsEventPayloadWithProperties:(id)arg1 forEvent:(id)arg2 withRawPayload:(id)arg3 intoTargetEventPayload:(id)arg4;
- (id)_buildMediaPropertiesPayloadForEvent:(id)arg1 fromRawPayload:(id)arg2 intoTargetEventPayload:(id)arg3;
- (id)_buildStandardUserPropertiesPayloadForEvent:(id)arg1 fromRawPayload:(id)arg2 intoTargetEventPayload:(id)arg3;
- (id)_allStandardProperties;
- (id)_allMediaProperties;
- (void)_sendDashboardMediaEventForEvent:(id)arg1;
- (void)_sendDashboardMediaEventIfNeeded:(id)arg1;
- (void)_sendDashboardAppEventForEvent:(id)arg1;
- (void)_sendDashboardScreenViewEventForEvent:(id)arg1;
- (void)_initNewSession:(id)arg1;
- (void)_sendAppSessionEvent:(id)arg1;
- (id)_computeSessionData:(id)arg1;
- (void)_updateDependenciesBeforeProcessingEvent:(id)arg1;
- (void)processEvent:(id)arg1;
- (id)_validateAndParseAppEvents:(id)arg1;
- (void)_initializeCounters:(id)arg1;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;

@end
