//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>


@class NSMutableArray, NSString;

@interface ICIAMLogEventRequest : PBRequest <NSCopying>
{
    long long _dSID;
    NSString *_applicationMessageIdentifier;
    NSString *_deviceID;
    NSMutableArray *_eventParameters;
    CDStruct_f07dd4d9 _has;
}

+ (Class)eventParametersType;
@property(retain, nonatomic) NSMutableArray *eventParameters; // @synthesize eventParameters=_eventParameters;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) long long dSID; // @synthesize dSID=_dSID;
@property(retain, nonatomic) NSString *applicationMessageIdentifier; // @synthesize applicationMessageIdentifier=_applicationMessageIdentifier;
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
- (id)eventParametersAtIndex:(NSUInteger)arg1;
- (NSUInteger)eventParametersCount;
- (void)addEventParameters:(id)arg1;
- (void)clearEventParameters;
@property(readonly, nonatomic) BOOL hasDeviceID;
@property(nonatomic) BOOL hasDSID;
@property(readonly, nonatomic) BOOL hasApplicationMessageIdentifier;

@end
