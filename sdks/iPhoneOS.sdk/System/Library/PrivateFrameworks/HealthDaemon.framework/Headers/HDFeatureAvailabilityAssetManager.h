//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class HDPeriodicActivity, NPSManager, NSURL, NSUserDefaults, _HKMobileAssetDownloadManager;
@protocol OS_dispatch_queue;

@interface HDFeatureAvailabilityAssetManager : NSObject <HDPeriodicActivityDelegate>
{
    NPSManager *_syncManager;
    NSURL *_assetDirectoryOverride;
    double _retryInterval;
    NSObject<OS_dispatch_queue> *_queue;
    _HKMobileAssetDownloadManager *_downloadManager;
    HDPeriodicActivity *_periodicActivity;
    NSUserDefaults *_unitTest_defaults;
    id /* CDUnknownBlockType */ _unitTest_errorObserver;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ unitTest_errorObserver; // @synthesize unitTest_errorObserver=_unitTest_errorObserver;
@property(retain, nonatomic) NSUserDefaults *unitTest_defaults; // @synthesize unitTest_defaults=_unitTest_defaults;
@property(retain, nonatomic) HDPeriodicActivity *periodicActivity; // @synthesize periodicActivity=_periodicActivity;
@property(retain, nonatomic) _HKMobileAssetDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(readonly, nonatomic) NSURL *assetDirectoryOverride; // @synthesize assetDirectoryOverride=_assetDirectoryOverride;
@property(readonly, nonatomic) NPSManager *syncManager; // @synthesize syncManager=_syncManager;
// - (void).cxx_destruct;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_queue_downloadDidCompleteWithError:(id)arg1;
- (void)_queue_downloadDidCompleteWithAssets:(id)arg1;
- (void)_configureDownloadManager;
- (id)initWithProfile:(id)arg1;

@end
