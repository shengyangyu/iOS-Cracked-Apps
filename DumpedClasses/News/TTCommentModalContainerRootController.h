//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "TTModalInsideNavigationDelegate.h"

@class NSString, SSThemedView, TTModalInsideNavigationController, UIViewController<TTModalWrapControllerProtocol>;

@interface TTCommentModalContainerRootController : SSViewControllerBase <TTModalInsideNavigationDelegate>
{
    _Bool _hasEntered;
    UIViewController<TTModalWrapControllerProtocol> *_detailVC;
    TTModalInsideNavigationController *_navVC;
    SSThemedView *_maskView;
}

@property(nonatomic) _Bool hasEntered; // @synthesize hasEntered=_hasEntered;
@property(retain, nonatomic) SSThemedView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) TTModalInsideNavigationController *navVC; // @synthesize navVC=_navVC;
@property(retain, nonatomic) UIViewController<TTModalWrapControllerProtocol> *detailVC; // @synthesize detailVC=_detailVC;
- (void).cxx_destruct;
- (void)modalInsideNavigationController:(id)arg1 panAtPercent:(double)arg2;
- (void)modalInsideNavigationController:(id)arg1 closeButtonOnClick:(id)arg2;
- (void)dismissViewController;
- (void)updateProgress:(double)arg1;
- (void)_showEnterAnimationIfNeed;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
