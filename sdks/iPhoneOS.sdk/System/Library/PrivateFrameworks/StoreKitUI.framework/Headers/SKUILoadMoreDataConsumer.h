//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVURLDataConsumer.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface SKUILoadMoreDataConsumer : SSVURLDataConsumer
{
    NSSet *_unavailableItemIdentifiers;
}

@property(copy, nonatomic) NSSet *unavailableItemIdentifiers; // @synthesize unavailableItemIdentifiers=_unavailableItemIdentifiers;
// - (void).cxx_destruct;
- (id)_itemsWithDictionary:(id)arg1;
- (id)objectForData:(id)arg1 response:(id)arg2 error:(id )arg3;

@end
