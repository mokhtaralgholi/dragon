//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSString;

@interface WFEmailAddress : NSObject <NSCopying, WFNaming, WFSerializableContent>
{
    NSString *_address;
    NSString *_label;
}

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)addressWithEmailAddress:(id)arg1 label:(id)arg2;
+ (id)addressWithEmailAddress:(id)arg1;
+ (id)addressesWithMailtoURL:(id)arg1;
+ (id)addressesWithTextCheckingResult:(id)arg1;
+ (BOOL)stringContainsEmailAddresses:(id)arg1;
+ (id)emailAddressesInString:(id)arg1 error:(id )arg2;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSString *address; // @synthesize address=_address;
// - (void).cxx_destruct;
- (id)wfSerializedRepresentation;
@property(readonly, copy, nonatomic) NSString *wfName;
// - (id)copyWithZone:(_NSZone )arg1;
- (long long)compare:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *localizedLabel;
- (id)initWithAddress:(id)arg1 label:(id)arg2;

@end
