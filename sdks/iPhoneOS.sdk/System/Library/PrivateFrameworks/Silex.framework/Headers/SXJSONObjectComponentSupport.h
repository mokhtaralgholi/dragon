//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SXJSONObjectComponentSupport : NSObject
{
    NSString *_specVersion;
}

+ (id)shared;
@property(readonly, nonatomic) NSString *specVersion; // @synthesize specVersion=_specVersion;
// - (void).cxx_destruct;
- (id /* CDUnknownBlockType */)purgeClassBlock;
- (id /* CDUnknownBlockType */)objectValueClassBlock;
- (id)initWithSpecVersion:(id)arg1;

@end
