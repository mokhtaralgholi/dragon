//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TXRDeferredMipmapInfo : NSObject
{
    NSMutableArray *_elements;
}

@property(readonly, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
// - (void).cxx_destruct;
- (id)initWithArrayLength:(NSUInteger)arg1 cubemap:(BOOL)arg2;

@end
