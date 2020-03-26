//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIDebugMetricsTermCollector-Protocol.h>

@class NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsTermCollector : NSObject <VUIDebugMetricsTermCollector>
{
    NSMutableSet *_mutableCommonTerms;
    NSMutableSet *_mutableTimingTerms;
}

@property(retain, nonatomic) NSMutableSet *mutableTimingTerms; // @synthesize mutableTimingTerms=_mutableTimingTerms;
@property(retain, nonatomic) NSMutableSet *mutableCommonTerms; // @synthesize mutableCommonTerms=_mutableCommonTerms;
// - (void).cxx_destruct;
- (void)populateCommonTermsFrom:(id)arg1;
- (void)collectTermsFrom:(id)arg1;
@property(readonly, nonatomic) NSSet *blacklistedTerms;
@property(readonly, nonatomic) NSSet *whitelistedTerms;
@property(readonly, nonatomic) NSSet *baseTerms;
@property(readonly, nonatomic) NSSet *timingTerms;
@property(readonly, nonatomic) NSSet *commonTerms;
- (id)init;

@end
