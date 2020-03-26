//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLogMsgEventBatchTrafficProbe, GEOLogMsgEventClientACSuggestions, GEOLogMsgEventCommuteWindow, GEOLogMsgEventDirections, GEOLogMsgEventDirectionsRequestDetails, GEOLogMsgEventDisplayAnalytic, GEOLogMsgEventFullNavTrace, GEOLogMsgEventGenericAppError, GEOLogMsgEventGridDuration, GEOLogMsgEventListInteractionSession, GEOLogMsgEventLogFramework, GEOLogMsgEventMapKitCounts, GEOLogMsgEventMapLaunch, GEOLogMsgEventMapsWidgetsInteractionSession, GEOLogMsgEventMarcoLiteUsage, GEOLogMsgEventNetwork, GEOLogMsgEventParkedCar, GEOLogMsgEventPlaceDataCache, GEOLogMsgEventPredExTrainingData, GEOLogMsgEventProactiveSuggestionInteractionSession, GEOLogMsgEventRealtimeTrafficProbe, GEOLogMsgEventRefineSearchSession, GEOLogMsgEventStateTiming, GEOLogMsgEventTelemetric, GEOLogMsgEventThrottle, GEOLogMsgEventTileCacheAnalytic, GEOLogMsgEventTileSetState, GEOLogMsgEventTimeToLeaveHypothesis, GEOLogMsgEventTimeToLeaveInitialTravelTime, GEOLogMsgEventTransitAppLaunch, GEOLogMsgEventTripDepartureFeedback, GEOLogMsgEventUserAction, GEOLogMsgEventWifiConnectionQualityProbe, LOGMSGEVENTLogMsgEventRideBookedSession, LOGMSGEVENTLogMsgEventRideBookingSession, LOGMSGEVENTLogMsgEventTableBookedSession, LOGMSGEVENTLogMsgEventTableBookingSession, NSMutableArray, PBDataReader;

