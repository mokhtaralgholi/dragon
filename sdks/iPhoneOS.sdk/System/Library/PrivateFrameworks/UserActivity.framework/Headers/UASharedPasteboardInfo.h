//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDictionary, NSFileHandle, NSString;

@interface UASharedPasteboardInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSFileHandle *_dataFile;
    long long _dataSize;
    NSArray *_items;
    NSString *_sharedDataPath;
    NSDictionary *_sandboxExtensions;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSDictionary *sandboxExtensions; // @synthesize sandboxExtensions=_sandboxExtensions;
@property(copy) NSString *sharedDataPath; // @synthesize sharedDataPath=_sharedDataPath;
@property(copy) NSArray *items; // @synthesize items=_items;
@property long long dataSize; // @synthesize dataSize=_dataSize;
@property(retain) NSFileHandle *dataFile; // @synthesize dataFile=_dataFile;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
