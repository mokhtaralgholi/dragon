//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NTKCGalleryCell, NTKFace, UIView;

@protocol NTKCGalleryCellDelegate <NSObject>
- (void)galleryCell:(NTKCGalleryCell *)arg1 didSelectFace:(NTKFace *)arg2 finishedSelectionHandler:(void (^)(void))arg3;
- (UIView *)galleryCell:(NTKCGalleryCell *)arg1 viewForFace:(NTKFace *)arg2 atIndex:(long long)arg3;
@end
