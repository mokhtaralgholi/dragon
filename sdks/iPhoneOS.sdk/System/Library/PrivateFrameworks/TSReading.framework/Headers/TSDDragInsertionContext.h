//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDInsertionContext.h>

@interface TSDDragInsertionContext : TSDInsertionContext
{
    CGPoint mPreferredCenter;
    BOOL mPreferredCenterRequired;
    BOOL mShouldEndEditing;
    BOOL mFromDragToInsertController;
    BOOL mInsertWillBeDiscarded;
}

- (BOOL)insertWillBeDiscarded;
- (BOOL)fromDragToInsertController;
- (BOOL)shouldEndEditing;
- (CGPoint)preferredCenter;
- (BOOL)isPreferredCenterRequired;
- (BOOL)isInteractive;
- (BOOL)insertFromDrag;
- (BOOL)insertFloating;
- (BOOL)hasPreferredCenter;
- (id)init;
- (id)initWithPreferredCenter:(CGPoint)arg1 required:(BOOL)arg2 shouldEndEditing:(BOOL)arg3 fromDragToInsertController:(BOOL)arg4 insertWillBeDiscarded:(BOOL)arg5;

@end
