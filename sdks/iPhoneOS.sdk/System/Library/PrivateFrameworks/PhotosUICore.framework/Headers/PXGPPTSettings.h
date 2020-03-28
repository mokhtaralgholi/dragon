//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXGPPTSettings : PXSettings
{
    BOOL _useAssetBadgeDecoration;
    long long _numberOfItems;
    long long _numberOfSections;
    long long _numberOfColumns;
    long long _selectionDecorationStlye;
}

+ (id)scrollingPresetNames;
+ (id)allPresetNames;
+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) long long selectionDecorationStlye; // @synthesize selectionDecorationStlye=_selectionDecorationStlye;
@property(nonatomic) BOOL useAssetBadgeDecoration; // @synthesize useAssetBadgeDecoration=_useAssetBadgeDecoration;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) long long numberOfSections; // @synthesize numberOfSections=_numberOfSections;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
- (id)createLayout;
- (void)setDefaultValuesWithPresetName:(id)arg1;
- (void)setDefaultValues;
- (id)parentSettings;

@end
