//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol GEOPDPlaceCacheSchedulingDelegate
- (void)cancelCleanupBlockSchedule;
- (void)runCleanupBlock:(void (^)(void))arg1 inSecondsFromNow:(long long)arg2;
- (long long)currentTime;
@end
