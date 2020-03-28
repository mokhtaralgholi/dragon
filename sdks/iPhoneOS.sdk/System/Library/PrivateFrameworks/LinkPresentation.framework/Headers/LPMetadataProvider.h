//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPMetadataProviderSpecializationDelegate-Protocol.h>
#import <LinkPresentation/WKNavigationDelegate-Protocol.h>

@class LPAnimatedImageTranscoder, LPFetcherGroup, LPLinkMetadata, LPMetadataProviderSpecialization, NSMutableArray, NSTimer, NSURL, WKWebView;
@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface LPMetadataProvider : NSObject <WKNavigationDelegate, LPMetadataProviderSpecializationDelegate>
{
    unsigned int _loggingID;
    WKWebView *_webView;
    NSURL *_URL;
    NSURL *_originalURL;
    NSTimer *_watchdog;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    LPLinkMetadata *_metadata;
    BOOL _complete;
    BOOL _fetchingFromExistingWebView;
    BOOL _hasStartedFetching;
    BOOL _hasEverStartedFetchingMetadataFromWebView;
    BOOL _useSpecializedProviders;
    NSUInteger _allowedSpecializedProviders;
    NSObject<OS_dispatch_group> *_subresourceFetchGroup;
    LPFetcherGroup *_iconFetcherGroup;
    LPAnimatedImageTranscoder *_imageTranscoder;
    NSMutableArray *_pendingFetchers;
    long long _specializationState;
    LPMetadataProviderSpecialization *_specializedMetadataProvider;
    BOOL _shouldFetchSubresources;
    BOOL _cancelled;
    double _timeout;
    id /* CDUnknownBlockType */ _completionHandler;
}

+ (id)_defaultUserAgent;
+ (id)_copyDefaultWebViewConfiguration;
+ (id)requestMetadataForWebView:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
+ (id)requestMetadataForURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
+ (id)_incompleteMetadataRequests;
+ (id)_callbackQueue;
@property(nonatomic) BOOL useSpecializedProviders; // @synthesize useSpecializedProviders=_useSpecializedProviders;
@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) BOOL shouldFetchSubresources; // @synthesize shouldFetchSubresources=_shouldFetchSubresources;
@property(nonatomic) NSUInteger allowedSpecializedProviders; // @synthesize allowedSpecializedProviders=_allowedSpecializedProviders;
// - (void).cxx_destruct;
- (void)metadataProviderSpecializationDidFail:(id)arg1;
- (void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2;
- (void)metadataProviderSpecialization:(id)arg1 didFetchPreliminaryMetadata:(id)arg2;
- (void)_postProcessResolvedMetadataWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)_completedWithError:(id)arg1;
- (void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2;
- (void)_simplifyTitle;
- (void)_redistinguishImagesAndIcons;
- (void)_fetchSubresources;
@property(nonatomic) BOOL fetchSubresources;
- (void)_fetchImplicitIcons;
- (id)subresourceFetcherConfiguration;
- (void)_fetchedMetadata:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)_cancelDueToTimeout;
- (void)cancel;
- (void)_generateSpecializationIfPossibleForCompleteMetadata:(id)arg1 URL:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_switchToSpecializationIfPossibleForURL:(id)arg1;
- (BOOL)_switchToSpecializationIfPossibleForMetadata:(id)arg1 URL:(id)arg2;
- (BOOL)_switchToSpecializationIfPossibleForMIMEType:(id)arg1 URL:(id)arg2 hasLoadedResource:(BOOL)arg3;
- (void)_fetchMetadataFromWebView;
- (void)_setMetadata:(id)arg1 onlyUpgradeFields:(BOOL)arg2;
- (void)_stopWatchdogTimer;
- (void)_startWatchdogTimer;
- (void)startFetchingSubresourcesForPartialMetadata:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)_startFetchingMetadataForWebView:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)startFetchingMetadataForWebView:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)_startFetchingMetadataForURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_internalStartFetchingMetadataFromURL;
- (void)startFetchingMetadataForURL:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)_willStartFetchingMetadata;
- (void)dealloc;
- (id)init;

@end
