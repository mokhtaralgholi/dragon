//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class HKQuantity;

@interface NLSessionActivityGoal : NSObject <NSSecureCoding>
{
    double _doubleValue;
    NSUInteger _goalTypeIdentifier;
}

+ (id)goalWithGoalTypeIdentifier:(NSUInteger)arg1 value:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)goalFromURL:(id)arg1;
@property(nonatomic) NSUInteger goalTypeIdentifier; // @synthesize goalTypeIdentifier=_goalTypeIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)doubleValue;
- (id)_quantityForDoubleValue:(double)arg1;
- (double)_doubleValueForQuantity:(id)arg1;
@property(retain, nonatomic) HKQuantity *value;
- (id)initWithGoalTypeIdentifier:(NSUInteger)arg1 value:(id)arg2;

@end
