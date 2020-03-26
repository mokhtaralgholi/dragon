//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplication.h>

@class WorldClockCity;

@interface NTKWorldClockComplication : NTKComplication
{
    WorldClockCity *_city;
}

+ (BOOL)supportsSecureCoding;
+ (id)_allComplicationConfigurationsWithType:(NSUInteger)arg1;
+ (id)_allCities;
@property(readonly, nonatomic) WorldClockCity *city; // @synthesize city=_city;
// - (void).cxx_destruct;
- (id)_initWithComplicationType:(NSUInteger)arg1 JSONDictionary:(id)arg2;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)customDailySnapshotKey;
- (BOOL)appearsInDailySnapshotForFamily:(long long)arg1;
- (id)description;
- (id)localizedDetailText;
- (id)localizedRichDetailText;

@end