@interface GEOLogMsgEvent : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    GEOLogMsgEventBatchTrafficProbe *_batchTrafficProbeCollection;
    GEOLogMsgEventClientACSuggestions *_clientAcSuggestions;
    GEOLogMsgEventCommuteWindow *_commuteWindow;
    GEOLogMsgEventDirections *_directionsEvent;
    GEOLogMsgEventDirectionsRequestDetails *_directionsRequestDetails;
    GEOLogMsgEventDisplayAnalytic *_displayAnalytic;
    GEOLogMsgEventFullNavTrace *_fullNavTrace;
    GEOLogMsgEventGenericAppError *_genericAppErrorEvent;
    GEOLogMsgEventGridDuration *_gridDuration;
    GEOLogMsgEventListInteractionSession *_listInteractionSession;
    GEOLogMsgEventLogFramework *_logFrameworkEvent;
    NSMutableArray *_logMsgStates;
    GEOLogMsgEventMapKitCounts *_mapKitCounts;
    GEOLogMsgEventMapLaunch *_mapLaunchEvent;
    GEOLogMsgEventMapsWidgetsInteractionSession *_mapsWidgetsInteractionSession;
    GEOLogMsgEventMarcoLiteUsage *_marcoLiteUsage;
    GEOLogMsgEventNetwork *_networkEvent;
    GEOLogMsgEventParkedCar *_parkedCar;
    GEOLogMsgEventPlaceDataCache *_placeDataCacheEvent;
    GEOLogMsgEventPredExTrainingData *_predExTrainingData;
    GEOLogMsgEventProactiveSuggestionInteractionSession *_proactiveSuggestionInteractionSessionEvent;
    GEOLogMsgEventRealtimeTrafficProbe *_realtimeTrafficProbeCollection;
    GEOLogMsgEventRefineSearchSession *_refineSearchSession;
    LOGMSGEVENTLogMsgEventRideBookedSession *_rideBookedSession;
    LOGMSGEVENTLogMsgEventRideBookingSession *_rideBookingSession;
    GEOLogMsgEventStateTiming *_stateTimingEvent;
    LOGMSGEVENTLogMsgEventTableBookedSession *_tableBookedSession;
    LOGMSGEVENTLogMsgEventTableBookingSession *_tableBookingSession;
    GEOLogMsgEventTelemetric *_telemetric;
    GEOLogMsgEventThrottle *_throttleEvent;
    GEOLogMsgEventTileCacheAnalytic *_tileCacheAnalytic;
    GEOLogMsgEventTileSetState *_tileSetStateEvent;
    GEOLogMsgEventTimeToLeaveHypothesis *_timeToLeaveHypothesisEvent;
    GEOLogMsgEventTimeToLeaveInitialTravelTime *_timeToLeaveInitialTravelTimeEvent;
    GEOLogMsgEventTransitAppLaunch *_transitAppLaunchEvent;
    GEOLogMsgEventTripDepartureFeedback *_tripDepartureFeedback;
    double _usageEventTime;
    GEOLogMsgEventUserAction *_userActionEvent;
    GEOLogMsgEventWifiConnectionQualityProbe *_wifiConnectionQualityProbeEvent;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _eventType;
    struct {
        unsigned int has_usageEventTime:1;
        unsigned int has_eventType:1;
        unsigned int read_batchTrafficProbeCollection:1;
        unsigned int read_clientAcSuggestions:1;
        unsigned int read_commuteWindow:1;
        unsigned int read_directionsEvent:1;
        unsigned int read_directionsRequestDetails:1;
        unsigned int read_displayAnalytic:1;
        unsigned int read_fullNavTrace:1;
        unsigned int read_genericAppErrorEvent:1;
        unsigned int read_gridDuration:1;
        unsigned int read_listInteractionSession:1;
        unsigned int read_logFrameworkEvent:1;
        unsigned int read_logMsgStates:1;
        unsigned int read_mapKitCounts:1;
        unsigned int read_mapLaunchEvent:1;
        unsigned int read_mapsWidgetsInteractionSession:1;
        unsigned int read_marcoLiteUsage:1;
        unsigned int read_networkEvent:1;
        unsigned int read_parkedCar:1;
        unsigned int read_placeDataCacheEvent:1;
        unsigned int read_predExTrainingData:1;
        unsigned int read_proactiveSuggestionInteractionSessionEvent:1;
        unsigned int read_realtimeTrafficProbeCollection:1;
        unsigned int read_refineSearchSession:1;
        unsigned int read_rideBookedSession:1;
        unsigned int read_rideBookingSession:1;
        unsigned int read_stateTimingEvent:1;
        unsigned int read_tableBookedSession:1;
        unsigned int read_tableBookingSession:1;
        unsigned int read_telemetric:1;
        unsigned int read_throttleEvent:1;
        unsigned int read_tileCacheAnalytic:1;
        unsigned int read_tileSetStateEvent:1;
        unsigned int read_timeToLeaveHypothesisEvent:1;
        unsigned int read_timeToLeaveInitialTravelTimeEvent:1;
        unsigned int read_transitAppLaunchEvent:1;
        unsigned int read_tripDepartureFeedback:1;
        unsigned int read_userActionEvent:1;
        unsigned int read_wifiConnectionQualityProbeEvent:1;
        unsigned int wrote_batchTrafficProbeCollection:1;
        unsigned int wrote_clientAcSuggestions:1;
        unsigned int wrote_commuteWindow:1;
        unsigned int wrote_directionsEvent:1;
        unsigned int wrote_directionsRequestDetails:1;
        unsigned int wrote_displayAnalytic:1;
        unsigned int wrote_fullNavTrace:1;
        unsigned int wrote_genericAppErrorEvent:1;
        unsigned int wrote_gridDuration:1;
        unsigned int wrote_listInteractionSession:1;
        unsigned int wrote_logFrameworkEvent:1;
        unsigned int wrote_logMsgStates:1;
        unsigned int wrote_mapKitCounts:1;
        unsigned int wrote_mapLaunchEvent:1;
        unsigned int wrote_mapsWidgetsInteractionSession:1;
        unsigned int wrote_marcoLiteUsage:1;
        unsigned int wrote_networkEvent:1;
        unsigned int wrote_parkedCar:1;
        unsigned int wrote_placeDataCacheEvent:1;
        unsigned int wrote_predExTrainingData:1;
        unsigned int wrote_proactiveSuggestionInteractionSessionEvent:1;
        unsigned int wrote_realtimeTrafficProbeCollection:1;
        unsigned int wrote_refineSearchSession:1;
        unsigned int wrote_rideBookedSession:1;
        unsigned int wrote_rideBookingSession:1;
        unsigned int wrote_stateTimingEvent:1;
        unsigned int wrote_tableBookedSession:1;
        unsigned int wrote_tableBookingSession:1;
        unsigned int wrote_telemetric:1;
        unsigned int wrote_throttleEvent:1;
        unsigned int wrote_tileCacheAnalytic:1;
        unsigned int wrote_tileSetStateEvent:1;
        unsigned int wrote_timeToLeaveHypothesisEvent:1;
        unsigned int wrote_timeToLeaveInitialTravelTimeEvent:1;
        unsigned int wrote_transitAppLaunchEvent:1;
        unsigned int wrote_tripDepartureFeedback:1;
        unsigned int wrote_usageEventTime:1;
        unsigned int wrote_userActionEvent:1;
        unsigned int wrote_wifiConnectionQualityProbeEvent:1;
        unsigned int wrote_eventType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)logMsgStateType;
