//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNUICoreWhitelistedContactsControllerOptions : NSObject
{
    BOOL _shouldPrepopulateEmptyWhitelist;
    BOOL _shouldRequireConfirmationOfChanges;
}

+ (id)iosOptions;
+ (id)macOptions;
@property(readonly, nonatomic) BOOL shouldRequireConfirmationOfChanges; // @synthesize shouldRequireConfirmationOfChanges=_shouldRequireConfirmationOfChanges;
@property(readonly, nonatomic) BOOL shouldPrepopulateEmptyWhitelist; // @synthesize shouldPrepopulateEmptyWhitelist=_shouldPrepopulateEmptyWhitelist;
- (id)initWithShouldPrepopulateEmptyWhitelist:(BOOL)arg1 shouldRequireConfirmationOfChanges:(BOOL)arg2;
- (id)init;

@end
