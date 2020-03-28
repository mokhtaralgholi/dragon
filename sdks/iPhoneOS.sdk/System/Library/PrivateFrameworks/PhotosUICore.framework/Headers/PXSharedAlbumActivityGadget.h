//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGadget-Protocol.h>
#import <PhotosUICore/PXOneUpPresentationDelegate-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>

@class NSArray, NSAttributedString, NSSet, PXAssetCollageView, PXAssetReference, PXFeedAssetsSectionInfo, PXGadgetSpec, PXPhotoKitAssetsDataSourceManager, PXPhotoKitUIMediaProvider, PXSharedAlbumHeaderView, UILabel, _PXSharedAlbumActivityGadgetContentView;
@protocol PXGadgetDelegate;

@interface PXSharedAlbumActivityGadget : NSObject <PXOneUpPresentationDelegate, PXSettingsKeyObserver, PXGadget>
{
    BOOL _wasAskedToLoadContentData;
    PXGadgetSpec *_gadgetSpec;
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    PXFeedAssetsSectionInfo *_assetsSectionInfo;
    _PXSharedAlbumActivityGadgetContentView *_contentView;
    PXSharedAlbumHeaderView *_headerView;
    PXAssetCollageView *_collageView;
    UILabel *_captionLabel;
    PXPhotoKitAssetsDataSourceManager *_assetsDataSourceManager;
    PXPhotoKitUIMediaProvider *_mediaProvider;
    PXAssetReference *_currentAssetReference;
    NSArray *_assets;
    NSAttributedString *_caption;
    NSSet *_oneUpHiddenAssetReferences;
    CGRect _visibleContentRect;
}

+ (void)preloadResources;
@property(copy, nonatomic) NSSet *oneUpHiddenAssetReferences; // @synthesize oneUpHiddenAssetReferences=_oneUpHiddenAssetReferences;
@property(copy, nonatomic) NSAttributedString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) PXAssetReference *currentAssetReference; // @synthesize currentAssetReference=_currentAssetReference;
@property(retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager; // @synthesize assetsDataSourceManager=_assetsDataSourceManager;
@property(nonatomic) BOOL wasAskedToLoadContentData; // @synthesize wasAskedToLoadContentData=_wasAskedToLoadContentData;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) PXAssetCollageView *collageView; // @synthesize collageView=_collageView;
@property(retain, nonatomic) PXSharedAlbumHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) _PXSharedAlbumActivityGadgetContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) CGRect visibleContentRect; // @synthesize visibleContentRect=_visibleContentRect;
@property(retain, nonatomic) PXFeedAssetsSectionInfo *assetsSectionInfo; // @synthesize assetsSectionInfo=_assetsSectionInfo;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
// - (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_handleCollageViewTap:(id)arg1;
- (void)_handleActionTap:(id)arg1;
- (CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2;
- (void)_loadCaption;
- (void)_loadAssets;
- (BOOL)_isAccessibilityContentSize;
- (NSUInteger)_numberOfLinesForCaption;
- (void)_updateCollageView;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_layoutContentView;
@property(readonly, nonatomic) BOOL isContentViewLoaded;
- (void)_loadContentFromSectionInfo;
- (void)_updateCollageViewHiddenAssets;
- (void)_updateCollageViewVideoEnabled;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (id)uniqueGadgetIdentifier;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(readonly, nonatomic) BOOL hasContentToDisplay;
@property(readonly, nonatomic) NSUInteger gadgetType;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)dealloc;
- (id)init;

@end
