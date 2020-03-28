//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSArray, NSDictionary, UIFont;
@protocol HFDynamicFormattingValue, NACancelable;

@interface HUDynamicFormattingLabel : UILabel
{
    id <HFDynamicFormattingValue> _dynamicFormattingValue;
    NSDictionary *_defaultAttributes;
    NSArray *_preferredFonts;
    id <NACancelable> _formattedValueObservationCancellationToken;
    UIFont *_preferredFontForCurrentSize;
}

@property(retain, nonatomic) UIFont *preferredFontForCurrentSize; // @synthesize preferredFontForCurrentSize=_preferredFontForCurrentSize;
@property(retain, nonatomic) id <NACancelable> formattedValueObservationCancellationToken; // @synthesize formattedValueObservationCancellationToken=_formattedValueObservationCancellationToken;
@property(copy, nonatomic) NSArray *preferredFonts; // @synthesize preferredFonts=_preferredFonts;
@property(copy, nonatomic) NSDictionary *defaultAttributes; // @synthesize defaultAttributes=_defaultAttributes;
@property(retain, nonatomic) id <HFDynamicFormattingValue> dynamicFormattingValue; // @synthesize dynamicFormattingValue=_dynamicFormattingValue;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updatePreferredFontIncludingValue:(BOOL)arg1;
- (void)_updateFormattedValueIncludingFont:(BOOL)arg1;
- (id)_formattedValueWithFont:(id)arg1;
- (void)_updateFormattedValueObservation;
- (void)didMoveToWindow;

@end
