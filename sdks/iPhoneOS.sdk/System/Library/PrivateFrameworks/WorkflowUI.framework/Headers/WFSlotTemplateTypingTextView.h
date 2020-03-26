//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <WorkflowUI/WFSlotTemplateTextEntry-Protocol.h>

@class UIFont, UIView;

@interface WFSlotTemplateTypingTextView : UITextView <WFSlotTemplateTextEntry>
{
    BOOL _clearsZeroWhenTyping;
    UIView *_inputHintView;
    UIFont *_emojiOverrideFont;
}

@property(retain, nonatomic) UIFont *emojiOverrideFont; // @synthesize emojiOverrideFont=_emojiOverrideFont;
@property(retain, nonatomic) UIView *inputHintView; // @synthesize inputHintView=_inputHintView;
@property(nonatomic) BOOL clearsZeroWhenTyping; // @synthesize clearsZeroWhenTyping=_clearsZeroWhenTyping;
// - (void).cxx_destruct;
- (CGRect)accessibilityFrame;
- (void)wf_applyEmojiOverrideFont;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)insertText:(id)arg1;
- (void)deleteBackward;

@end
