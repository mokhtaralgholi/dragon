//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProviderDaemon/FPProviderDomainAccessControl-Protocol.h>

@class FPCTLTermDumper, FPDDomain, FPDDomainIndexer, FPDExtension, FPDRequest, FPExtensionEnumerationSettings, FPItem, FPItemID, FPSandboxingURLWrapper, NSArray, NSData, NSObject, NSProgress, NSURL;
@protocol FPDLifetimeExtender, FPXEnumeratorObserver, OS_dispatch_queue;

@protocol FPDDomainBackend <NSObject, FPProviderDomainAccessControl>
@property(readonly) NSObject<OS_dispatch_queue> *backendQueue;
@property(readonly, copy) NSArray *rootURLs;
- (void)resolveProviderItemID:(FPItemID *)arg1 completionHandler:(void (^)(FPItemID *, NSError *))arg2;
- (void)fetchOperationServiceOrEndpointWithRequest:(FPDRequest *)arg1 completionHandler:(void (^)(id <FPXOperationService>, NSXPCListenerEndpoint *, NSError *))arg2;
- (FPDDomainIndexer *)createIndexerWithExtension:(FPDExtension *)arg1 enabled:(BOOL)arg2 error:(id )arg3;
- (void)reimportItemsBelowItemWithID:(FPItemID *)arg1 removeCachedItems:(BOOL)arg2 markItemDataless:(BOOL)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)valuesForAttributes:(NSArray *)arg1 forURL:(NSURL *)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSDictionary *, NSError *))arg4;
- (void)enumerateWithSettings:(FPExtensionEnumerationSettings *)arg1 lifetimeExtender:(id <FPDLifetimeExtender>)arg2 observer:(id <FPXEnumeratorObserver>)arg3 completionHandler:(void (^)(id <FPXEnumerator>, NSError *))arg4;
- (BOOL)removeAllFilesWithError:(id )arg1;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(void (^)(NSData *))arg1;
- (void)enumerateMaterializedSetFromSyncAnchor:(NSData *)arg1 completionHandler:(void (^)(NSArray *, NSArray *, BOOL, NSData *, NSError *))arg2;
- (void)dumpStateTo:(FPCTLTermDumper *)arg1 limitNumberOfItems:(BOOL)arg2;
- (void)URLForItemID:(FPItemID *)arg1 creatingPlaceholderIfMissing:(BOOL)arg2 ignoreAlternateContentsURL:(BOOL)arg3 request:(FPDRequest *)arg4 completionHandler:(void (^)(NSError *, FPSandboxingURLWrapper *, FPSandboxingURLWrapper *))arg5;
- (BOOL)updateRootAfterDomainChangeWithError:(id )arg1;
- (void)itemChangedAtURL:(NSURL *)arg1 request:(FPDRequest *)arg2;
- (void)createItemBasedOnTemplate:(FPItem *)arg1 fields:(NSUInteger)arg2 urlWrapper:(FPSandboxingURLWrapper *)arg3 options:(NSUInteger)arg4 bounceOnCollision:(BOOL)arg5 request:(FPDRequest *)arg6 completionHandler:(void (^)(FPItem *, NSError *))arg7;
- (void)evictItemWithID:(FPItemID *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (NSProgress *)evictItemAtURL:(NSURL *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItemID *, NSError *))arg3;
- (NSProgress *)startProvidingItemAtURL:(NSURL *)arg1 readingOptions:(NSUInteger)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)fetchFSItemsForItemIdentifiers:(NSArray *)arg1 materializingIfNeeded:(BOOL)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSDictionary *, NSError *))arg4;
- (void)itemIDForURL:(NSURL *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItemID *, NSError *))arg3;
- (void)itemForURL:(NSURL *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItem *, NSError *))arg3;
- (void)itemForItemID:(FPItemID *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItem *, NSError *))arg3;
- (NSURL *)createRootByImportingURL:(NSURL *)arg1 error:(id )arg2;
- (BOOL)needsRootCreation;
- (BOOL)isProviderForURL:(NSURL *)arg1;
- (BOOL)startAndGetSyncAnchor:(id )arg1;
- (void)invalidate;
- (id)initWithDomain:(FPDDomain *)arg1;

@optional
+ (void)registerXPCActivities;
- (void)ingestFromCacheItemWithID:(FPItemID *)arg1 requestedFields:(NSUInteger)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)didChangeItemID:(FPItemID *)arg1;
- (void)unpinItemWithID:(FPItemID *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItem *, NSError *))arg3;
- (void)pinItemWithID:(FPItemID *)arg1 request:(FPDRequest *)arg2 completionHandler:(void (^)(FPItem *, NSError *))arg3;
- (void)setDownloadPolicy:(NSUInteger)arg1 forItemWithID:(FPItemID *)arg2 request:(FPDRequest *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)downloadItemWithItemID:(FPItemID *)arg1 request:(FPDRequest *)arg2 progress:(NSProgress *)arg3 completionHandler:(void (^)(NSURL *, NSError *))arg4;
- (long long)nonEvictableSpace;
- (void)forceIngestionForItemID:(FPItemID *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)forceFSIngestionForItemID:(FPItemID *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)forceIngestionAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (NSURL *)materializedURLForItemID:(FPItemID *)arg1;
- (void)decorateItems:(NSArray *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)fakeFSEventAtURL:(NSURL *)arg1;
@end
