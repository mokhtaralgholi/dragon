//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDSearchableIndex, EFMutableInt64Set, EFSQLPropertyMapper;

@interface _MFSQLGenerationContext : NSObject
{
    EDSearchableIndex *searchableIndex;
    EFMutableInt64Set *mailboxIDs;
    unsigned int tables;
    unsigned int baseTable;
    EFSQLPropertyMapper *propertyMapper;
    BOOL usedBaseTable;
    BOOL haveLibraryIDCriterion;
    BOOL protectedDataAvailable;
}

// - (void).cxx_destruct;

@end
