//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProviderManager.h>

#import <RelevanceEngine/REMLModelManagerObserver-Protocol.h>
#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class REMLSentimentAnalyzer;

@interface REContentRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REMLModelManagerObserver>
{
    REMLSentimentAnalyzer *_sentimentAnalyzer;
}

+ (Class)_relevanceProviderClass;
+ (id)_features;
// - (void).cxx_destruct;
- (void)predictorDidUpdate:(id)arg1;
- (void)modelManagerDidUpdateModel:(id)arg1;
- (void)pause;
- (void)resume;
- (BOOL)_suppportsSentimentAnalysis;
- (BOOL)_suppportsPortarit;
- (id)_valuesForProvider:(id)arg1 context:(id)arg2 features:(id)arg3;

@end
