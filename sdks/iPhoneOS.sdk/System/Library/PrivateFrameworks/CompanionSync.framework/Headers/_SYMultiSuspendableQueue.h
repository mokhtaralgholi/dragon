//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYStateLoggable-Protocol.h>

@class NSMutableArray, NSString, PBCodable;
@protocol OS_dispatch_queue;

@interface _SYMultiSuspendableQueue : NSObject <SYStateLoggable>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSUInteger _stateHandle;
    _Atomic int _resumeCount;
    NSString *_logDescriptor;
    NSMutableArray *_latestSuspendBacktraces;
    NSMutableArray *_latestResumeBacktraces;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) PBCodable *stateForLogging;
- (void)barrierAsync:(id /* CDUnknownBlockType */)arg1;
- (void)barrierSync:(id /* CDUnknownBlockType */)arg1;
- (void)async:(id /* CDUnknownBlockType */)arg1;
- (void)sync:(id /* CDUnknownBlockType */)arg1;
- (void)resume;
- (void)suspend;
@property(readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property(readonly, nonatomic) unsigned int qosClass;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithName:(id)arg1 qosClass:(unsigned int)arg2 serial:(BOOL)arg3 target:(id)arg4;
- (id)initWithName:(id)arg1 qosClass:(unsigned int)arg2 serial:(BOOL)arg3;
- (id)init;

@end
