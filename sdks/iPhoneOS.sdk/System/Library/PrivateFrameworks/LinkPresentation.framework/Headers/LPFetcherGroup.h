//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPFetcherConfiguration, NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPFetcherGroup : NSObject
{
    LPFetcherConfiguration *_configuration;
    long long _responsePolicy;
    id /* CDUnknownBlockType */ _completionHandler;
    NSMutableArray *_tasks;
    BOOL _doneAddingFetchers;
    BOOL _done;
    unsigned int _loggingID;
}

// - (void).cxx_destruct;
- (void)_completed;
- (void)cancel;
- (id)_responsesRespectingPolicy;
- (void)evaluateCompleteness;
- (void)doneAddingFetchers;
- (void)startFetchesIfNeeded;
- (NSUInteger)numberOfActiveFetches;
- (void)prependFetcher:(id)arg1;
- (void)appendFetcher:(id)arg1;
- (void)_addFetcher:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)initWithPolicy:(long long)arg1 configuration:(id)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;

@end
