//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAnalyticsEvent.h>

@class NSDate, NSString, NSUUID;

@interface HFAnalyticsCameraClipPlaybackSessionDidBeginEvent : HFAnalyticsEvent
{
    BOOL _recordingIsComplete;
    NSUUID *_clipID;
    NSUUID *_cameraID;
    NSUUID *_playbackSessionID;
    NSUUID *_previousPlaybackSessionID;
    NSDate *_clipStartDate;
    NSString *_processName;
}

+ (void)setSharedPlaybackSessionID:(id)arg1;
+ (id)sharedPlaybackSessionID;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) BOOL recordingIsComplete; // @synthesize recordingIsComplete=_recordingIsComplete;
@property(retain, nonatomic) NSDate *clipStartDate; // @synthesize clipStartDate=_clipStartDate;
@property(retain, nonatomic) NSUUID *previousPlaybackSessionID; // @synthesize previousPlaybackSessionID=_previousPlaybackSessionID;
@property(retain, nonatomic) NSUUID *playbackSessionID; // @synthesize playbackSessionID=_playbackSessionID;
@property(retain, nonatomic) NSUUID *cameraID; // @synthesize cameraID=_cameraID;
@property(retain, nonatomic) NSUUID *clipID; // @synthesize clipID=_clipID;
// - (void).cxx_destruct;
- (id)payload;
- (id)initWithData:(id)arg1;

@end
