//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentView.h>

@class CALayer, SXSolidBorderView;

@interface SXLineComponentView : SXComponentView
{
    CALayer *_strokeLayer;
    SXSolidBorderView *_borderView;
}

@property(retain, nonatomic) SXSolidBorderView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) CALayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
// - (void).cxx_destruct;
- (BOOL)userInteractable;
- (void)discardContents;
- (void)renderContents;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)loadComponent:(id)arg1;

@end
