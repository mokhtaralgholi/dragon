//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDKeyedCollection.h>

__attribute__((visibility("hidden")))
@interface EDContentFormatsCollection : EDKeyedCollection
{
    NSUInteger mNextContentFormatId;
}

- (NSUInteger)addOrEquivalentObject:(id)arg1;
- (NSUInteger)addObject:(id)arg1;
- (id)init;
- (BOOL)isOverwritingKeyOK;
- (void)addDefaultWithNSString:(id)arg1 formatId:(NSUInteger)arg2;
- (void)setupDefaults;

@end
