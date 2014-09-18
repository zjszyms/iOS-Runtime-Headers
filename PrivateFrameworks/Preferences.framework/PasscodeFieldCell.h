/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class <KeychainSyncPasscodeFieldDelegate>, NSString, PSPasscodeField;

@interface PasscodeFieldCell : PSTableCell <UIKeyInput, PSPasscodeFieldDelegate> {
    <KeychainSyncPasscodeFieldDelegate> *_delegate;
    PSPasscodeField *_passcodeField;
    bool_convertsNumeralsToASCII;
    bool_denyFirstResponder;
}

@property long long autocapitalizationType;
@property long long autocorrectionType;
@property bool convertsNumeralsToASCII;
@property(copy,readonly) NSString * debugDescription;
@property <KeychainSyncPasscodeFieldDelegate> * delegate;
@property bool denyFirstResponder;
@property(copy,readonly) NSString * description;
@property bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property long long keyboardAppearance;
@property long long keyboardType;
@property long long returnKeyType;
@property(getter=isSecureTextEntry) bool secureTextEntry;
@property long long spellCheckingType;
@property(readonly) Class superclass;

- (void)_setSecureTextEntry:(bool)arg1;
- (bool)becomeFirstResponder;
- (bool)convertsNumeralsToASCII;
- (void)dealloc;
- (id)delegate;
- (void)deleteBackward;
- (bool)denyFirstResponder;
- (bool)hasText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)insertText:(id)arg1;
- (long long)keyboardType;
- (void)layoutSubviews;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (id)passcodeText;
- (void)setConvertsNumeralsToASCII:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDenyFirstResponder:(bool)arg1;
- (void)setPasscodeText:(id)arg1;

@end