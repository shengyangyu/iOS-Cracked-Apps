//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IFTTTAnimatedPagingScrollViewController.h"

#import "UIScrollViewDelegate.h"

@class MSWeakTimer, NSString, SMPageControl, UIButton, UIImageView, UILabel, UIView;

@interface XYPHTourLaunchBetaViewController : IFTTTAnimatedPagingScrollViewController <UIScrollViewDelegate>
{
    _Bool _canAutoScroll;
    UIImageView *_backgroundView;
    SMPageControl *_pageControl;
    UILabel *_titleLabel1;
    UILabel *_titleLabel2;
    UILabel *_titleLabel3;
    UIButton *_loginButton;
    UIButton *_registerButton;
    UIImageView *_contentAnimationImage1;
    UIImageView *_contentAnimationImage2;
    UIImageView *_contentAnimationImage3;
    UIImageView *_accountImage;
    long long _animatedIndex;
    UILabel *_animationLabel;
    UIView *_animationLabelBack;
    MSWeakTimer *_scrollTimer;
}

@property _Bool canAutoScroll; // @synthesize canAutoScroll=_canAutoScroll;
@property(retain, nonatomic) MSWeakTimer *scrollTimer; // @synthesize scrollTimer=_scrollTimer;
@property(retain, nonatomic) UIView *animationLabelBack; // @synthesize animationLabelBack=_animationLabelBack;
@property(retain, nonatomic) UILabel *animationLabel; // @synthesize animationLabel=_animationLabel;
@property long long animatedIndex; // @synthesize animatedIndex=_animatedIndex;
@property(retain, nonatomic) UIImageView *accountImage; // @synthesize accountImage=_accountImage;
@property(retain, nonatomic) UIImageView *contentAnimationImage3; // @synthesize contentAnimationImage3=_contentAnimationImage3;
@property(retain, nonatomic) UIImageView *contentAnimationImage2; // @synthesize contentAnimationImage2=_contentAnimationImage2;
@property(retain, nonatomic) UIImageView *contentAnimationImage1; // @synthesize contentAnimationImage1=_contentAnimationImage1;
@property(retain, nonatomic) UIButton *registerButton; // @synthesize registerButton=_registerButton;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) UILabel *titleLabel3; // @synthesize titleLabel3=_titleLabel3;
@property(retain, nonatomic) UILabel *titleLabel2; // @synthesize titleLabel2=_titleLabel2;
@property(retain, nonatomic) UILabel *titleLabel1; // @synthesize titleLabel1=_titleLabel1;
@property(retain, nonatomic) SMPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)contentStartAnimation:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pageControlDidChangeValue:(id)arg1;
- (void)registerUser:(id)arg1;
- (void)login:(id)arg1;
- (void)scrollToNext;
- (void)configureAnimation;
- (void)placeViews;
- (void)didReceiveMemoryWarning;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)numberOfPages;
- (_Bool)prefersStatusBarHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

