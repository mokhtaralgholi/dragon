//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface AWDHomeKitCameraStreamConfigure : PBCodable <NSCopying>
{
    int _audioCodec;
    int _cryptoSuite;
    unsigned int _framerate;
    int _resolution;
    int _sampleRate;
    struct {
        unsigned int audioCodec:1;
        unsigned int cryptoSuite:1;
        unsigned int framerate:1;
        unsigned int resolution:1;
        unsigned int sampleRate:1;
    } _has;
}

@property(nonatomic) unsigned int framerate; // @synthesize framerate=_framerate;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsCryptoSuite:(id)arg1;
- (id)cryptoSuiteAsString:(int)arg1;
@property(nonatomic) BOOL hasCryptoSuite;
@property(nonatomic) int cryptoSuite; // @synthesize cryptoSuite=_cryptoSuite;
- (int)StringAsSampleRate:(id)arg1;
- (id)sampleRateAsString:(int)arg1;
@property(nonatomic) BOOL hasSampleRate;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
- (int)StringAsAudioCodec:(id)arg1;
- (id)audioCodecAsString:(int)arg1;
@property(nonatomic) BOOL hasAudioCodec;
@property(nonatomic) int audioCodec; // @synthesize audioCodec=_audioCodec;
@property(nonatomic) BOOL hasFramerate;
- (int)StringAsResolution:(id)arg1;
- (id)resolutionAsString:(int)arg1;
@property(nonatomic) BOOL hasResolution;
@property(nonatomic) int resolution; // @synthesize resolution=_resolution;

@end
