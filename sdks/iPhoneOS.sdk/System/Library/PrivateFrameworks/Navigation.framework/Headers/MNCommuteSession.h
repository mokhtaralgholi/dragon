//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNCommuteDestinationObserver-Protocol.h>
#import <Navigation/MNCommuteDestinationUpdaterDelegate-Protocol.h>
#import <Navigation/MNLocationManagerObserver-Protocol.h>
#import <Navigation/MNSuggestionsManagerObserver-Protocol.h>

@class MNCommuteDestinationUpdater, MNLocation, MNLocationHistory, MNNavigationTraceManager, MNObserverHashTable, MNSuggestionsManager, NSArray, NSMutableDictionary, NSString, NSTimer;
@protocol MNCommuteSessionObserver;

@interface MNCommuteSession : NSObject <MNCommuteDestinationUpdaterDelegate, MNCommuteDestinationObserver, MNLocationManagerObserver, MNSuggestionsManagerObserver>
{
    MNObserverHashTable<MNCommuteSessionObserver> *_observers;
    MNSuggestionsManager *_suggestionsManager;
    NSMutableDictionary *_suggestions;
    NSArray *_rankedDestinations;
    id _rankedDestinationsSync;
    NSTimer *_etaUpdateTimer;
    MNNavigationTraceManager *_traceManager;
    NSUInteger _currentSuggestionID;
    MNLocation *_lastLocation;
    MNLocationHistory *_locationHistory;
    NSUInteger _commuteSessionState;
    MNCommuteDestinationUpdater *_comparisonDestinationStartTime;
    NSUInteger _requestedCommuteSessionState;
}

@property(nonatomic) NSUInteger requestedCommuteSessionState; // @synthesize requestedCommuteSessionState=_requestedCommuteSessionState;
@property(nonatomic) __weak MNCommuteDestinationUpdater *comparisonDestinationStartTime; // @synthesize comparisonDestinationStartTime=_comparisonDestinationStartTime;
@property(readonly, nonatomic) MNNavigationTraceManager *traceManager; // @synthesize traceManager=_traceManager;
@property(nonatomic) NSUInteger commuteSessionState; // @synthesize commuteSessionState=_commuteSessionState;
// - (void).cxx_destruct;
- (void)suggestionsManager:(id)arg1 didAddSuggestion:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)commuteDestination:(id)arg1 didChangeInvalid:(BOOL)arg2;
- (void)destinationUpdaterDidArrive:(id)arg1;
- (void)destinationUpdater:(id)arg1 didUpdateDestination:(id)arg2;
- (void)_updatedDestinations;
- (void)updateComparisonStartDate;
- (void)_resetRankedDestinations;
- (void)updateLocation:(id)arg1;
- (void)addSuggestion:(id)arg1;
- (void)stopETAUpdates;
- (void)startETAUpdatesWithInterval:(double)arg1;
- (void)stop;
- (void)start;
@property(readonly) NSString *suggestionsDescription;
@property(readonly, nonatomic) NSArray *rankedDestinations;
- (void)_updateSuggestionsManagerState;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithTraceName:(id)arg1 isTraceRecording:(BOOL)arg2;
- (id)init;

@end
