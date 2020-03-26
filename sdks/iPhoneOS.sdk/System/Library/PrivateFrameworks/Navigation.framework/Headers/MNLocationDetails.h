//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class GEOLatLng, GEOLocation, MNRouteCoordinate, NSData, NSString;

@interface MNLocationDetails : PBCodable <NSCopying>
{
    double _courseAccuracy;
    double _distanceFromRoute;
    double _horizontalAccuracy;
    double _roadMatchCourse;
    double _routeMatchCourse;
    long long _shieldType;
    long long _speedLimitShieldType;
    double _timestamp;
    NSUInteger _transitID;
    GEOLocation *_location;
    unsigned int _locationState;
    int _rampType;
    int _rawReferenceFrame;
    GEOLatLng *_roadCoordinate;
    unsigned int _roadLineType;
    NSString *_roadName;
    MNRouteCoordinate *_routeCoordinate;
    NSData *_routeIDData;
    NSString *_shieldText;
    unsigned int _speedLimit;
    unsigned int _stepIndex;
    BOOL _isGoodMatch;
    BOOL _isTunnelProjection;
    BOOL _speedLimitIsMPH;
    struct {
        unsigned int courseAccuracy:1;
        unsigned int distanceFromRoute:1;
        unsigned int horizontalAccuracy:1;
        unsigned int roadMatchCourse:1;
        unsigned int routeMatchCourse:1;
        unsigned int shieldType:1;
        unsigned int speedLimitShieldType:1;
        unsigned int timestamp:1;
        unsigned int transitID:1;
        unsigned int locationState:1;
        unsigned int rampType:1;
        unsigned int rawReferenceFrame:1;
        unsigned int roadLineType:1;
        unsigned int speedLimit:1;
        unsigned int stepIndex:1;
        unsigned int isGoodMatch:1;
        unsigned int isTunnelProjection:1;
        unsigned int speedLimitIsMPH:1;
    } _has;
}

+ (id)locationWithLocationDetails:(id)arg1 route:(id)arg2;
+ (id)locationWithLocationDetails:(id)arg1;
+ (id)locationDetailsWithLocation:(id)arg1;
@property(nonatomic) long long speedLimitShieldType; // @synthesize speedLimitShieldType=_speedLimitShieldType;
@property(nonatomic) BOOL isTunnelProjection; // @synthesize isTunnelProjection=_isTunnelProjection;
@property(nonatomic) NSUInteger transitID; // @synthesize transitID=_transitID;
@property(nonatomic) double distanceFromRoute; // @synthesize distanceFromRoute=_distanceFromRoute;
@property(nonatomic) double courseAccuracy; // @synthesize courseAccuracy=_courseAccuracy;
@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) BOOL isGoodMatch; // @synthesize isGoodMatch=_isGoodMatch;
@property(nonatomic) BOOL speedLimitIsMPH; // @synthesize speedLimitIsMPH=_speedLimitIsMPH;
@property(nonatomic) unsigned int speedLimit; // @synthesize speedLimit=_speedLimit;
@property(nonatomic) int rampType; // @synthesize rampType=_rampType;
@property(nonatomic) unsigned int roadLineType; // @synthesize roadLineType=_roadLineType;
@property(nonatomic) long long shieldType; // @synthesize shieldType=_shieldType;
@property(retain, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
@property(retain, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
@property(nonatomic) double roadMatchCourse; // @synthesize roadMatchCourse=_roadMatchCourse;
@property(nonatomic) double routeMatchCourse; // @synthesize routeMatchCourse=_routeMatchCourse;
@property(retain, nonatomic) GEOLatLng *roadCoordinate; // @synthesize roadCoordinate=_roadCoordinate;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) MNRouteCoordinate *routeCoordinate; // @synthesize routeCoordinate=_routeCoordinate;
@property(nonatomic) unsigned int locationState; // @synthesize locationState=_locationState;
@property(nonatomic) unsigned int stepIndex; // @synthesize stepIndex=_stepIndex;
@property(retain, nonatomic) NSData *routeIDData; // @synthesize routeIDData=_routeIDData;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
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
- (int)StringAsRawReferenceFrame:(id)arg1;
- (id)rawReferenceFrameAsString:(int)arg1;
@property(nonatomic) BOOL hasRawReferenceFrame;
@property(nonatomic) int rawReferenceFrame; // @synthesize rawReferenceFrame=_rawReferenceFrame;
@property(nonatomic) BOOL hasSpeedLimitShieldType;
@property(nonatomic) BOOL hasIsTunnelProjection;
@property(nonatomic) BOOL hasTransitID;
@property(nonatomic) BOOL hasDistanceFromRoute;
@property(nonatomic) BOOL hasCourseAccuracy;
@property(nonatomic) BOOL hasHorizontalAccuracy;
@property(nonatomic) BOOL hasIsGoodMatch;
@property(nonatomic) BOOL hasSpeedLimitIsMPH;
@property(nonatomic) BOOL hasSpeedLimit;
- (int)StringAsRampType:(id)arg1;
- (id)rampTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasRampType;
@property(nonatomic) BOOL hasRoadLineType;
@property(nonatomic) BOOL hasShieldType;
@property(readonly, nonatomic) BOOL hasShieldText;
@property(readonly, nonatomic) BOOL hasRoadName;
@property(nonatomic) BOOL hasRoadMatchCourse;
@property(nonatomic) BOOL hasRouteMatchCourse;
@property(readonly, nonatomic) BOOL hasRoadCoordinate;
@property(nonatomic) BOOL hasTimestamp;
@property(readonly, nonatomic) BOOL hasRouteCoordinate;
@property(nonatomic) BOOL hasLocationState;
@property(nonatomic) BOOL hasStepIndex;
@property(readonly, nonatomic) BOOL hasRouteIDData;
@property(readonly, nonatomic) BOOL hasLocation;

@end