// - (void).cxx_destruct;
@property(nonatomic) BOOL hasUsageEventTime;
@property(nonatomic) double usageEventTime;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOLogMsgEventDirectionsRequestDetails *directionsRequestDetails;
@property(readonly, nonatomic) BOOL hasDirectionsRequestDetails;
- (void)_readDirectionsRequestDetails;
@property(retain, nonatomic) GEOLogMsgEventTripDepartureFeedback *tripDepartureFeedback;
@property(readonly, nonatomic) BOOL hasTripDepartureFeedback;
- (void)_readTripDepartureFeedback;
@property(retain, nonatomic) GEOLogMsgEventMarcoLiteUsage *marcoLiteUsage;
@property(readonly, nonatomic) BOOL hasMarcoLiteUsage;
- (void)_readMarcoLiteUsage;
@property(retain, nonatomic) GEOLogMsgEventPredExTrainingData *predExTrainingData;
@property(readonly, nonatomic) BOOL hasPredExTrainingData;
- (void)_readPredExTrainingData;
@property(retain, nonatomic) GEOLogMsgEventMapKitCounts *mapKitCounts;
@property(readonly, nonatomic) BOOL hasMapKitCounts;
- (void)_readMapKitCounts;
@property(retain, nonatomic) GEOLogMsgEventThrottle *throttleEvent;
@property(readonly, nonatomic) BOOL hasThrottleEvent;
- (void)_readThrottleEvent;
@property(retain, nonatomic) GEOLogMsgEventDisplayAnalytic *displayAnalytic;
@property(readonly, nonatomic) BOOL hasDisplayAnalytic;
- (void)_readDisplayAnalytic;
@property(retain, nonatomic) GEOLogMsgEventGridDuration *gridDuration;
@property(readonly, nonatomic) BOOL hasGridDuration;
- (void)_readGridDuration;
@property(retain, nonatomic) GEOLogMsgEventTileCacheAnalytic *tileCacheAnalytic;
@property(readonly, nonatomic) BOOL hasTileCacheAnalytic;
- (void)_readTileCacheAnalytic;
@property(retain, nonatomic) GEOLogMsgEventParkedCar *parkedCar;
@property(readonly, nonatomic) BOOL hasParkedCar;
- (void)_readParkedCar;
@property(retain, nonatomic) GEOLogMsgEventWifiConnectionQualityProbe *wifiConnectionQualityProbeEvent;
@property(readonly, nonatomic) BOOL hasWifiConnectionQualityProbeEvent;
- (void)_readWifiConnectionQualityProbeEvent;
@property(retain, nonatomic) GEOLogMsgEventGenericAppError *genericAppErrorEvent;
@property(readonly, nonatomic) BOOL hasGenericAppErrorEvent;
- (void)_readGenericAppErrorEvent;
@property(retain, nonatomic) GEOLogMsgEventCommuteWindow *commuteWindow;
@property(readonly, nonatomic) BOOL hasCommuteWindow;
- (void)_readCommuteWindow;
@property(retain, nonatomic) GEOLogMsgEventBatchTrafficProbe *batchTrafficProbeCollection;
@property(readonly, nonatomic) BOOL hasBatchTrafficProbeCollection;
- (void)_readBatchTrafficProbeCollection;
@property(retain, nonatomic) GEOLogMsgEventRealtimeTrafficProbe *realtimeTrafficProbeCollection;
@property(readonly, nonatomic) BOOL hasRealtimeTrafficProbeCollection;
- (void)_readRealtimeTrafficProbeCollection;
@property(retain, nonatomic) GEOLogMsgEventClientACSuggestions *clientAcSuggestions;
@property(readonly, nonatomic) BOOL hasClientAcSuggestions;
- (void)_readClientAcSuggestions;
@property(retain, nonatomic) GEOLogMsgEventTelemetric *telemetric;
@property(readonly, nonatomic) BOOL hasTelemetric;
- (void)_readTelemetric;
@property(retain, nonatomic) GEOLogMsgEventFullNavTrace *fullNavTrace;
@property(readonly, nonatomic) BOOL hasFullNavTrace;
- (void)_readFullNavTrace;
@property(retain, nonatomic) LOGMSGEVENTLogMsgEventTableBookedSession *tableBookedSession;
@property(readonly, nonatomic) BOOL hasTableBookedSession;
- (void)_readTableBookedSession;
@property(retain, nonatomic) LOGMSGEVENTLogMsgEventTableBookingSession *tableBookingSession;
@property(readonly, nonatomic) BOOL hasTableBookingSession;
- (void)_readTableBookingSession;
@property(retain, nonatomic) LOGMSGEVENTLogMsgEventRideBookedSession *rideBookedSession;
@property(readonly, nonatomic) BOOL hasRideBookedSession;
- (void)_readRideBookedSession;
@property(retain, nonatomic) LOGMSGEVENTLogMsgEventRideBookingSession *rideBookingSession;
@property(readonly, nonatomic) BOOL hasRideBookingSession;
- (void)_readRideBookingSession;
@property(retain, nonatomic) GEOLogMsgEventMapLaunch *mapLaunchEvent;
@property(readonly, nonatomic) BOOL hasMapLaunchEvent;
- (void)_readMapLaunchEvent;
@property(retain, nonatomic) GEOLogMsgEventProactiveSuggestionInteractionSession *proactiveSuggestionInteractionSessionEvent;
@property(readonly, nonatomic) BOOL hasProactiveSuggestionInteractionSessionEvent;
- (void)_readProactiveSuggestionInteractionSessionEvent;
@property(retain, nonatomic) GEOLogMsgEventRefineSearchSession *refineSearchSession;
@property(readonly, nonatomic) BOOL hasRefineSearchSession;
- (void)_readRefineSearchSession;
@property(retain, nonatomic) GEOLogMsgEventListInteractionSession *listInteractionSession;
@property(readonly, nonatomic) BOOL hasListInteractionSession;
- (void)_readListInteractionSession;
@property(retain, nonatomic) GEOLogMsgEventMapsWidgetsInteractionSession *mapsWidgetsInteractionSession;
@property(readonly, nonatomic) BOOL hasMapsWidgetsInteractionSession;
- (void)_readMapsWidgetsInteractionSession;
@property(retain, nonatomic) GEOLogMsgEventLogFramework *logFrameworkEvent;
@property(readonly, nonatomic) BOOL hasLogFrameworkEvent;
- (void)_readLogFrameworkEvent;
@property(retain, nonatomic) GEOLogMsgEventTimeToLeaveInitialTravelTime *timeToLeaveInitialTravelTimeEvent;
@property(readonly, nonatomic) BOOL hasTimeToLeaveInitialTravelTimeEvent;
- (void)_readTimeToLeaveInitialTravelTimeEvent;
@property(retain, nonatomic) GEOLogMsgEventTimeToLeaveHypothesis *timeToLeaveHypothesisEvent;
@property(readonly, nonatomic) BOOL hasTimeToLeaveHypothesisEvent;
- (void)_readTimeToLeaveHypothesisEvent;
@property(retain, nonatomic) GEOLogMsgEventTransitAppLaunch *transitAppLaunchEvent;
@property(readonly, nonatomic) BOOL hasTransitAppLaunchEvent;
- (void)_readTransitAppLaunchEvent;
@property(retain, nonatomic) GEOLogMsgEventDirections *directionsEvent;
@property(readonly, nonatomic) BOOL hasDirectionsEvent;
- (void)_readDirectionsEvent;
@property(retain, nonatomic) GEOLogMsgEventNetwork *networkEvent;
@property(readonly, nonatomic) BOOL hasNetworkEvent;
- (void)_readNetworkEvent;
@property(retain, nonatomic) GEOLogMsgEventPlaceDataCache *placeDataCacheEvent;
@property(readonly, nonatomic) BOOL hasPlaceDataCacheEvent;
- (void)_readPlaceDataCacheEvent;
@property(retain, nonatomic) GEOLogMsgEventTileSetState *tileSetStateEvent;
@property(readonly, nonatomic) BOOL hasTileSetStateEvent;
- (void)_readTileSetStateEvent;
@property(retain, nonatomic) GEOLogMsgEventStateTiming *stateTimingEvent;
@property(readonly, nonatomic) BOOL hasStateTimingEvent;
- (void)_readStateTimingEvent;
@property(retain, nonatomic) GEOLogMsgEventUserAction *userActionEvent;
@property(readonly, nonatomic) BOOL hasUserActionEvent;
- (void)_readUserActionEvent;
- (int)StringAsEventType:(id)arg1;
- (id)eventTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasEventType;
@property(nonatomic) int eventType;
- (id)logMsgStateAtIndex:(NSUInteger)arg1;
- (NSUInteger)logMsgStatesCount;
- (void)_addNoFlagsLogMsgState:(id)arg1;
- (void)addLogMsgState:(id)arg1;
- (void)clearLogMsgStates;
@property(retain, nonatomic) NSMutableArray *logMsgStates;
- (void)_readLogMsgStates;
- (id)initWithData:(id)arg1;
- (id)init;

@end
