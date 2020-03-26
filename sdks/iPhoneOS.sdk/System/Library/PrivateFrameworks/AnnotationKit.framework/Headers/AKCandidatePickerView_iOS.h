//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIStackView, UIVisualEffectView;

@interface AKCandidatePickerView_iOS : UIView
{
    UIStackView *_buttonContainer;
    UIVisualEffectView *_visualEffectView;
    long long _blurStyle;
    NSArray *_itemTags;
    NSArray *_annotations;
    NSArray *_buttons;
    id _target;
    SEL _action;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) NSArray *annotations; // @synthesize annotations=_annotations;
@property(retain, nonatomic) NSArray *itemTags; // @synthesize itemTags=_itemTags;
@property(nonatomic) long long blurStyle; // @synthesize blurStyle=_blurStyle;
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) UIStackView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
// - (void).cxx_destruct;
- (void)_selectBackground:(id)arg1 animated:(BOOL)arg2;
- (void)_selectBackground:(id)arg1;
- (void)_createButtonsWithBlurStyle:(long long)arg1;
- (long long)tagForCandidateItemAtIndex:(NSUInteger)arg1;
- (void)setSelectedIndex:(NSUInteger)arg1;
- (void)setBarHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (CGSize)intrinsicContentSize;
- (id)initWithFrame:(CGRect)arg1 items:(id)arg2 annotations:(id)arg3 target:(id)arg4 action:(SEL)arg5 visualStyle:(long long)arg6;

@end
