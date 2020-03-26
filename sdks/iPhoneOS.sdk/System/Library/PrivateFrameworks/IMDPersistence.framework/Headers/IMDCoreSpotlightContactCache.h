//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface IMDCoreSpotlightContactCache : NSObject
{
    NSCache *_cache;
}

+ (void)vCardCoordinateForMapURL:(id)arg1 outLatitude:(float )arg2 outLongitude:(float )arg3;
+ (id)vCardMapURLForContact:(id)arg1;
+ (void)updateAttributes:(id)arg1 withAddressFromContact:(id)arg2;
+ (id)vCardNameForContact:(id)arg1;
+ (id)contactsForVCardAtPath:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void)dealloc;
- (void)contactStoreDidChange:(id)arg1;
- (id)cachedContactForKey:(id)arg1 cacheHit:(BOOL )arg2;
- (void)cacheContact:(id)arg1 forKey:(id)arg2;

@end
