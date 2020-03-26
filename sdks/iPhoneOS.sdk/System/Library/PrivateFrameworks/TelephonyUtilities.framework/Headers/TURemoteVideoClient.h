//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TURemoteVideoClient-Protocol.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface TURemoteVideoClient : NSObject <TURemoteVideoClient>
{
    long long _videoContextSlotIdentifier;
    CALayer *_videoLayer;
}

@property(retain, nonatomic) CALayer *videoLayer; // @synthesize videoLayer=_videoLayer;
@property(readonly, nonatomic) long long videoContextSlotIdentifier; // @synthesize videoContextSlotIdentifier=_videoContextSlotIdentifier;
// - (void).cxx_destruct;
- (void)cleanUpSubLayerForLayer:(id)arg1;
- (id)nameForSubLayer;
- (void)insertSubLayerInLayer:(id)arg1 videoSlotIdentifier:(long long)arg2;
- (void)setVideoLayer:(id)arg1 forMode:(int)arg2;
- (id)initWithVideoContextSlotIdentifier:(long long)arg1;
- (id)init;

@end
