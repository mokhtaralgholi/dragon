//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTSOSMetric-Protocol.h>

@class NSString;

@interface IDSBagFailMetric : NSObject <CUTSOSMetric>
{
    NSUInteger _sosDomain;
    NSUInteger _sosType;
    NSUInteger _sosError;
    NSString *_operationID;
}

+ (id)metricWithDomain:(NSUInteger)arg1 type:(NSUInteger)arg2 error:(NSUInteger)arg3 bagURL:(id)arg4;
@property(retain, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property(nonatomic) NSUInteger sosError; // @synthesize sosError=_sosError;
@property(nonatomic) NSUInteger sosType; // @synthesize sosType=_sosType;
@property(nonatomic) NSUInteger sosDomain; // @synthesize sosDomain=_sosDomain;
// - (void).cxx_destruct;
@property(readonly) NSString *name;
- (id)initWithDomain:(NSUInteger)arg1 type:(NSUInteger)arg2 error:(NSUInteger)arg3 bagURL:(id)arg4;

@end
