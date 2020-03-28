//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;
@protocol MSPublisherDelegate;

@protocol MSPublisher <NSObject>
@property(nonatomic) int publishBatchSize;
@property(nonatomic) id <MSPublisherDelegate> delegate;
- (void)reenqueueQuarantinedAssetCollections;
- (void)publish;
- (void)stop;
- (void)abort;
- (void)submitAssetCollectionsForPublication:(NSArray *)arg1 skipAssetCollections:(NSArray *)arg2;
@end
