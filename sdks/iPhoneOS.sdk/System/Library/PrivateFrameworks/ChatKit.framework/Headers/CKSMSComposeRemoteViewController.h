//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <ChatKit/CKSMSComposeRemoteViewControllerDelegate-Protocol.h>

@protocol CKSMSComposeRemoteViewControllerDelegate;

@interface CKSMSComposeRemoteViewController : _UIRemoteViewController <CKSMSComposeRemoteViewControllerDelegate>
{
    id <CKSMSComposeRemoteViewControllerDelegate> _delegate;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* CDUnknownBlockType */)arg1;
@property(nonatomic) __weak id <CKSMSComposeRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)smsComposeControllerEntryViewContentInserted;
- (void)smsComposeControllerCancelled;
- (void)smsComposeControllerSendStartedWithText:(id)arg1;
- (void)smsComposeControllerShouldSendMessageWithText:(id)arg1 toRecipients:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerDataInserted;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)dealloc;

@end
