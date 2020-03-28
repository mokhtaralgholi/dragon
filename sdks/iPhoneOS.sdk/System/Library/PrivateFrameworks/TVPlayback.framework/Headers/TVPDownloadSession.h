//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVPlayback/AVAssetDownloadDelegate-Protocol.h>

@class NSMutableDictionary;
@protocol TVPDownloadSessionDelegate;

@interface TVPDownloadSession : NSObject <AVAssetDownloadDelegate>
{
    id <TVPDownloadSessionDelegate> _delegate;
    NSMutableDictionary *_taskIDsToDownloads;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *taskIDsToDownloads; // @synthesize taskIDsToDownloads=_taskIDsToDownloads;
@property(nonatomic) __weak id <TVPDownloadSessionDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_5c5366e1)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_5c5366e1)arg5 forMediaSelection:(id)arg6;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didCompleteForMediaSelection:(id)arg3;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;
- (void)unregisterDownloadTaskForDownload:(id)arg1;
- (void)registerDownloadTask:(id)arg1 forDownload:(id)arg2;
- (id)aggregateAssetDownloadTaskWithURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5;
- (id)downloadForMediaItem:(id)arg1;
- (void)initializeWithDownloadingMediaItems:(id)arg1;
- (id)init;

@end
