//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UILabel, UITextField;

@interface XYPHPostNoteTitleInputField : UIView <UITextFieldDelegate>
{
    long long _maxTitleLimitCount;
    id <XYPHPostNoteTitleInputFieldDelegate> _delegate;
    UITextField *_titleTextField;
    UILabel *_notesTitleCountLabel;
}

@property(retain, nonatomic) UILabel *notesTitleCountLabel; // @synthesize notesTitleCountLabel=_notesTitleCountLabel;
@property(retain, nonatomic) UITextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(nonatomic) __weak id <XYPHPostNoteTitleInputFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long maxTitleLimitCount; // @synthesize maxTitleLimitCount=_maxTitleLimitCount;
- (void).cxx_destruct;
- (id)text;
- (void)setText:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)titleTextFieldEditingChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

