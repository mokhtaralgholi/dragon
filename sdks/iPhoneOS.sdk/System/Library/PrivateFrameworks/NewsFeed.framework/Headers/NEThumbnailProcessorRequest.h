//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFeed/TSProcessedImageRequestType-Protocol.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface NEThumbnailProcessorRequest : NSObject <TSProcessedImageRequestType>
{
    MISSING_TYPE *assetHandles;
    MISSING_TYPE *thumbnailFrame;
    MISSING_TYPE *focalFrame;
    MISSING_TYPE *scale;
    MISSING_TYPE *roundedCorners;
    MISSING_TYPE *cornerRadius;
}

// - (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *cacheIdentifier;
- (id)initWithThumbnailAssetHandle:(id)arg1 thumbnailFrame:(CGRect)arg2 focalFrame:(CGRect)arg3 scale:(double)arg4 byRoundingCorners:(NSUInteger)arg5 cornerRadius:(double)arg6;
@property(nonatomic, readonly) NSDictionary *assetHandles;

@end
