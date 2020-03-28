//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOTransitPlaceCard, NSString, PBDataReader;

@interface GEOPlaceActionDetails : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_actionUrl;
    NSUInteger _animationID;
    NSUInteger _businessID;
    NSString *_destinationApp;
    NSString *_photoId;
    long long _placeID;
    NSString *_richProviderId;
    double _searchResponseRelativeTimestamp;
    NSUInteger _targetID;
    GEOTransitPlaceCard *_transitPlaceCard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    int _localSearchProviderID;
    int _resultIndex;
    struct {
        unsigned int has_animationID:1;
        unsigned int has_businessID:1;
        unsigned int has_placeID:1;
        unsigned int has_searchResponseRelativeTimestamp:1;
        unsigned int has_targetID:1;
        unsigned int has_localSearchProviderID:1;
        unsigned int has_resultIndex:1;
        unsigned int read_actionUrl:1;
        unsigned int read_destinationApp:1;
        unsigned int read_photoId:1;
        unsigned int read_richProviderId:1;
        unsigned int read_transitPlaceCard:1;
        unsigned int wrote_actionUrl:1;
        unsigned int wrote_animationID:1;
        unsigned int wrote_businessID:1;
        unsigned int wrote_destinationApp:1;
        unsigned int wrote_photoId:1;
        unsigned int wrote_placeID:1;
        unsigned int wrote_richProviderId:1;
        unsigned int wrote_searchResponseRelativeTimestamp:1;
        unsigned int wrote_targetID:1;
        unsigned int wrote_transitPlaceCard:1;
        unsigned int wrote_localSearchProviderID:1;
        unsigned int wrote_resultIndex:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (id)actionDetailsWithDetails:(id)arg1 timestamp:(double)arg2;
+ (id)actionDetailsWithMapItem:(id)arg1 childPlace:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 targetID:(NSUInteger)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 transitIncident:(id)arg9;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(NSUInteger)arg4 transitCardCategory:(int)arg5 transitSystem:(id)arg6 transitDepartureSequence:(id)arg7 transitIncident:(id)arg8;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3 targetID:(NSUInteger)arg4;
+ (id)actionDetailsWithChildPlace:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
+ (id)actionDetailsWithMapItem:(id)arg1 timestamp:(double)arg2 resultIndex:(int)arg3;
+ (id)actionDetailsWithTargetID:(NSUInteger)arg1;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *destinationApp;
@property(readonly, nonatomic) BOOL hasDestinationApp;
- (void)_readDestinationApp;
@property(retain, nonatomic) NSString *richProviderId;
@property(readonly, nonatomic) BOOL hasRichProviderId;
- (void)_readRichProviderId;
@property(retain, nonatomic) GEOTransitPlaceCard *transitPlaceCard;
@property(readonly, nonatomic) BOOL hasTransitPlaceCard;
- (void)_readTransitPlaceCard;
@property(retain, nonatomic) NSString *actionUrl;
@property(readonly, nonatomic) BOOL hasActionUrl;
- (void)_readActionUrl;
@property(retain, nonatomic) NSString *photoId;
@property(readonly, nonatomic) BOOL hasPhotoId;
- (void)_readPhotoId;
@property(nonatomic) BOOL hasTargetID;
@property(nonatomic) NSUInteger targetID;
@property(nonatomic) BOOL hasAnimationID;
@property(nonatomic) NSUInteger animationID;
@property(nonatomic) BOOL hasResultIndex;
@property(nonatomic) int resultIndex;
@property(nonatomic) BOOL hasSearchResponseRelativeTimestamp;
@property(nonatomic) double searchResponseRelativeTimestamp;
@property(nonatomic) BOOL hasLocalSearchProviderID;
@property(nonatomic) int localSearchProviderID;
@property(nonatomic) BOOL hasPlaceID;
@property(nonatomic) long long placeID;
@property(nonatomic) BOOL hasBusinessID;
@property(nonatomic) NSUInteger businessID;
- (id)initWithData:(id)arg1;
- (id)init;
- (id)initWithMapItem:(id)arg1 childPlace:(id)arg2 relativeTimestamp:(double)arg3 resultIndex:(int)arg4 targetID:(NSUInteger)arg5 transitCardCategory:(int)arg6 transitSystem:(id)arg7 transitDepartureSequence:(id)arg8 transitIncident:(id)arg9;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3 targetID:(NSUInteger)arg4;
- (id)initWithMapItem:(id)arg1 relativeTimestamp:(double)arg2 resultIndex:(int)arg3;

@end
