//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "TTTAttributedLabelDelegate.h"
#import "UITextFieldDelegate.h"
#import "XYPHPhoneZonesViewControllerDelegate.h"

@class MSWeakTimer, NSMutableArray, NSString, TTTAttributedLabel, UIButton, UILabel, UIScrollView, UITextField, UIView;

@interface XYPHLoginBetaTemplateViewController : XYPHBaseViewController <XYPHPhoneZonesViewControllerDelegate, TTTAttributedLabelDelegate, UITextFieldDelegate>
{
    _Bool _showCommunityLogin;
    _Bool _showBottomControl;
    _Bool _showPasswordLogin;
    _Bool _showAutoRegisterLogin;
    _Bool _hasSentSMS;
    _Bool _autoShareToCommunity;
    CDUnknownBlockType _loginCompletion;
    UIButton *_backButton;
    UIScrollView *_contentScrollView;
    UITextField *_phoneTextField;
    UIView *_phoneBtmLine;
    UIButton *_sendCodeButton;
    UILabel *_sendCodeButtonTitle;
    UITextField *_smsCodeTextField;
    UIButton *_zoneButton;
    UIButton *_doneButton;
    UIView *_fieldBackView;
    UILabel *_socialLabel;
    UIButton *_weixinButton;
    UIButton *_qqButton;
    UIButton *_sinaweiboButton;
    NSMutableArray *_zonesArray;
    NSString *_zoneString;
    NSString *_phoneString;
    MSWeakTimer *_smsTimer;
    UIButton *_autoShareButton;
    TTTAttributedLabel *_privacyLabel;
    UIButton *_pwdLoginButton;
    UIButton *_autoRegisterButton;
    UIButton *_maskButton;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *maskButton; // @synthesize maskButton=_maskButton;
@property(retain, nonatomic) UIButton *autoRegisterButton; // @synthesize autoRegisterButton=_autoRegisterButton;
@property(retain, nonatomic) UIButton *pwdLoginButton; // @synthesize pwdLoginButton=_pwdLoginButton;
@property(retain, nonatomic) TTTAttributedLabel *privacyLabel; // @synthesize privacyLabel=_privacyLabel;
@property(retain, nonatomic) UIButton *autoShareButton; // @synthesize autoShareButton=_autoShareButton;
@property(nonatomic) _Bool autoShareToCommunity; // @synthesize autoShareToCommunity=_autoShareToCommunity;
@property(retain, nonatomic) MSWeakTimer *smsTimer; // @synthesize smsTimer=_smsTimer;
@property(retain, nonatomic) NSString *phoneString; // @synthesize phoneString=_phoneString;
@property(retain, nonatomic) NSString *zoneString; // @synthesize zoneString=_zoneString;
@property(retain, nonatomic) NSMutableArray *zonesArray; // @synthesize zonesArray=_zonesArray;
@property(nonatomic) _Bool hasSentSMS; // @synthesize hasSentSMS=_hasSentSMS;
@property(retain, nonatomic) UIButton *sinaweiboButton; // @synthesize sinaweiboButton=_sinaweiboButton;
@property(retain, nonatomic) UIButton *qqButton; // @synthesize qqButton=_qqButton;
@property(retain, nonatomic) UIButton *weixinButton; // @synthesize weixinButton=_weixinButton;
@property(retain, nonatomic) UILabel *socialLabel; // @synthesize socialLabel=_socialLabel;
@property(retain, nonatomic) UIView *fieldBackView; // @synthesize fieldBackView=_fieldBackView;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIButton *zoneButton; // @synthesize zoneButton=_zoneButton;
@property(retain, nonatomic) UITextField *smsCodeTextField; // @synthesize smsCodeTextField=_smsCodeTextField;
@property(retain, nonatomic) UILabel *sendCodeButtonTitle; // @synthesize sendCodeButtonTitle=_sendCodeButtonTitle;
@property(retain, nonatomic) UIButton *sendCodeButton; // @synthesize sendCodeButton=_sendCodeButton;
@property(retain, nonatomic) UIView *phoneBtmLine; // @synthesize phoneBtmLine=_phoneBtmLine;
@property(retain, nonatomic) UITextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) _Bool showAutoRegisterLogin; // @synthesize showAutoRegisterLogin=_showAutoRegisterLogin;
@property(nonatomic) _Bool showPasswordLogin; // @synthesize showPasswordLogin=_showPasswordLogin;
@property(nonatomic) _Bool showBottomControl; // @synthesize showBottomControl=_showBottomControl;
@property(nonatomic) _Bool showCommunityLogin; // @synthesize showCommunityLogin=_showCommunityLogin;
@property(copy, nonatomic) CDUnknownBlockType loginCompletion; // @synthesize loginCompletion=_loginCompletion;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)autoShareButtonClicked:(id)arg1;
- (void)loginWithWeibo:(id)arg1;
- (void)loginWithWeixin:(id)arg1;
- (void)loginWithQQ:(id)arg1;
- (void)finishThirdLoginWithUser:(id)arg1;
- (void)needShowBrandGuide;
- (void)disablePhoneTextField;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)cancelInput:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)initTemplateView;
- (void)updateTimer:(long long)arg1;
- (void)updateTimer;
- (void)showSMSCodeInputView:(_Bool)arg1;
- (_Bool)sendSMSCode:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
- (void)setZoneData:(id)arg1;
- (void)zonesButtonPressed:(id)arg1;
- (void)setBarTitleName:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)backBarButtonClicked:(id)arg1;
- (void)autoRegisterButtonPressed:(id)arg1;
- (void)pwdLoginButtonPressed:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

