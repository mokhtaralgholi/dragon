//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSEnumerator, NSString;

__attribute__((visibility("hidden")))
@interface SDPParser : NSObject
{
    NSArray *_lines;
    NSEnumerator *_lineEnumerator;
    NSDictionary *_fieldNameMap;
    NSString *_fieldName;
    NSString *_fieldValue;
    unsigned char _fieldType;
    BOOL _parsingDone;
}

@property(readonly, nonatomic) BOOL parsingDone; // @synthesize parsingDone=_parsingDone;
@property(readonly, nonatomic) unsigned char fieldType; // @synthesize fieldType=_fieldType;
@property(readonly, nonatomic) NSString *fieldValue; // @synthesize fieldValue=_fieldValue;
@property(readonly, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (BOOL)parseMediaLineHeader:(id)arg1 mediaType:(int )arg2 supportedPayloads:(id)arg3 rtpPort:(int )arg4;
- (BOOL)nextLine;
- (int)stringToMediaType:(id)arg1;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end
