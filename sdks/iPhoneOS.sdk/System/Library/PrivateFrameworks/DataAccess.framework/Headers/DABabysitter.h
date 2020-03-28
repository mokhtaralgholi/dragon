//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface DABabysitter : NSObject
{
    NSString *_buildVersion;
    NSMutableDictionary *_refreshingWaiters;
    NSMutableDictionary *_failedWaiters;
    NSMutableDictionary *_restrictedWaiters;
}

+ (id)sharedBabysitter;
@property(retain, nonatomic) NSMutableDictionary *restrictedWaiters; // @synthesize restrictedWaiters=_restrictedWaiters;
@property(retain, nonatomic) NSMutableDictionary *failedWaiters; // @synthesize failedWaiters=_failedWaiters;
@property(retain, nonatomic) NSMutableDictionary *refreshingWaiters; // @synthesize refreshingWaiters=_refreshingWaiters;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
// - (void).cxx_destruct;
- (void)giveAccountWithIDAnotherChance:(id)arg1;
- (BOOL)accountShouldContinue:(id)arg1;
- (BOOL)accountWithIDShouldContinue:(id)arg1;
- (void)unregisterAccount:(id)arg1 forOperationWithName:(id)arg2;
- (BOOL)registerAccount:(id)arg1 forOperationWithName:(id)arg2;
- (void)_decrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;
- (void)_decrementRefreshCountForWaiter:(id)arg1 forOperationWithName:(id)arg2;
- (void)_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)_init;
- (void)_reloadBabysitterProperties;

@end
