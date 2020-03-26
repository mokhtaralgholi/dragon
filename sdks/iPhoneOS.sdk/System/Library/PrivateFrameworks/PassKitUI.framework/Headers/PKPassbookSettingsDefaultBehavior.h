//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPassbookSettingsDataSource-Protocol.h>

@class PKPassLibraryDefaultDataProvider, PKPassbookPeerPaymentSettingsDefaultBehavior, PKPaymentDefaultDataProvider, PKPaymentOptionsDefaults;

@interface PKPassbookSettingsDefaultBehavior : NSObject <PKPassbookSettingsDataSource>
{
    PKPassLibraryDefaultDataProvider *_passLibraryDataProvider;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    PKPaymentOptionsDefaults *_options;
    PKPassbookPeerPaymentSettingsDefaultBehavior *_peerPaymentDefaultBehavior;
}

// - (void).cxx_destruct;
- (BOOL)secureElementIsProductionSigned;
- (id)deviceName;
- (BOOL)supportsCredentialType:(long long)arg1;
- (BOOL)hasFelicaSecureElement;
- (id)peerPaymentDataSource;
- (id)peerPaymentDelegate;
- (BOOL)canRegisterForPeerPayment;
- (id)secureElementID;
- (id)optionsDelegate;
- (id)paymentDataProvider;
- (id)passLibraryDataProvider;
- (id)setupDelegate;
- (BOOL)deviceSupportsInAppPayments;
- (BOOL)deviceInRestrictedMode;
- (void)dealloc;
- (id)init;

@end
