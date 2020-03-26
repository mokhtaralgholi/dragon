//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MFCertificateTrustInfo : NSObject
{
    NSString *_uncommentedSender;
    NSUInteger _certificateType;
    NSString *_sender;
    struct __SecTrust _trust;
}

@property(readonly, nonatomic) struct __SecTrust trust; // @synthesize trust=_trust;
@property(readonly, copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) NSUInteger certificateType; // @synthesize certificateType=_certificateType;
// - (void).cxx_destruct;
- (void)removeCertificateFromKeychain;
- (void)saveCertificateToKeychain;
@property(readonly, nonatomic) NSUInteger keychainStatus;
@property(readonly, nonatomic) BOOL canSaveCertificateToKeychain;
- (void)removeTrustException;
- (void)addTrustException;
@property(readonly, nonatomic) BOOL hasTrustException;
@property(readonly, copy, nonatomic) NSString *emailAddress;
@property(readonly, copy, nonatomic) NSString *commonName;
@property(readonly, nonatomic) int action;
@property(readonly, nonatomic) struct __SecCertificate certificate;
- (void)dealloc;
- (id)initWithCertificateType:(NSUInteger)arg1 trust:(struct __SecTrust )arg2 sender:(id)arg3;

@end
