//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSNumber, PSSpecifier, UIViewController;
@protocol AAUISpecifierProvider;

@protocol AAUISpecifierProviderDelegate <NSObject>
- (void)reloadSpecifiersForProvider:(id <AAUISpecifierProvider>)arg1 oldSpecifiers:(NSArray *)arg2 animated:(BOOL)arg3;
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 didFinishLoadingSpecifier:(PSSpecifier *)arg2;
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 willBeginLoadingSpecifier:(PSSpecifier *)arg2;
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 showViewController:(UIViewController *)arg2;

@optional
- (void)specifierProvider:(id <AAUISpecifierProvider>)arg1 dataclassSwitchStateDidChange:(NSNumber *)arg2 withSpecifier:(PSSpecifier *)arg3;
@end
