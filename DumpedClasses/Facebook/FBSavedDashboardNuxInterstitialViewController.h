//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBInterstitialViewController.h>

#import "FBInterstitialViewDelegate-Protocol.h"
#import "FBNuxStepViewController-Protocol.h"

@class FBSavedDashboardNuxInterstitial, NSString, NSTimer, UIView;
@protocol FBNUXViewControllerDelegate;

@interface FBSavedDashboardNuxInterstitialViewController : FBInterstitialViewController <FBInterstitialViewDelegate, FBNuxStepViewController>
{
    FBSavedDashboardNuxInterstitial *_interstitial;
    NSTimer *_transitionTimer;
    id <FBNUXViewControllerDelegate> _delegate;
    unsigned long long _interfaceOrientationMask;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long interfaceOrientationMask; // @synthesize interfaceOrientationMask=_interfaceOrientationMask;
@property(nonatomic) __weak id <FBNUXViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setStepProgress:(unsigned long long)arg1 ofTotal:(unsigned long long)arg2;
- (void)transitionToSubStep:(id)arg1;
- (void)dismissInterstitialNow:(id)arg1;
- (void)interstitialView:(id)arg1 didSelectPrimaryButton:(id)arg2;
- (void)viewDidLoad;
- (struct CGSize)preferredContentSize;
- (struct CGSize)contentSizeForViewInPopover;
- (id)initWithStep:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
