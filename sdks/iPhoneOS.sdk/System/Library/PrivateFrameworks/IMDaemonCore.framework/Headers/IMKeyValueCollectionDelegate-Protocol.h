//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IMKeyValueCollection, NSDictionary;

@protocol IMKeyValueCollectionDelegate <NSObject>

@optional
- (void)keyValueCollection:(IMKeyValueCollection *)arg1 didUpdateValues:(NSDictionary *)arg2;
- (void)keyValueCollection:(IMKeyValueCollection *)arg1 willUpdateValues:(NSDictionary *)arg2;
@end
