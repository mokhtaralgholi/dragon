//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVOutputContext, AVOutputContextCommunicationChannel, NSData;

@protocol AVOutputContextCommunicationChannelDelegate <NSObject>

@optional
- (void)outputContext:(AVOutputContext *)arg1 didCloseCommunicationChannel:(AVOutputContextCommunicationChannel *)arg2;
- (void)outputContext:(AVOutputContext *)arg1 didReceiveData:(NSData *)arg2 fromCommunicationChannel:(AVOutputContextCommunicationChannel *)arg3;
- (void)outputContextOutgoingCommunicationChannelDidBecomeAvailable:(AVOutputContext *)arg1;
@end
