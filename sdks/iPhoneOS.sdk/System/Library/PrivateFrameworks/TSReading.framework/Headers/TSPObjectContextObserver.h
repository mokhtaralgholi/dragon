//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSPObjectContextObserver : NSObject
{
    id _target;
    SEL _action;
}

@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
// - (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)init;

@end
