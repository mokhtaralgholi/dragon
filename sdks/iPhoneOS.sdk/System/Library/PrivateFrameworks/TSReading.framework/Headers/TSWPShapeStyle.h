//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDShapeStyle.h>

#import <TSReading/TSSPreset-Protocol.h>

@class NSString;

@interface TSWPShapeStyle : TSDShapeStyle <TSSPreset>
{
}

+ (id)defaultValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)propertiesAllowingNSNull;
+ (id)layoutProperties;
+ (id)properties;
+ (id)presetStyleDescriptor;
- (id)defaultParagraphStyle;
- (void)setDefaultParagraphStyle:(id)arg1;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(CGAffineTransform)arg3;
- (SEL)mapThemePropertyMapSelector;
@property(readonly, nonatomic) NSString *presetKind;

@end
