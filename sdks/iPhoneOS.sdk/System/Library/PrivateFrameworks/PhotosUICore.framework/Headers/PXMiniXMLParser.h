//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSScanner;

@interface PXMiniXMLParser : NSObject
{
    id /* CDUnknownBlockType */ _parsedCharactersBlock;
    id /* CDUnknownBlockType */ _parsedTagBlock;
    id /* CDUnknownBlockType */ _parsedEntityBlock;
    id /* CDUnknownBlockType */ _parsedErrorBlock;
    NSScanner *__scanner;
    NSCharacterSet *__syntaxMarkerCharactersSet;
}

@property(readonly, nonatomic) NSCharacterSet *_syntaxMarkerCharactersSet; // @synthesize _syntaxMarkerCharactersSet=__syntaxMarkerCharactersSet;
@property(readonly, nonatomic) NSScanner *_scanner; // @synthesize _scanner=__scanner;
@property(copy, nonatomic) id /* CDUnknownBlockType */ parsedErrorBlock; // @synthesize parsedErrorBlock=_parsedErrorBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ parsedEntityBlock; // @synthesize parsedEntityBlock=_parsedEntityBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ parsedTagBlock; // @synthesize parsedTagBlock=_parsedTagBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ parsedCharactersBlock; // @synthesize parsedCharactersBlock=_parsedCharactersBlock;
// - (void).cxx_destruct;
- (BOOL)_tryScanningUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)_parseEntity;
- (BOOL)_parseTag;
- (BOOL)_parseCharacters;
- (BOOL)_isAtEnd;
- (void)parse;
- (id)initWithString:(id)arg1;
- (id)init;

@end
