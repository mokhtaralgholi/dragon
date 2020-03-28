//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentAuthorizationHostProtocol-Protocol.h>

@class PKPaymentAuthorizationCoordinator;
@protocol OS_dispatch_queue, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationServiceProtocol;

@interface PKPaymentAuthorizationCoordinatorExportedObject : NSObject <PKPaymentAuthorizationHostProtocol>
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <PKPaymentAuthorizationCoordinatorDelegate> _delegate;
    id <PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;
    PKPaymentAuthorizationCoordinator *_controller;
    id <PKPaymentAuthorizationServiceProtocol> _serviceProxy;
}

@property(retain, nonatomic) id <PKPaymentAuthorizationServiceProtocol> serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(nonatomic) PKPaymentAuthorizationCoordinator *controller; // @synthesize controller=_controller;
// - (void).cxx_destruct;
@property(nonatomic) __weak id <PKPaymentAuthorizationCoordinatorPrivateDelegate> privateDelegate; // @synthesize privateDelegate=_privateDelegate;
@property(nonatomic) __weak id <PKPaymentAuthorizationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1;
- (void)authorizationDidAuthorizeDisbursement:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationWillStart;
- (void)didEncounterAuthorizationEvent:(NSUInteger)arg1;
- (void)connectionDidOpen;
- (void)authorizationDidPresent;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (id)init;

@end
