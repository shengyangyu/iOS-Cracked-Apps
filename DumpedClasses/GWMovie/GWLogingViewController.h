//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

#import "GWLoginDelegate-Protocol.h"
#import "GWPasswordFindViewDelegate-Protocol.h"
#import "GWRegisterViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class GWBindAccountViewController, GWGetMobileCodeByFindpassProvider, GWLoginContentProvider, GWLoginView, GWMemberInfoProvider, GWOpenLoginProvider, GWPasswordFindView, GWPushGuideViewController, GWRegisterContentProvider, GWRegisterDynamicNumberProvider, GWRegisterView, NSString, UIButton, UIImageView, UIScrollView;

@interface GWLogingViewController : GWBaseViewController <UITextFieldDelegate, GWLoginDelegate, GWPasswordFindViewDelegate, GWRegisterViewDelegate>
{
    GWRegisterDynamicNumberProvider *dynamicNumberProvider;
    GWRegisterContentProvider *registerContentProvider;
    GWGetMobileCodeByFindpassProvider *getMobileCodeFindPassProvider;
    GWLoginContentProvider *loginContentProvider;
    _Bool logged;
    _Bool isPushNextViewController;
    GWOpenLoginProvider *openLoginProvider;
    _Bool _disableCancelButton;
    _Bool _hung;
    _Bool _onlyShowFindPasswordUI;
    int _currentType;
    CDUnknownBlockType loginFinishHandler;
    CDUnknownBlockType loginCancelHandler;
    GWLoginView *_loginView;
    GWPasswordFindView *_passwordFindView;
    GWRegisterView *_registerView;
    GWMemberInfoProvider *_memberInfoProvider;
    UIImageView *_logoImage;
    UIScrollView *_backScroller;
    double _animationDuration;
    UIButton *_backButton;
    NSString *_securityCode;
    GWPushGuideViewController *_guideController;
    GWBindAccountViewController *_bindMobileController;
    struct CGRect _keyboardRect;
}

@property(nonatomic) _Bool onlyShowFindPasswordUI; // @synthesize onlyShowFindPasswordUI=_onlyShowFindPasswordUI;
@property(retain, nonatomic) GWBindAccountViewController *bindMobileController; // @synthesize bindMobileController=_bindMobileController;
@property(retain, nonatomic) GWPushGuideViewController *guideController; // @synthesize guideController=_guideController;
@property(copy, nonatomic) NSString *securityCode; // @synthesize securityCode=_securityCode;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) int currentType; // @synthesize currentType=_currentType;
@property(nonatomic) _Bool hung; // @synthesize hung=_hung;
@property(nonatomic) struct CGRect keyboardRect; // @synthesize keyboardRect=_keyboardRect;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) UIScrollView *backScroller; // @synthesize backScroller=_backScroller;
@property(retain, nonatomic) UIImageView *logoImage; // @synthesize logoImage=_logoImage;
@property(retain, nonatomic) GWMemberInfoProvider *memberInfoProvider; // @synthesize memberInfoProvider=_memberInfoProvider;
@property(nonatomic) _Bool disableCancelButton; // @synthesize disableCancelButton=_disableCancelButton;
@property(retain, nonatomic) GWRegisterView *registerView; // @synthesize registerView=_registerView;
@property(retain, nonatomic) GWPasswordFindView *passwordFindView; // @synthesize passwordFindView=_passwordFindView;
@property(nonatomic) __weak GWLoginView *loginView; // @synthesize loginView=_loginView;
@property(copy, nonatomic) CDUnknownBlockType loginCancelHandler; // @synthesize loginCancelHandler;
@property(copy, nonatomic) CDUnknownBlockType loginFinishHandler; // @synthesize loginFinishHandler;
- (void).cxx_destruct;
- (struct CGRect)getControlFrameInWindow:(id)arg1;
- (void)checkViewStatus;
- (void)changeStatus:(_Bool)arg1;
- (void)getVoiceCode;
- (void)requestRegisterWithMobile:(id)arg1 verifyCode:(id)arg2 nickName:(id)arg3 password:(id)arg4;
- (void)requestVerifyNumberWithMobile:(id)arg1 with:(id)arg2 addDic:(id)arg3;
- (void)checkNickName:(id)arg1;
- (void)showAgreement;
- (void)registerFinish;
- (_Bool)verifyButtonTapped:(id)arg1;
- (void)requestCheckNumberWithMobile:(id)arg1 with:(id)arg2;
- (void)passwordFinish;
- (_Bool)getCheckNumber:(id)arg1;
- (void)enterReturn;
- (void)alipayButtonClicked;
- (void)qqButtonClicked;
- (void)requestWeiBoFriendsWithToken:(id)arg1 withUid:(id)arg2;
- (void)sinaButtonClicked;
- (void)weixinButtonClicked;
- (void)quickRegisterClicked;
- (void)passwordFindClicked;
- (void)updateStatusBar;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)handleWeixinLoginWithCode:(id)arg1;
- (void)handleAlipayLoginUrl:(id)arg1;
- (void)checkAliLoginDict:(id)arg1;
- (void)resignALL;
- (void)reset;
- (void)movingTo:(int)arg1;
- (void)keyboardHidden:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillChangeFrameNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)hidenAnimation:(CDUnknownBlockType)arg1;
- (void)showAnimation:(CDUnknownBlockType)arg1;
- (void)beginEdit:(id)arg1;
- (void)requestFollowStateWithMemberid:(id)arg1;
- (void)gcRequestFollowStateWithArr:(id)arg1 withUserInfo:(id)arg2;
- (void)dismiss;
- (void)loginSucessedWithLogInfo:(id)arg1 userInfo:(id)arg2;
- (void)openAPILoginUserId:(id)arg1 source:(id)arg2 token:(id)arg3 nickname:(id)arg4;
- (void)showPushTip;
- (void)showBindMobile;
- (void)login;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)dismissView:(id)arg1;
- (void)backButtonClick:(id)arg1;
- (void)onlyShowFindPassword;
- (void)viewDidLoad;
- (double)getTopHeight;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
