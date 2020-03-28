//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;
@protocol NSCopying><NSSecureCoding;

@interface PPLabeledValue : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_label;
    NSObject<NSCopying><NSSecureCoding> *_value;
}

+ (BOOL)supportsSecureCoding;
+ (id)labeledValueWithLabel:(id)arg1 value:(id)arg2;
@property(readonly, nonatomic) NSObject<NSCopying><NSSecureCoding> *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
// - (void).cxx_destruct;
- (BOOL)isEqualToLabeledValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithLabel:(id)arg1 value:(id)arg2;

@end
