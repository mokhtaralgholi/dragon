//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSProgress, NSURL, NSUUID;

@protocol HDStaticSyncServerInterface <NSObject>
- (NSProgress *)remote_runStaticSyncImportWithOptions:(NSUInteger)arg1 storeIdentifier:(NSUUID *)arg2 URL:(NSURL *)arg3 completion:(void (^)(BOOL, NSError *))arg4;
- (NSProgress *)remote_runStaticSyncExportWithOptions:(NSUInteger)arg1 storeIdentifier:(NSUUID *)arg2 URL:(NSURL *)arg3 batchSize:(NSUInteger)arg4 completion:(void (^)(BOOL, NSError *))arg5;
@end
