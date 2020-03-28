//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAMPanoramaCaptureRequest, CAMPanoramaPaintingStatus, CAMStillImageCaptureResponse, CAMStillImagePersistenceResponse, NSError;

@protocol CAMPanoramaCaptureRequestDelegate <NSObject>

@optional
- (void)panoramaRequestDidCompleteRemotePersistence:(CAMPanoramaCaptureRequest *)arg1 withResponse:(CAMStillImagePersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)panoramaRequestDidCompleteLocalPersistence:(CAMPanoramaCaptureRequest *)arg1 withResponse:(CAMStillImagePersistenceResponse *)arg2 error:(NSError *)arg3;
- (void)panoramaRequestDidCompleteCapture:(CAMPanoramaCaptureRequest *)arg1 withResponse:(CAMStillImageCaptureResponse *)arg2 error:(NSError *)arg3;
- (void)panoramaRequestDidStopCapturing:(CAMPanoramaCaptureRequest *)arg1 interrupted:(BOOL)arg2;
- (void)panoramaRequest:(CAMPanoramaCaptureRequest *)arg1 didGeneratePaintingStatus:(CAMPanoramaPaintingStatus *)arg2;
- (void)panoramaRequestDidStartCapturing:(CAMPanoramaCaptureRequest *)arg1;
@end
