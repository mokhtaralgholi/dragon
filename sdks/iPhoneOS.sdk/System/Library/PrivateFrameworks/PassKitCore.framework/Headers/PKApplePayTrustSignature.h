//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData, PKApplePayTrustSignatureRequest;

@interface PKApplePayTrustSignature : NSObject <NSSecureCoding>
{
    PKApplePayTrustSignatureRequest *_signatureRequest;
    NSData *_signatureData;
    NSData *_paymentData;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *paymentData; // @synthesize paymentData=_paymentData;
@property(readonly, copy, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(readonly, nonatomic) PKApplePayTrustSignatureRequest *signatureRequest; // @synthesize signatureRequest=_signatureRequest;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignatureRequest:(id)arg1 signature:(id)arg2;

@end
