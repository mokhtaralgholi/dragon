//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FlightUtilities/FUFlightFactoryPrivateProtocol-Protocol.h>

@class NSArray, NSData, NSDate, NSString;

@protocol FUFlightFactoryInternalProtocol <FUFlightFactoryPrivateProtocol>
+ (void)loadFlightDataWithFlightNumber:(NSUInteger)arg1 airlineCode:(NSString *)arg2 date:(NSDate *)arg3 dateType:(long long)arg4 completionHandler:(void (^)(NSData *, NSError *))arg5;
- (NSArray *)parseFlightData:(NSData *)arg1 withError:(id )arg2;
@end
