//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/IDSServiceDelegate-Protocol.h>
#import <NanoPassKit/NPKPaymentProvisioningFlowControllerDelegate-Protocol.h>

@class IDSService, NPKPaymentProvisioningFlowController, NPKPaymentProvisioningFlowStepContext, NPKStandaloneProvisioningNumericEntryCoordinator, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NPKStandaloneService : NSObject <IDSServiceDelegate, NPKPaymentProvisioningFlowControllerDelegate>
{
    int _defaultProtocolVersion;
    IDSService *_provisioningService;
    NSObject<OS_dispatch_queue> *_queue;
    NPKPaymentProvisioningFlowController *_flowController;
    NPKPaymentProvisioningFlowStepContext *_flowStepContext;
    NSMutableDictionary *_flowStepToContext;
    NPKStandaloneProvisioningNumericEntryCoordinator *_numericEntryCoordinator;
}

@property(retain, nonatomic) NPKStandaloneProvisioningNumericEntryCoordinator *numericEntryCoordinator; // @synthesize numericEntryCoordinator=_numericEntryCoordinator;
@property(nonatomic) int defaultProtocolVersion; // @synthesize defaultProtocolVersion=_defaultProtocolVersion;
@property(retain, nonatomic) NSMutableDictionary *flowStepToContext; // @synthesize flowStepToContext=_flowStepToContext;
@property(retain, nonatomic) NPKPaymentProvisioningFlowStepContext *flowStepContext; // @synthesize flowStepContext=_flowStepContext;
@property(retain, nonatomic) NPKPaymentProvisioningFlowController *flowController; // @synthesize flowController=_flowController;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSService *provisioningService; // @synthesize provisioningService=_provisioningService;
// - (void).cxx_destruct;
- (void)_didEncounterErrorUnexpectedError:(id)arg1;
- (void)_showCVVEntryUIWithLocalDeviceManualEntryContext:(id)arg1;
- (void)paymentProvisioningFlowController:(id)arg1 didEncounterError:(id)arg2 requestContext:(id)arg3;
- (void)paymentProvisioningFlowController:(id)arg1 didTransitionFromStep:(int)arg2 toStep:(int)arg3 withContext:(id)arg4;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowHandleReaderModeFieldsRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowChooseReaderModeRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowHandleDigitalIssuanceAmountRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowAcknowledgeMoreInformationRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowStartIssuerVerificationFlowForPaymentPassRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentPassListRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowHandleIssuerVerificationCodeRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowHandleIssuerVerificationFieldsRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowHandleIssuerVerificationChannelRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowSkipProvisioningRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowAcceptTermsRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowHandleManualEntryFieldsRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowChooseManualEntryRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowChooseCredentialsRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowChooseProductRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowChooseFlowRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowAcknowledgeWelcomeRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)handlePaymentProvisioningFlowStartProvisioningFlowRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)sendInitializationResponse:(id)arg1;
- (void)handleInitializationRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)sendPingResponse:(id)arg1;
- (void)handlePingRequest:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)_initFlowControllerWithSimulatedFlowController:(BOOL)arg1 separateLocalDeviceEntryRequired:(BOOL)arg2;
- (id)init;

@end
