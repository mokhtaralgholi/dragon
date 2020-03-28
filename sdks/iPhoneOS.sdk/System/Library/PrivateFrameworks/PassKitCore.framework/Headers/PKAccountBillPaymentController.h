//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentAuthorizationCoordinatorDelegate-Protocol.h>
#import <PassKitCore/PKPaymentAuthorizationCoordinatorPrivateDelegate-Protocol.h>

@class NSArray, NSDate, NSDecimalNumber, NSError, NSMutableSet, NSString, PKAccount, PKAccountEvent, PKAccountService, PKAccountWebServiceSchedulePaymentRequest, PKBankAccountInformation, PKPaymentAuthorizationCoordinator, PKPaymentPass, PKPaymentRequest, PKPaymentService, PKPaymentWebService, PKPeerPaymentAccount;
@protocol PKAccountBillPaymentControllerDelegate;

@interface PKAccountBillPaymentController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>
{
    PKPaymentWebService *_webService;
    PKPaymentService *_paymentService;
    PKAccountWebServiceSchedulePaymentRequest *_schedulePaymentRequest;
    PKPaymentAuthorizationCoordinator *_schedulePaymentAuthorizationCoordinator;
    NSError *_applePayTrustResponseError;
    PKBankAccountInformation *_bankInformation;
    PKPaymentPass *_pass;
    PKAccountService *_accountService;
    NSString *_currency;
    NSDecimalNumber *_totalPaymentAmount;
    NSDecimalNumber *_achPaymentAmount;
    NSDecimalNumber *_apcPaymentAmount;
    NSDecimalNumber *_peerPaymentBalance;
    PKPaymentRequest *_paymentRequest;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKAccountEvent *_billPaymentSuggestedAmountDataEvent;
    NSDate *_scheduledDate;
    NSString *_peerPaymentPassUniqueId;
    BOOL _accountPaymentSupportsPeerPaymentBalance;
    BOOL _peerPaymentAccountSupportsAccountPayments;
    BOOL _performingAction;
    BOOL _completedBillPayment;
    BOOL _fetchingData;
    NSError *_fetchingDataError;
    NSMutableSet *_dataFetchingCompletionHandlers;
    PKAccount *_account;
    id <PKAccountBillPaymentControllerDelegate> _delegate;
    NSArray *_fundingSources;
    NSArray *_payments;
}

@property(retain, nonatomic) NSArray *payments; // @synthesize payments=_payments;
@property(retain, nonatomic) NSArray *fundingSources; // @synthesize fundingSources=_fundingSources;
@property(nonatomic) __weak id <PKAccountBillPaymentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKAccount *account; // @synthesize account=_account;
// - (void).cxx_destruct;
- (void)_accountDidChange:(id)arg1;
- (void)_billPaymentHasCompletedWithState:(NSUInteger)arg1 error:(id)arg2;
- (void)_performApplePayTrustSignatureRequestWithSignature:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_presentPaymentAuthorizationWithPaymentRequest:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_paymentSummaryItems;
- (id)_bankAccountsForFundingSources:(id)arg1;
- (id)_paymentRequestWithSignatureRequest:(id)arg1 bankAccounts:(id)arg2;
- (id)_apcPayment;
- (id)_achPayment;
- (id)_createSchedulePaymentRequest;
- (void)performBillPaymentActionWithAmount:(id)arg1 scheduledDate:(id)arg2 billPaymentSuggestedAmountDataEvent:(id)arg3;
- (void)performBillPaymentActionWithAmount:(id)arg1 billPaymentSuggestedAmountDataEvent:(id)arg2;
- (void)performBillPaymentActionWithAmount:(id)arg1;
- (void)canPerformBillPaymentWithAmount:(id)arg1 scheduledDate:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didUpdateAccountServicePaymentMethod:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizeApplePayTrustSignature:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* CDUnknownBlockType */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)_updateUseApplePayCashSetting:(BOOL)arg1;
- (void)_completeFetchingFundingSources;
- (void)_fetchFundingSources;
- (void)_updateAmounts;
- (BOOL)_shouldUsePeerPaymentBalance;
- (BOOL)_accountPaymentSupportsPeerPaymentForDate:(id)arg1;
- (BOOL)_accountPaymentSupportsPeerPayment;
- (id)initWithAccount:(id)arg1 paymentPass:(id)arg2;
- (id)initWithAccount:(id)arg1;
- (id)init;

@end
