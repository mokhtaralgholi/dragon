//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsShortcutSuggestor-Protocol.h>

@class NSError;

@interface MapsSuggestionsFakeShortcutSuggestor : NSObject <MapsSuggestionsShortcutSuggestor>
{
    struct ReadWriteQueue _rwQueue;
    NSArray _configuredResults;
    NSError *_configuredError;
    NSUInteger _calledPropose;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)reset;
- (NSUInteger)calledRequestSuggest;
- (void)configureError:(id)arg1;
- (void)configureResults:(NSArray )arg1;
- (BOOL)suggestShortcutsOfType:(long long)arg1 handler:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end
