//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASZoneSupport : NSObject
{
}

+ (id)deepCopyObject:(id)arg1 toZone:(_NSZone )arg2 strategy:(CDStruct_d3566df9)arg3;
+ (id)copyUUID:(id)arg1 toZone:(_NSZone )arg2;
+ (id)copyDate:(id)arg1 toZone:(_NSZone )arg2;
+ (id)copyNumber:(id)arg1 toZone:(_NSZone )arg2;
+ (id)mutableCopyData:(id)arg1 toZone:(_NSZone )arg2;
+ (id)copyData:(id)arg1 toZone:(_NSZone )arg2;
+ (id)newMutableDataInZone:(_NSZone )arg1 length:(NSUInteger)arg2;
+ (id)newMutableDataInZone:(_NSZone )arg1 capacity:(NSUInteger)arg2;
+ (id)newMutableDataInZone:(_NSZone )arg1;
+ (id)mutableCopyString:(id)arg1 toZone:(_NSZone )arg2;
+ (id)copyString:(id)arg1 toZone:(_NSZone )arg2;
+ (id)newMutableStringInZone:(_NSZone )arg1 capacity:(NSUInteger)arg2;
+ (id)newMutableStringInZone:(_NSZone )arg1;
+ (id)mutableCopySet:(id)arg1 toZone:(_NSZone )arg2;
+ (id)copySet:(id)arg1 toZone:(_NSZone )arg2;
+ (id)newMutableSetInZone:(_NSZone )arg1 capacity:(NSUInteger)arg2;
+ (id)newMutableSetInZone:(_NSZone )arg1;
+ (id)mutableCopyDictionary:(id)arg1 toZone:(_NSZone )arg2;
+ (id)copyDictionary:(id)arg1 toZone:(_NSZone )arg2;
+ (id)newMutableDictionaryInZone:(_NSZone )arg1 capacity:(NSUInteger)arg2;
+ (id)newMutableDictionaryInZone:(_NSZone )arg1;
+ (id)mutableCopyArray:(id)arg1 toZone:(_NSZone )arg2;
+ (id)copyArray:(id)arg1 toZone:(_NSZone )arg2;
+ (id)newMutableArrayInZone:(_NSZone )arg1 capacity:(NSUInteger)arg2;
+ (id)newMutableArrayInZone:(_NSZone )arg1;

@end
