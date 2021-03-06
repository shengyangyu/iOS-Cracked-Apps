//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBViewerContextClassProvidable-Protocol.h"

@class FBMessengerRedirectionBadgingControllerListenerAnnouncer, NSNotificationCenter, NSString, NSUserDefaults;

@interface FBMessengerRedirectionBadgingController : NSObject <FBViewerContextClassProvidable>
{
    NSUserDefaults *_userDefaults;
    NSNotificationCenter *_notificationCenter;
    FBMessengerRedirectionBadgingControllerListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)removeMessengerRedirectionBadgeControllingListener:(id)arg1;
- (void)addMessengerRedirectionBadgeControllingListener:(id)arg1;
- (void)_dismissBadgeIfAppVisitationLimitReached;
- (void)_recordAppVisitationSinceErrorBadgeIfNecessary;
- (void)_applicationDidEnterBackgroundHandler;
- (void)_stopObservingApplicationLifecycleEvents;
- (void)_startObservingApplicationLifecycleEvents;
@property(nonatomic) _Bool shouldBadgeWithRedirectionErrorIndicator;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithUserDefaults:(id)arg1 notificationCenter:(id)arg2 announcer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

