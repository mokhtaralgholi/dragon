//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDFlowControlManager : NSObject
{
    NSUInteger _defaultBudget;
    double _defaultRegeneration;
    double _maximumThrottleTime;
    NSMutableDictionary *_operationFlowControls;
}

@property(retain, nonatomic) NSMutableDictionary *operationFlowControls; // @synthesize operationFlowControls=_operationFlowControls;
@property double maximumThrottleTime; // @synthesize maximumThrottleTime=_maximumThrottleTime;
// - (void).cxx_destruct;
- (double)currentRegeneration:(id)arg1;
- (NSUInteger)currentBudgetCap:(id)arg1;
- (double)currentBudget:(id)arg1;
@property(nonatomic) double defaultRegeneration;
@property(nonatomic) NSUInteger defaultBudget;
- (void)updateFlowControlForOperation:(id)arg1 reportableError:(id)arg2;
- (void)updateFlowControl:(id)arg1 withRetryAfter:(NSUInteger)arg2 reportableError:(id)arg3;
- (void)updateFlowControl:(id)arg1 withCost:(NSUInteger)arg2 reportableError:(id)arg3;
- (id)_flowControlForOperation:(id)arg1;
- (id)_flowControlForOperation:(id)arg1 createIfNecessary:(BOOL)arg2;
- (BOOL)checkFlowControlIsLimited:(id)arg1 outReportableError:(id )arg2;
- (double)secondsUntilFlowControlNotLimited:(id)arg1;
- (id)CKStatusReportArray;
- (BOOL)hasStatusToReport;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithDefaultBudget:(NSUInteger)arg1 maximumThrottleTime:(double)arg2 andDefaultRegeneration:(double)arg3;

@end
