//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface WFLogging : NSObject
{
    NSMutableSet *_backends;
}

+ (void)logEvent:(id)arg1 withObjects:(id)arg2;
+ (void)logEvent:(id)arg1 withObject:(id)arg2;
+ (void)logEvent:(id)arg1;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)logEvent:(id)arg1 withProperties:(id)arg2;
- (id)init;
- (void)registerBackend:(id)arg1;
- (void)registerAllContentKitBackends;

@end
