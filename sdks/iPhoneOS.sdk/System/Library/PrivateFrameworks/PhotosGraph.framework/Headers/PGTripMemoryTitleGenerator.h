//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@interface PGTripMemoryTitleGenerator : PGTitleGenerator
{
    NSUInteger _type;
}

@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
- (id)_typeString;
- (BOOL)_triggerDefaultTitleGenerationIfNil;
- (id)_timeTitleForTripAndWeekend;
- (id)_timeTitleForWeekend;
- (id)_timeTitleForTrip;
- (id)_locationTitle;
- (void)_generateTitleAndSubtitleWithResult:(id /* CDUnknownBlockType */)arg1;
- (id)initWithHighlightNode:(id)arg1;
- (id)initWithMomentNodes:(id)arg1 type:(NSUInteger)arg2;

@end
