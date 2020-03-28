//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REHistoricSectionDescriptorProperties-Protocol.h>

@class NSArray, NSOrderedSet, NSSet, NSString, RESectionDescriptor;

@interface REHistoricSectionDescriptor : NSObject <REHistoricSectionDescriptorProperties, NSCopying>
{
    NSOrderedSet *_rules;
    BOOL _invertsRanking;
    long long _maxElementCount;
    RESectionDescriptor *_parentDescriptor;
}

@property(nonatomic) __weak RESectionDescriptor *parentDescriptor; // @synthesize parentDescriptor=_parentDescriptor;
@property(nonatomic) long long maxElementCount; // @synthesize maxElementCount=_maxElementCount;
@property(nonatomic) BOOL invertsRanking; // @synthesize invertsRanking=_invertsRanking;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
@property(copy, nonatomic) NSSet *rules;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *name;
- (id)init;
@property(retain, nonatomic) NSArray *orderedRules;

@end
