//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSTimer, NSURL;
@protocol OS_dispatch_queue;

@interface SBRecentAppLayoutsPersister : NSObject
{
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSURL *_persistenceURL;
    NSTimer *_persistTimer;
    BOOL _initializedNewStoreOnDisk;
    NSArray *_recents;
}

@property(retain, nonatomic) NSArray *recents; // @synthesize recents=_recents;
// - (void).cxx_destruct;
- (void)_queue_writeCompressedProtobufRepresentationToDisk:(id)arg1;
- (void)_enqueueDiskWrite;
- (void)_persistTimerExpired:(id)arg1;
- (id)_scheduledPersistTimer;
- (void)_loadRecents;
- (void)syncToDiskSynchronously;
- (void)syncToDiskSoonIfDirty;
@property(readonly, nonatomic) BOOL initializedNewStoreOnDisk;
- (id)initWithPersistenceURL:(id)arg1;

@end
