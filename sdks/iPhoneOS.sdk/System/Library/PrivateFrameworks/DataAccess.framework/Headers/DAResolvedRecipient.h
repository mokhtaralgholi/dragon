//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface DAResolvedRecipient : NSObject
{
    long long _status;
    long long _certificatesStatus;
    long long _availabilityStatus;
    NSString *_mergedFreeBusy;
    NSMutableDictionary *_mResolvedEmailToX509Certs;
}

@property(retain, nonatomic) NSMutableDictionary *mResolvedEmailToX509Certs; // @synthesize mResolvedEmailToX509Certs=_mResolvedEmailToX509Certs;
@property(retain, nonatomic) NSString *mergedFreeBusy; // @synthesize mergedFreeBusy=_mergedFreeBusy;
@property(nonatomic) long long availabilityStatus; // @synthesize availabilityStatus=_availabilityStatus;
@property(nonatomic) long long certificatesStatus; // @synthesize certificatesStatus=_certificatesStatus;
@property(nonatomic) long long status; // @synthesize status=_status;
// - (void).cxx_destruct;
- (void)addCert:(id)arg1 forEmailAddress:(id)arg2;
- (id)description;
@property(readonly, nonatomic) NSDictionary *resolvedEmailToX509Certs;

@end
