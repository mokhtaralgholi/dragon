//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptNativeObject.h>

#import <iTunesStoreUI/SUScriptTextFieldDelegate-Protocol.h>

@class NSString, SUScriptTextFieldDelegate;

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate>
{
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

- (void)_setNativeObjectDelegate:(id)arg1;
- (void)_sendScriptDidChange;
- (id)_nativeObjectDelegate;
- (void)_textDidEndEditingOnExit:(id)arg1;
- (void)_textDidChange:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)setupNativeObject;
- (void)destroyNativeObject;
@property(nonatomic) double width;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *placeholder;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) long long autocapitalizationType;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;

@end
