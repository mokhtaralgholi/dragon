//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface QLAsynchronousOperation : NSOperation
{
    BOOL _finished;
    BOOL _executing;
}

@property(nonatomic, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
- (void)finish;
- (BOOL)isConcurrent;
- (void)start;

@end
