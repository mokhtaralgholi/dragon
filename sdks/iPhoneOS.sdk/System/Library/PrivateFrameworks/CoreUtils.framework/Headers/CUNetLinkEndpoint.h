//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUNetLinkEndpoint : NSObject
{
    CDUnion_fab80606 _ipAddr;
    int _state;
    id /* CDUnknownBlockType */ _stateChangedHandler;
    NSUInteger _expireTime;
    NSUInteger _expiredTicks;
    BOOL _present;
    unsigned int _seqNum;
    unsigned int _stateChanges;
    BOOL _client;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ stateChangedHandler; // @synthesize stateChangedHandler=_stateChangedHandler;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic, getter=isClient) BOOL client; // @synthesize client=_client;
@property(nonatomic) CDUnion_fab80606 ipAddr; // @synthesize ipAddr=_ipAddr;
// - (void).cxx_destruct;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;

@end
