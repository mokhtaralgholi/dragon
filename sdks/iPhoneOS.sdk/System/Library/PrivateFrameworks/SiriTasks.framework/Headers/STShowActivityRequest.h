//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@interface STShowActivityRequest : AFSiriRequest
{
    long long _dataType;
    long long _view;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)createResponse;
- (long long)view;
- (long long)dataType;
- (id)_initWithDataType:(long long)arg1 view:(long long)arg2;

@end
