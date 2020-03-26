//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotoLibrary/PLTilePlaceholderView-Protocol.h>

@class UIActivityIndicatorView, UILabel;

@interface PLPhotoTilePlaceholderView : UIView <PLTilePlaceholderView>
{
    UIActivityIndicatorView *_loadingIndicatorView;
    UILabel *_loadingLabel;
    UIView *_loadingContainerView;
    double _lastViewPhaseChangeDate;
    BOOL _indicatorIsVisible;
}

- (void)layoutSubviews;
- (void)setImageRect:(CGRect)arg1;
- (void)setToolbarVisible:(BOOL)arg1;
- (void)showLoadingIndicator;
- (void)showErrorIndicator;
- (void)showLoadingIndicatorWhenReady;
- (void)updateCloudDownloadProgress:(double)arg1;
- (void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end
