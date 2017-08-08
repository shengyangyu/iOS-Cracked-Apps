//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MQQButton, MQQInputListView, MQQSCBInputTextField, UIButton, UILabel, UINavigationController;

@interface MQQSCBAutoInputPhoneView : UIView
{
    _Bool _isChinesePhoneNumber;
    MQQButton *_blackListButton;
    MQQButton *_reportButton;
    UIButton *_closeButton;
    UIView *_containerView;
    MQQInputListView *_inputListView;
    MQQSCBInputTextField *_textField;
    UILabel *_contentLabel;
    UINavigationController *_navigationController;
}

+ (void)closeAutoInputPhoneView;
+ (void)showAutoInputPhoneViewWithNavigationController:(id)arg1;
+ (_Bool)isAutoInputPhoneViewShow;
+ (_Bool)canShowAutoInputPhoneView;
@property(nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) _Bool isChinesePhoneNumber; // @synthesize isChinesePhoneNumber=_isChinesePhoneNumber;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MQQSCBInputTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) MQQInputListView *inputListView; // @synthesize inputListView=_inputListView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) MQQButton *reportButton; // @synthesize reportButton=_reportButton;
@property(retain, nonatomic) MQQButton *blackListButton; // @synthesize blackListButton=_blackListButton;
- (void)closeView;
- (void)monitorNumberIsValid;
- (void)willEnterForeground:(id)arg1;
- (void)textFieldTextDidChanged:(id)arg1;
- (void)textFieldTextDidEndEditing:(id)arg1;
- (void)textFieldTextDidBeginEditing:(id)arg1;
- (void)jumpToAddTag;
- (void)jumpToBlackList;
- (id)initWithFrame:(struct CGRect)arg1 navigationController:(id)arg2;
- (void)dealloc;

@end
