//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFNaming-Protocol.h>

@class NSDate, NSNumber, NSString, WFFileType;
@protocol WFRemoteFile;

@protocol WFRemoteFile <WFNaming, NSObject>
- (BOOL)wfIsEqualToFile:(id <WFRemoteFile>)arg1;
- (WFFileType *)wfFileType;
- (NSDate *)wfLastModifiedDate;
- (NSNumber *)wfFileSize;
- (NSString *)wfPath;
- (BOOL)wfIsDirectory;
@end
