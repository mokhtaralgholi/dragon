//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccount/AAFollowUpProtocol-Protocol.h>

@interface AAFollowUpController : NSObject <AAFollowUpProtocol>
{
}

- (void)dismissFollowUpWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)pendingFollowUpWithIdentifier:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)_shouldPostRenewFollowup:(id)arg1;
- (id)_followupActionUserInfo:(id)arg1;
- (id)_followUpItemForRenewCredentials:(id)arg1;
- (id)_followUpItemForVerifyTerms:(id)arg1;
- (id)_followUpItemForStartUsing:(id)arg1;
- (id)_followUpItemForIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)_followUpItemForIdentifier:(id)arg1;
- (id)_followUpController;
- (void)_dismissFollowUpWithIdentifiers:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)pendingFollowUpsForAccount:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)dismissFollowUpsForAccount:(id)arg1 identifiers:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)dismissFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)postFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 userInfo:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;

@end
