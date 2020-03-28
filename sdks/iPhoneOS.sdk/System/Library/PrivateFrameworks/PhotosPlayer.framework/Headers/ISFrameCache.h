//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface ISFrameCache : NSObject
{
    CGImageSource _gifSource;
    NSUInteger _frameCount;
    NSUInteger _fullCachingCost;
    NSObject<OS_dispatch_queue> *_frameGenerationQueue;
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;
    NSUInteger _frameCacheSize;
    NSMutableDictionary *_frameCache;
    NSUInteger _lastRequestedIdx;
    NSMutableIndexSet *_cachedIndexes;
    struct {
        BOOL cacheSize;
        BOOL frameCache;
    } _isValid;
    long long _cacheStrategy;
}

+ (id)sharedFrameGenerationQueue;
// - (void).cxx_destruct;
- (CGImage )_createPredrawnImage:(CGImage )arg1;
- (void)_frameGenerationQueue_updateFrameCache;
- (void)_frameGenerationQueue_cacheFrameAtIndex:(NSUInteger)arg1;
- (void)dealloc;
- (void)_updateFrameCache;
- (void)_updateDesiredCacheSize;
- (void)_updateIfNeeded;
- (void)_invalidateCache;
- (void)_invalidateCacheSize;
@property(nonatomic) long long cacheStrategy; // @synthesize cacheStrategy=_cacheStrategy;
- (CGImage )_frameAtIndex:(NSUInteger)arg1 allowLazy:(BOOL)arg2;
- (CGImage )frameAtIndexIfReady:(NSUInteger)arg1;
- (CGImage )frameAtIndex:(NSUInteger)arg1;
- (id)initWithImageSource:(CGImageSource )arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(BOOL)arg3;
- (id)initWithImageSource:(CGImageSource )arg1 cachingStrategy:(long long)arg2;
- (id)initWithImageSource:(CGImageSource )arg1;

@end
