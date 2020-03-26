//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecordID, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDWrappingContext : NSObject
{
    CKRecordID *_recordID;
    NSString *_fieldName;
    NSData *_fileSignature;
    NSData *_referenceSignature;
}

@property(retain, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(retain, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
// - (void).cxx_destruct;
- (id)encryptedDataContextString;
- (id)assetContextString;
- (id)initWithRecordID:(id)arg1 fieldName:(id)arg2 fileSignature:(id)arg3 referenceSignature:(id)arg4;

@end
