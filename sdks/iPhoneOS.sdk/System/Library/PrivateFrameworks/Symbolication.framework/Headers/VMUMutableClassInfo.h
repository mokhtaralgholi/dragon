//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMUClassInfo.h>

@class NSString;

@interface VMUMutableClassInfo : VMUClassInfo
{
}

- (void)setVariantScanType:(unsigned int)arg1 withEvaluator:(id /* CDUnknownBlockType */)arg2;
- (void)addVariantRecursively:(id)arg1 forField:(id)arg2 withEvaluator:(id /* CDUnknownBlockType */)arg3;
- (void)addVariant:(id)arg1 forField:(id)arg2 withEvaluator:(id /* CDUnknownBlockType */)arg3;
- (void)setFields:(id)arg1;
- (void)replaceField:(id)arg1 withFields:(id)arg2;
- (void)addFields:(id)arg1;
- (void)mutateTypeFieldsRecursivelyWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)mutateTypeFieldsWithBlock:(id /* CDUnknownBlockType */)arg1;
@property(nonatomic) unsigned int defaultScanType; // @dynamic defaultScanType;
@property(retain, nonatomic) VMUClassInfo *superclassInfo; // @dynamic superclassInfo;
@property(copy, nonatomic) NSString *binaryPath; // @dynamic binaryPath;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;

@end
