//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsNaturalLanguage/IPFeatureScanner.h>

@class NSArray, NSMutableArray;

@interface IPFeatureTextMessageScanner : IPFeatureScanner
{
    BOOL _followProposal;
    NSArray *_contextMessageUnits;
    NSMutableArray *_detectedEventsInContext;
    NSMutableArray *_dataFeaturesExtractedInContextAndMain;
}

@property(retain, nonatomic) NSMutableArray *dataFeaturesExtractedInContextAndMain; // @synthesize dataFeaturesExtractedInContextAndMain=_dataFeaturesExtractedInContextAndMain;
@property BOOL followProposal; // @synthesize followProposal=_followProposal;
@property(retain) NSMutableArray *detectedEventsInContext; // @synthesize detectedEventsInContext=_detectedEventsInContext;
@property(retain) NSArray *contextMessageUnits; // @synthesize contextMessageUnits=_contextMessageUnits;
// - (void).cxx_destruct;
- (id)commonComponentsForConfidence;
- (id)eventSpecificComponentsForConfidence:(id)arg1;
- (double)experimentalConfidenceForEvent:(id)arg1 experimentalBaseConfidence:(double)arg2;
- (void)experimentalConfidenceForEvents:(id)arg1;
- (double)confidenceForEvent:(id)arg1 baseConfidence:(double)arg2;
- (void)confidenceForEvents:(id)arg1;
- (void)resetScanState;
- (NSUInteger)mainSentencePolarityFromMessageUnit:(id)arg1 index:(NSUInteger)arg2;
- (id)keywordFeaturesForMessageUnit:(id)arg1;
- (id)sentenceFeaturesForMessageUnit:(id)arg1;
- (id)dataDetectorsFeaturesForMessageUnit:(id)arg1 context:(id)arg2;
- (id)processScanOfMainMessageUnit:(id)arg1 contextMessageUnits:(id)arg2;
- (NSUInteger)mainSentencePolarityFrom:(id)arg1;
- (void)doSynchronousScanWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)scanEventsInMessageUnits:(id)arg1 contextMessageUnits:(id)arg2 synchronously:(BOOL)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (void)scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;

@end
