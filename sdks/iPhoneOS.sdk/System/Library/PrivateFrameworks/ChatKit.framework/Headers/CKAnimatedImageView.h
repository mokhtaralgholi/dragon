//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import <ChatKit/CKAnimationTimerObserver-Protocol.h>

@class CKAnimatedImage, NSArray;

@interface CKAnimatedImageView : UIImageView <CKAnimationTimerObserver>
{
    BOOL _automaticallyObserveWindowForAnimationTimer;
    CKAnimatedImage *_animatedImage;
    NSArray *_frames;
}

@property(copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(nonatomic) BOOL automaticallyObserveWindowForAnimationTimer; // @synthesize automaticallyObserveWindowForAnimationTimer=_automaticallyObserveWindowForAnimationTimer;
@property(retain, nonatomic) CKAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
// - (void).cxx_destruct;
- (void)animationTimerFired:(NSUInteger)arg1;
- (void)updateAnimationTimerObserving;
- (void)didMoveToWindow;
- (void)dealloc;

@end
