//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOPListStateCapturing-Protocol.h>
#import <GeoServices/GEOResourceManifestServerProxyDelegate-Protocol.h>

@class GEOActiveTileGroup, GEOLocalizationRegionsInfo, GEOResourceManifestConfiguration, NSDictionary, NSHashTable, NSMutableArray, NSSet, geo_isolater;
@protocol GEOResourceManifestServerProxy, OS_dispatch_source;

@interface GEOResourceManifestManager : NSObject <GEOPListStateCapturing, GEOResourceManifestServerProxyDelegate>
{
    id <GEOResourceManifestServerProxy> _serverProxy;
    NSHashTable *_serverProxyObservers;
    GEOActiveTileGroup *_activeTileGroup;
//     struct os_unfair_lock_s _activeTileGroupLock;
    NSDictionary *_resourceNamesToPaths;
    NSSet *_allResourceNames;
    NSSet *_allRegionalResourceNames;
    BOOL _needsToLoadTileGroupFromDisk;
    NSMutableArray *_tileGroupObservers;
    struct os_unfair_recursive_lock_s _tileGroupObserversLock;
//     struct os_unfair_lock_s _closedCountLock;
    long long _closedCount;
    BOOL _constantlyChangeTileGroup;
    double _constantlyChangeTileGroupInterval;
    GEOLocalizationRegionsInfo *_localizationRegionsInfo;
    NSMutableArray *_networkActivityHandlers;
    geo_isolater *_networkActivityHandlersIsolation;
    BOOL _isUpdatingManifest;
    BOOL _isLoadingResources;
//     struct os_unfair_lock_s _resourceNamesToPathsLock;
    GEOResourceManifestConfiguration *_configuration;
    NSObject<OS_dispatch_source> *_cachedResourceInfoPurgeTimer;
    NSUInteger _stateCaptureHandle;
}

+ (id)modernManagerForConfiguration:(id)arg1;
+ (id)modernManagerForTileGroupIdentifier:(unsigned int)arg1;
+ (id)modernManager;
+ (id)sharedManager;
+ (void)setHiDPI:(BOOL)arg1;
+ (void)configureInProcessSingletonWithConfiguration:(id)arg1;
+ (void)useLocalProxy;
+ (void)useRemoteProxy;
+ (void)setServerProxyClass:(Class)arg1;
+ (void)disableServerConnection;
@property(readonly, nonatomic) id <GEOResourceManifestServerProxy> serverProxy; // @synthesize serverProxy=_serverProxy;
// - (void).cxx_destruct;
- (id)captureStatePlistWithHints:(struct os_state_hints_s )arg1;
- (void)removeDevResources;
- (void)devResourcesFolderDidChange;
- (void)_notifyObserversOfResourcesChange;
- (void)stopObservingDevResources;
- (void)startObservingDevResources;
- (void)forceUpdate;
- (void)resetActiveTileGroup;
- (void)setActiveTileGroupIdentifier:(unsigned int)arg1 updateType:(long long)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)setActiveTileGroupIdentifier:(unsigned int)arg1;
- (unsigned int)activeTileGroupIdentifier;
- (void)getResourceManifestWithHandler:(id /* CDUnknownBlockType */)arg1;
- (BOOL)hasResourceManifest;
- (id)detailedDescription;
- (BOOL)isMuninEnabled;
- (id)muninBucketURLForId:(unsigned short)arg1 lod:(unsigned char)arg2;
- (void)deactivateResourceScenario:(int)arg1;
- (void)deactivateResourceScale:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (void)activateResourceScale:(int)arg1;
- (void)cancelCurrentManifestUpdate;
- (id)updateProgress;
- (void)updateManifest:(long long)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)updateManifest:(id /* CDUnknownBlockType */)arg1;
- (void)updateManifestIfNecessary:(id /* CDUnknownBlockType */)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)serverProxyNeedsWiFiResourceActivity:(id)arg1;
- (oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(id /* CDUnknownBlockType */)arg3;
- (void)fakeTileGroupChange;
- (void)setConstantlyChangeTileGroupInterval:(double)arg1;
- (void)setConstantlyChangeTileGroup:(BOOL)arg1;
- (oneway void)serverProxyDidStopLoadingResources:(id)arg1;
- (oneway void)serverProxyWillStartLoadingResources:(id)arg1;
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;
- (id)bestLocalizedStringForDisplayStringAtIndex:(NSUInteger)arg1;
- (void)addNetworkActivityHandler:(id /* CDUnknownBlockType */)arg1;
- (id)pathForResourceWithName:(id)arg1;
- (void)_buildResourceNamesToPaths;
- (id)allResourcePaths;
- (id)allRegionalResourceNames;
- (id)allResourceNames;
- (void)_purgeCachedResourceInfo;
- (void)_scheduleCachedResourceInfoPurgeTimer;
- (NSUInteger)_fromgeod_maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2;
- (BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)disputedBordersQueryItemsForTileKey:(const struct _GEOTileKey )arg1 country:(id)arg2 region:(id)arg3;
- (BOOL)isDisputedBordersWhitelistedForTileKey:(const struct _GEOTileKey )arg1 country:(id)arg2 region:(id)arg3;
- (BOOL)useProxyAuthForTileKey:(const struct _GEOTileKey )arg1;
- (id)languageForTileKey:(const struct _GEOTileKey )arg1 overrideLocale:(id)arg2;
- (id)languageForTileKey:(const struct _GEOTileKey )arg1;
- (BOOL)isAvailableForTileKey:(const struct _GEOTileKey )arg1;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey )arg1;
- (int)requestStyleForTileKey:(const struct _GEOTileKey )arg1;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey )arg1;
- (id)localizationURLStringIfNecessaryForActiveTileSet:(id)arg1 tileKey:(const struct _GEOTileKey )arg2 overrideLocale:(id)arg3;
- (id)_activeTileSetForKey:(const struct _GEOTileKey )arg1;
@property(readonly, nonatomic) BOOL hasActiveTileGroup;
- (unsigned int)mapMatchingZoomLevel;
- (int)mapMatchingTileSetStyle;
- (void)removeTileGroupObserver:(id)arg1;
- (void)addTileGroupObserver:(id)arg1 queue:(id)arg2;
- (void)removeServerProxyObserver:(id)arg1;
- (void)addServerProxyObserver:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)closeServerConnection:(BOOL)arg1;
- (void)closeServerConnection;
- (void)openServerConnection;
- (id)authToken;
@property(readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
- (id)_loadActiveTileGroupIfNecessary:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

@end
