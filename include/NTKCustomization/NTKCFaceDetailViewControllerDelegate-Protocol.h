//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NTKCFaceDetailViewController, NTKFace;

@protocol NTKCFaceDetailViewControllerDelegate <NSObject>
- (void)libraryDetail:(NTKCFaceDetailViewController *)arg1 didSelectFace:(NTKFace *)arg2;
- (void)libraryDetail:(NTKCFaceDetailViewController *)arg1 didRemoveFace:(NTKFace *)arg2;
- (BOOL)libraryDetail:(NTKCFaceDetailViewController *)arg1 canRemoveFace:(NTKFace *)arg2;
@end
