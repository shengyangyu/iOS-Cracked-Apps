//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSDKContentViewController.h"

@class UIView<ISSDKAuthView>;

@interface SSDKAuthViewController : SSDKContentViewController
{
    _Bool _isCancelled;
    UIView<ISSDKAuthView> *_authView;
}

@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) UIView<ISSDKAuthView> *authView; // @synthesize authView=_authView;
- (void).cxx_destruct;
- (void)cancelButtonClickHandler:(id)arg1;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidLoad;
- (id)initWithAuthView:(id)arg1;
- (id)init;

@end

