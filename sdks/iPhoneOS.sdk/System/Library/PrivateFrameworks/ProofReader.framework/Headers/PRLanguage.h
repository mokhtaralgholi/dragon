//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PRLanguage : NSObject
{
    NSString *_identifier;
    NSString *_localization;
    NSString *_fallbackLocalization;
    NSUInteger _orthoIndex;
    unsigned int _encoding;
    unsigned char _languageCode;
    unsigned char _languageDialect;
    unsigned char _languageMode;
}

+ (id)languageWithIdentifier:(id)arg1;
+ (void)getCodesForLanguage:(id)arg1 languageCode:(char )arg2 languageDialect:(char )arg3 languageMode:(char )arg4 orthographyIndex:(NSUInteger )arg5 encoding:(unsigned int )arg6;
+ (unsigned int)encodingForOrthographyIndex:(NSUInteger)arg1;
+ (NSUInteger)orthographyIndexForForOtherLanguage:(id)arg1;
+ (NSUInteger)orthographyIndexForLanguageCode:(unsigned char)arg1;
+ (id)fallbackLocalizationForLanguage:(id)arg1;
+ (id)localizationForLanguage:(id)arg1;
+ (id)localizationsForLanguage:(id)arg1;
+ (id)dataBundle;
- (BOOL)isVietnamese;
- (BOOL)isUkrainian;
- (BOOL)isTurkish;
- (BOOL)isThai;
- (BOOL)isSwedish;
- (BOOL)isSpanish;
- (BOOL)isRussian;
- (BOOL)isPortuguese;
- (BOOL)isPolish;
- (BOOL)isNorwegian;
- (BOOL)isKorean;
- (BOOL)isItalian;
- (BOOL)isIndonesian;
- (BOOL)isHungarian;
- (BOOL)isHindi;
- (BOOL)isHebrew;
- (BOOL)isGreek;
- (BOOL)isGerman;
- (BOOL)isFrench;
- (BOOL)isFinnish;
- (BOOL)isEnglish;
- (BOOL)isDutch;
- (BOOL)isDanish;
- (BOOL)isCzech;
- (BOOL)isBulgarian;
- (BOOL)isArabic;
- (const char )accents;
- (const char )twoLetterWords;
- (const char )oneLetterWords;
- (unsigned char)languageMode;
- (unsigned char)languageDialect;
- (unsigned char)languageCode;
- (NSUInteger)orthographyIndex;
- (unsigned int)encoding;
- (id)fallbackLocalization;
- (id)localization;
- (id)identifier;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end
