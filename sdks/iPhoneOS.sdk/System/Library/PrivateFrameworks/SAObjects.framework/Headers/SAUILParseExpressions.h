//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SARemoteDevice;

@interface SAUILParseExpressions : SABaseClientBoundCommand
{
}

+ (id)parseExpressionsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)parseExpressions;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SARemoteDevice *targetDevice;
@property(copy, nonatomic) NSArray *expressions;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
