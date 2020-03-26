//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSAttribute (RBProcessState)
- (BOOL)conflictsWithAttribute:(id)arg1;
- (BOOL)isValidForContext:(id)arg1 withError:(id )arg2;
- (id)effectiveAttributesWithContext:(id)arg1;
- (void)applyToAcquisitionContext:(id)arg1;
- (void)applyToSystemState:(id)arg1 attributePath:(NSUInteger)arg2 context:(id)arg3;
- (void)applyToAssertionIntransientState:(id)arg1 attributePath:(NSUInteger)arg2 context:(id)arg3;
- (void)applyToAssertionTransientState:(id)arg1 attributePath:(NSUInteger)arg2 context:(id)arg3;
- (void)applyToProcessState:(id)arg1 attributePath:(NSUInteger)arg2 context:(id)arg3;
@end
