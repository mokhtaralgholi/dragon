//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMapTable;

@interface MPUContentItemIdentifierCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSMapTable *_identifierTypeToIdentifier;
    NSUInteger _itemType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger itemType; // @synthesize itemType=_itemType;
// - (void).cxx_destruct;
- (void)_setIdentifier:(id)arg1 forIdentifierType:(NSUInteger)arg2;
// - (id)_copyWithZone:(_NSZone )arg1 class:(Class)arg2;
- (id)identifierForIdentifierType:(NSUInteger)arg1;
- (void)enumerateIdentifiersUsingBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) NSUInteger identifierCount;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithItemType:(NSUInteger)arg1;

@end
