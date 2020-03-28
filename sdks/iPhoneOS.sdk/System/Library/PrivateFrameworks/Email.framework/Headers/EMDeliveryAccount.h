//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMAccount.h>

#import <Email/EMDeliveryAccountBuilder-Protocol.h>

@class NSString;

@interface EMDeliveryAccount : EMAccount <EMDeliveryAccountBuilder>
{
    BOOL _primaryiCloudAccount;
    NSString *_name;
    NSString *_username;
    NSString *_hostname;
    NSUInteger _maximumMessageBytes;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) NSUInteger maximumMessageBytes; // @synthesize maximumMessageBytes=_maximumMessageBytes;
@property(nonatomic, getter=isPrimaryiCloudAccount) BOOL primaryiCloudAccount; // @synthesize primaryiCloudAccount=_primaryiCloudAccount;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)name;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInitName:(id)arg1 hostname:(id)arg2 builder:(id /* CDUnknownBlockType */)arg3;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 hostname:(id)arg3 builder:(id /* CDUnknownBlockType */)arg4;

@end
