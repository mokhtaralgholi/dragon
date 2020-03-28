//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSTStrokeWidthCache : NSObject
{
    struct vector<TSTStrokeWidthCacheEntry, std::__1::allocator<TSTStrokeWidthCacheEntry>> _indexToCacheEntriesMap;
    struct _opaque_pthread_rwlock_t _rwlock;
}

@property(nonatomic) struct _opaque_pthread_rwlock_t rwlock; // @synthesize rwlock=_rwlock;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)unlock;
- (void)lockForWriting;
- (void)updateCacheForGridIndex:(unsigned int)arg1 withMergedStrokes:(id)arg2;
- (double)strokeWidthForGridIndex:(unsigned int)arg1 inRange:(struct TSTSimpleRange)arg2;
- (void)setCount:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end
