//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "WKNavigationDelegate.h"
#import "WKUIDelegate.h"

@class NSDictionary, NSString, UIBarButtonItem, UIButton, WKWebView, XYPHWKHybridRequestAnalyze;

@interface XYPHWKHybridWebViewController : XYPHBaseViewController <WKUIDelegate, WKNavigationDelegate>
{
    double velX;
    double velY;
    _Bool _isShowingShareView;
    _Bool _hiddenNavigation;
    _Bool _disableDragBack;
    _Bool _isShowingJSRightBarButtonItem;
    WKWebView *_contentView;
    NSString *_linkURL;
    XYPHWKHybridRequestAnalyze *_phoneGap;
    NSString *_referrer;
    UIBarButtonItem *_navigationRightBarButtonItem;
    NSDictionary *_shareDic;
    UIBarButtonItem *_serviceButtonItem;
    UIButton *_navigationRightBarButton;
}

+ (id)webviewuseragent;
@property(nonatomic) _Bool isShowingJSRightBarButtonItem; // @synthesize isShowingJSRightBarButtonItem=_isShowingJSRightBarButtonItem;
@property(retain, nonatomic) UIButton *navigationRightBarButton; // @synthesize navigationRightBarButton=_navigationRightBarButton;
@property(retain, nonatomic) UIBarButtonItem *serviceButtonItem; // @synthesize serviceButtonItem=_serviceButtonItem;
@property(retain, nonatomic) NSDictionary *shareDic; // @synthesize shareDic=_shareDic;
@property(retain, nonatomic) UIBarButtonItem *navigationRightBarButtonItem; // @synthesize navigationRightBarButtonItem=_navigationRightBarButtonItem;
@property(nonatomic) _Bool disableDragBack; // @synthesize disableDragBack=_disableDragBack;
@property(nonatomic) _Bool hiddenNavigation; // @synthesize hiddenNavigation=_hiddenNavigation;
@property(retain, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
@property(retain, nonatomic) XYPHWKHybridRequestAnalyze *phoneGap; // @synthesize phoneGap=_phoneGap;
@property(retain, nonatomic) NSString *linkURL; // @synthesize linkURL=_linkURL;
@property(retain, nonatomic) WKWebView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)navigationRightBarButtonTapped:(id)arg1;
- (void)setNavigationRightBarButtonItemWithTitle:(id)arg1;
- (void)serviceButtonTapped:(id)arg1;
- (void)openPaymentSetup;
- (void)showSetupApplePayAlertView;
- (void)loadActionView;
- (void)refreshShareInfo;
- (void)closeBarButtonClicked:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (void)gestureRecognizerDidPan:(id)arg1;
- (void)applicationUserDidTackScreenshotNotification:(id)arg1;
- (void)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

