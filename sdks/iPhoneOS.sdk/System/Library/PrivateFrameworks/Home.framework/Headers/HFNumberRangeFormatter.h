//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@interface HFNumberRangeFormatter : NSFormatter
{
    NSFormatter *_numberFormatter;
}

@property(retain, nonatomic) NSFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
// - (void).cxx_destruct;
- (id)stringForNumberRange:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)initWithNumberFormatter:(id)arg1;

@end
