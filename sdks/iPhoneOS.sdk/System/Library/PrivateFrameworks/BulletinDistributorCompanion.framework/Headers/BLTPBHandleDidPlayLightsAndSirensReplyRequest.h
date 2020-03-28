//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSString;

@interface BLTPBHandleDidPlayLightsAndSirensReplyRequest : PBRequest <NSCopying>
{
    double _date;
    NSString *_phoneSectionID;
    NSString *_publisherMatchID;
    NSString *_replyToken;
    BOOL _didPlayLightsAndSirens;
    struct {
        unsigned int date:1;
        unsigned int didPlayLightsAndSirens:1;
    } _has;
}

@property(retain, nonatomic) NSString *replyToken; // @synthesize replyToken=_replyToken;
@property(nonatomic) double date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *phoneSectionID; // @synthesize phoneSectionID=_phoneSectionID;
@property(retain, nonatomic) NSString *publisherMatchID; // @synthesize publisherMatchID=_publisherMatchID;
@property(nonatomic) BOOL didPlayLightsAndSirens; // @synthesize didPlayLightsAndSirens=_didPlayLightsAndSirens;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasReplyToken;
@property(nonatomic) BOOL hasDate;
@property(readonly, nonatomic) BOOL hasPhoneSectionID;
@property(readonly, nonatomic) BOOL hasPublisherMatchID;
@property(nonatomic) BOOL hasDidPlayLightsAndSirens;

@end
