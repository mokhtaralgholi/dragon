//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;

@interface SiriCoreSQLiteTableDescription : NSObject <NSCopying>
{
    NSString *_name;
    NSArray *_columns;
    NSArray *_constraints;
}

@property(readonly, copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, copy, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithName:(id)arg1 columnsProvider:(id /* CDUnknownBlockType */)arg2 constraintsProvider:(id /* CDUnknownBlockType */)arg3;
- (id)initWithName:(id)arg1 columns:(id)arg2 constraints:(id)arg3;

@end
