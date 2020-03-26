//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

@interface ICMusicRestoreBagConfiguration : NSObject
{
    BOOL _shouldGZip;
    NSArray *_allowedKinds;
    NSArray *_allowedMatchStatus;
    NSURL *_restoreURL;
}

@property(readonly, nonatomic) BOOL shouldGZip; // @synthesize shouldGZip=_shouldGZip;
@property(readonly, copy, nonatomic) NSURL *restoreURL; // @synthesize restoreURL=_restoreURL;
@property(readonly, copy, nonatomic) NSArray *allowedMatchStatus; // @synthesize allowedMatchStatus=_allowedMatchStatus;
@property(readonly, copy, nonatomic) NSArray *allowedKinds; // @synthesize allowedKinds=_allowedKinds;
// - (void).cxx_destruct;
- (id)initWithServerConfiguration:(id)arg1;

@end
