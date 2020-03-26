//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDateComponents, NSDictionary, NSString;

@interface STAllowance : NSObject <NSCopying>
{
    BOOL _allowanceEnabled;
    BOOL _shouldAllowEditing;
    NSArray *_bundleIdentifiers;
    NSArray *_webDomains;
    NSArray *_categoryIdentifiers;
    NSString *_identifier;
    NSUInteger _behaviorType;
    NSDateComponents *_time;
    NSDictionary *_timeByDay;
}

+ (double)timeIntervalForAllowanceDateComponents:(id)arg1;
+ (id)dateComponentsForDuration:(double)arg1;
@property(copy, nonatomic) NSDictionary *timeByDay; // @synthesize timeByDay=_timeByDay;
@property(copy, nonatomic) NSDateComponents *time; // @synthesize time=_time;
@property(nonatomic) NSUInteger behaviorType; // @synthesize behaviorType=_behaviorType;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) BOOL shouldAllowEditing; // @synthesize shouldAllowEditing=_shouldAllowEditing;
@property BOOL allowanceEnabled; // @synthesize allowanceEnabled=_allowanceEnabled;
@property(copy) NSArray *categoryIdentifiers; // @synthesize categoryIdentifiers=_categoryIdentifiers;
@property(copy) NSArray *webDomains; // @synthesize webDomains=_webDomains;
@property(copy) NSArray *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
// - (void).cxx_destruct;
- (id)defaultTimeByDay;
- (id)defaultBudgetTime;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
@property(readonly, copy) NSString *scheduleText;
@property(readonly, nonatomic) double timeToday;
- (id)initWithBlueprint:(id)arg1;
- (id)init;

@end
