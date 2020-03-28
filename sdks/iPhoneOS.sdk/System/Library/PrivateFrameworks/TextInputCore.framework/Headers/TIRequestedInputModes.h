//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface TIRequestedInputModes : NSObject
{
    BOOL _didLoad;
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_inputModesByDate;
}

+ (id)defaultDatabaseURL;
// - (void).cxx_destruct;
- (void)removeAllInputModes:(id /* CDUnknownBlockType */)arg1;
- (void)removeInputModesBeforeDate:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)addInputMode:(id)arg1 date:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)inputModes:(id /* CDUnknownBlockType */)arg1;
- (void)_removeAllInputModes:(id /* CDUnknownBlockType */)arg1;
- (void)_removeInputModesBeforeDate:(id)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (void)_addInputMode:(id)arg1 date:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)_inputModes:(id /* CDUnknownBlockType */)arg1;
- (id)_inputModes;
- (void)_saveInputModes;
- (void)_loadIfNecessaryWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

@end
