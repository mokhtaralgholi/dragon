//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSDetailController.h>

@class MCUIFieldCollection, NSString, UIAlertView;
@protocol MCQuestionsControllerDelegate;

__attribute__((visibility("hidden")))
@interface MCQuestionsController : PSDetailController
{
    MCUIFieldCollection *_fieldCollection;
    NSString *_previousResponseValue;
    BOOL _waitingForPasscodePreflight;
    id <MCQuestionsControllerDelegate> _delegate;
    int _outDirection;
    UIAlertView *_activeAlert;
    BOOL _showingKeyboard;
}

@property(nonatomic) int outDirection; // @synthesize outDirection=_outDirection;
@property(nonatomic) __weak id <MCQuestionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)_cancelActiveAlert:(BOOL)arg1;
- (void)_showErrorAlertWithError:(id)arg1;
- (void)updateWithUserInput:(id)arg1;
- (void)stopWaitingForMoreInput;
- (void)waitForMoreInput;
- (void)_cancelPaylod;
- (void)_skipPayload;
- (void)_retryPayload;
- (void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
- (void)_didFinishPreflightWithError:(id)arg1;
- (void)_didFinishPasscodePreflightWithError:(id)arg1;
- (void)_preflightCurrentPayload;
- (void)_continueOrFinish;
- (void)_finishInput;
- (void)_retryCurrentPasswordFieldWithError:(id)arg1;
- (void)_retryWithCurrentField;
- (void)_continueWithCurrentField;
- (void)_cancelInput;
- (void)_tellDelegateDidFinishWithUserInputResponses:(id)arg1;
- (void)_questionFieldNotEmpty:(id)arg1;
- (void)_questionFieldEmpty:(id)arg1;
- (void)setPane:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_updateNavigationBar;
- (void)_showNavButtonsAnimated:(BOOL)arg1;
- (void)_hideProgressIndicator;
- (void)_showProgressIndicator;
- (void)_enableRightButton;
- (void)_disableRightButton;
- (void)_cancelButtonClicked;
- (void)_nextButtonClicked;
- (void)_hideKeyboard:(BOOL)arg1;
- (void)_showKeyboard:(BOOL)arg1;
- (void)_processResponseAndContinue;
- (id)_panePropertiesForField:(id)arg1;
- (void)dealloc;
- (id)initWithUserInput:(id)arg1;

@end
