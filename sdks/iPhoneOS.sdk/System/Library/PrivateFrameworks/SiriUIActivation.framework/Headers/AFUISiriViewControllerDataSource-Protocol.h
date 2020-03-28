//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AFBulletin, AFUISiriViewController, NSArray, NSString;

@protocol AFUISiriViewControllerDataSource <NSObject>
- (NSArray *)contextAppInfosForSiriViewController:(AFUISiriViewController *)arg1;
- (NSUInteger)lockStateForSiriViewController:(AFUISiriViewController *)arg1;
- (AFBulletin *)siriViewController:(AFUISiriViewController *)arg1 bulletinWithIdentifier:(NSString *)arg2;
- (NSArray *)bulletinsForSiriViewController:(AFUISiriViewController *)arg1;

@optional
- (NSArray *)currentCarPlaySupportedOEMAppsForSiriViewController:(AFUISiriViewController *)arg1;
- (NSArray *)starkAppBundleIdentifierContextForSiriViewController:(AFUISiriViewController *)arg1;
@end
