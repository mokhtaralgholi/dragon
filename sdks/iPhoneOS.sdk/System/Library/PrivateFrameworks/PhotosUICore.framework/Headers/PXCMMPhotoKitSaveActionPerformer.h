//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMActionPerformer.h>

#import <PhotosUICore/PXCMMPhotoKitActionPerformer-Protocol.h>

@interface PXCMMPhotoKitSaveActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>
{
}

+ (id)sharedSavingWorkerQueue;
- (void)_completeSavingForAssets:(id)arg1 count:(long long)arg2;
- (void)performUserInteractionTask;
- (BOOL)isCancellable;
- (id)createActionProgress;

@end
