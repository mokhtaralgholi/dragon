//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface IMFileTransferCenter : NSObject
{
    NSMutableDictionary *_guidToTransferMap;
    NSMutableDictionary *_guidToRemovedTransferMap;
    NSMutableDictionary *_accountIDToTransferGUIDsMap;
    NSMutableArray *_preauthorizedInfos;
    NSMutableArray *_preauthorizedGUIDs;
    NSMutableSet *_activeTransfers;
    NSMutableSet *_pendingTransfers;
    BOOL _disconnectionListenerSetUp;
    NSMutableDictionary *_fetchHighQualityVariantCompletionHandlers;
}

+ (Class)fileTransferClass;
+ (Class)transferCenterClass;
+ (void)setTransferCenterClass:(Class)arg1;
+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)preWarmConnection;
- (void)_daemonRestarted:(id)arg1;
- (void)_initiateHighQualityVariantDownloadWithDaemonForGUID:(id)arg1;
- (void)_fetchHighQualityVariantForTransferGUID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)fetchHighQualityVariantForTransfer:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)guidsForStoredAttachmentPayloadData:(id)arg1 messageGUID:(id)arg2;
- (void)setAuxVideoForTransfer:(id)arg1 value:(BOOL)arg2;
- (void)setAuxImageForTransfer:(id)arg1 value:(BOOL)arg2;
- (void)_handleFileTransferHighQualityDownloadFailed:(id)arg1;
- (void)_handleFileTransfer:(id)arg1 highQualityDownloadSucceededWithPath:(id)arg2;
- (void)_handleFileTransfer:(id)arg1 updatedWithCurrentBytes:(NSUInteger)arg2 totalBytes:(NSUInteger)arg3 averageTransferRate:(NSUInteger)arg4;
- (void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)_handleFileTransfers:(id)arg1 createdWithLocalPaths:(id)arg2;
- (void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2;
- (void)_handleAllFileTransfers:(id)arg1;
- (void)acceptFileTransferIfPreauthorzed:(id)arg1;
- (BOOL)wasFileTransferPreauthorized:(id)arg1;
- (void)preauthorizeFileTransferFromOtherPerson:(id)arg1 account:(id)arg2 filename:(id)arg3 saveToPath:(id)arg4;
- (BOOL)isFileTransfer:(id)arg1 preauthorizedWithDictionary:(id)arg2;
- (void)clearFinishedTransfers;
@property(readonly, nonatomic) NSArray *orderedTransfersGUIDs;
@property(readonly, nonatomic) __weak NSArray *orderedTransfers;
@property(readonly, nonatomic) NSArray *activeTransferGUIDs;
@property(readonly, nonatomic) __weak NSArray *activeTransfers;
@property(readonly, nonatomic) NSDictionary *transfers;
- (id)transfersForAccount:(id)arg1;
- (void)retargetTransfer:(id)arg1 toPath:(id)arg2;
- (void)deleteTransfer:(id)arg1;
- (void)removeTransfer:(id)arg1;
- (void)stopTransfer:(id)arg1;
- (void)acceptTransfer:(id)arg1;
- (void)acceptTransfer:(id)arg1 withPath:(id)arg2 autoRename:(BOOL)arg3 overwrite:(BOOL)arg4;
- (void)sendTransfer:(id)arg1;
- (id)transferForGUID:(id)arg1 includeRemoved:(BOOL)arg2;
- (id)transferForGUID:(id)arg1;
- (id)chatForTransfer:(id)arg1;
- (void)registerTransferWithDaemon:(id)arg1;
- (void)assignTransfer:(id)arg1 toHandle:(id)arg2;
- (void)assignTransfer:(id)arg1 toMessage:(id)arg2 account:(id)arg3;
- (void)_addSpotlightProperties:(id)arg1 sender:(id)arg2 recipients:(id)arg3 incoming:(BOOL)arg4;
- (BOOL)registerGUID:(id)arg1 forNewOutgoingTransferWithLocalURL:(id)arg2;
- (id)guidForNewOutgoingTransferWithLocalURL:(id)arg1;
- (BOOL)doesLocalURLRequireArchiving:(id)arg1 toHandle:(id)arg2;
- (void)_addTransfer:(id)arg1;
- (void)_addTransfer:(id)arg1 toAccount:(id)arg2;
- (void)_clearTransfers;
- (void)_removeAllActiveTransfers;
- (void)_removeActiveTransfer:(id)arg1;
- (void)_addActiveTransfer:(id)arg1;
@property(readonly, nonatomic) BOOL hasActiveFileTransfers;
- (void)acknowledgeAllPendingTransfers;
- (void)acknowledgePendingTransfer:(id)arg1;
- (void)_removePendingTransfer:(id)arg1;
- (void)_addPendingTransfer:(id)arg1;
@property(readonly, nonatomic) BOOL hasPendingFileTransfers;
- (void)dealloc;

@end
