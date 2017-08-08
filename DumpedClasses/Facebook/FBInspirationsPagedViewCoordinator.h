//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBInspirationsPagedViewControllerSwipeListener-Protocol.h"
#import "FBViewCoordinator-Protocol.h"

@class FBInspirationsPagedViewController, FBNuxController, FBNuxTooltip, FBUserSession, NSArray, NSString;

@interface FBInspirationsPagedViewCoordinator : NSObject <FBInspirationsPagedViewControllerSwipeListener, FBViewCoordinator>
{
    FBUserSession *_session;
    NSArray *_childViewControllerFactories;
    FBInspirationsPagedViewController *_rootViewController;
    unsigned long long _initialPageIndex;
    id _initialPagePayload;
    FBNuxController *_cameraButtonNuxController;
    FBNuxTooltip *_cameraButtonNux;
}

- (void).cxx_destruct;
- (void)inspirationsPagedViewController:(id)arg1 didSwipeInDirection:(unsigned long long)arg2 initialPageIndex:(unsigned long long)arg3;
- (_Bool)_nuxControllerEligibilityBlockForNuxId:(id)arg1;
- (id)_nuxController;
- (id)currentOrInitialVisiblePages;
- (void)_showPageAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2 payload:(id)arg3;
- (void)showPageAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_showInbox;
- (void)_showNewsfeed;
- (void)_showCamera:(id)arg1;
- (void)_setupCameraTooltipInView:(id)arg1;
- (void)setupNavigationBarDecorator:(id)arg1 navConfig:(id)arg2;
- (id)rootViewController;
- (void)tearDownPagedViewController;
- (void)_cameraNeedsOpen:(id)arg1;
- (void)_setupNotificationObservers;
- (void)setupViewControllers;
- (void)dealloc;
- (id)initWithSession:(id)arg1 childViewControllerFactories:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
