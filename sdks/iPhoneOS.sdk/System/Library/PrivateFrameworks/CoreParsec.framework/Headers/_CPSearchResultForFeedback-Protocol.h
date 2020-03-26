//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSString, _CPActionItemForFeedback, _CPPunchoutForFeedback, _CPStruct;

@protocol _CPSearchResultForFeedback <NSObject>
@property(readonly, nonatomic) NSUInteger whichApplicationbundleid;
@property(readonly, nonatomic) NSUInteger whichSectionbundleid;
@property(readonly, nonatomic) NSUInteger whichResultbundleidentifier;
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSData *entityData;
@property(nonatomic) int knownApplicationBundleIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier;
@property(nonatomic) int knownSectionBundleIdentifier;
@property(copy, nonatomic) NSString *sectionBundleIdentifier;
@property(nonatomic) int knownResultBundleId;
@property(copy, nonatomic) NSString *resultBundleId;
@property(nonatomic) NSUInteger hashedIdentifier;
@property(nonatomic) NSUInteger blockId;
@property(nonatomic) BOOL doNotFold;
@property(nonatomic) BOOL isFuzzyMatch;
@property(copy, nonatomic) NSString *userInput;
@property(copy, nonatomic) NSString *fbr;
@property(nonatomic) BOOL publiclyIndexable;
@property(nonatomic) BOOL isLocalApplicationResult;
@property(copy, nonatomic) NSString *completedQuery;
@property(copy, nonatomic) NSString *correctedQuery;
@property(copy, nonatomic) NSString *intendedQuery;
@property(nonatomic) NSUInteger queryId;
@property(nonatomic) BOOL isStaticCorrection;
@property(nonatomic) double rankingScore;
@property(copy, nonatomic) NSString *resultType;
@property(retain, nonatomic) _CPStruct *localFeatures;
@property(copy, nonatomic) NSString *srf;
@property(nonatomic) int type;
@property(retain, nonatomic) _CPPunchoutForFeedback *punchout;
@property(retain, nonatomic) _CPActionItemForFeedback *action;
@property(nonatomic) int topHit;
@property(copy, nonatomic) NSString *identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
