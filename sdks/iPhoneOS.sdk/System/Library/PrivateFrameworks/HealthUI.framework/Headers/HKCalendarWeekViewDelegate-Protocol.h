//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HKCalendarDayCell, HKCalendarWeekView;

@protocol HKCalendarWeekViewDelegate
- (void)week:(HKCalendarWeekView *)arg1 cellSelected:(HKCalendarDayCell *)arg2;

@optional
- (void)week:(HKCalendarWeekView *)arg1 pressedOnDay:(long long)arg2 down:(BOOL)arg3;
@end
