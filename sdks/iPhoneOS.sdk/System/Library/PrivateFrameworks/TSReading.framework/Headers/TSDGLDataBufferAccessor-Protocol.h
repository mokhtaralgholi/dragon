//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TSDGLDataBufferAttribute;

@protocol TSDGLDataBufferAccessor <NSObject>
- (void)setGLPoint4D:(CDStruct_f2e236b6)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(NSUInteger)arg3;
- (CDStruct_f2e236b6)GLPoint4DForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(NSUInteger)arg2;
- (void)setGLPoint3D:(CDStruct_03942939)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(NSUInteger)arg3;
- (CDStruct_03942939)GLPoint3DForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(NSUInteger)arg2;
- (void)setGLPoint2D:(CDStruct_6e3f967a)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(NSUInteger)arg3;
- (CDStruct_6e3f967a)GLPoint2DForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(NSUInteger)arg2;
- (void)setCGFloat:(double)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(NSUInteger)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(TSDGLDataBufferAttribute *)arg2 atIndex:(NSUInteger)arg3;
- (float)GLfloatForAttribute:(TSDGLDataBufferAttribute *)arg1 atIndex:(NSUInteger)arg2;
@end
