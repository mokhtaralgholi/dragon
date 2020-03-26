//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCAppLibrary, BRCItemID, BRCServerItem;

__attribute__((visibility("hidden")))
@interface BRCSharingPCSChainFolderOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    BRCServerItem *_serverItem;
    BRCAppLibrary *_appLibrary;
}

// - (void).cxx_destruct;
- (void)main;
- (void)_performPCSChainBatch;
- (id)createActivity;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithItem:(id)arg1;
@property(readonly, nonatomic) BRCItemID *rootItemID;

@end
