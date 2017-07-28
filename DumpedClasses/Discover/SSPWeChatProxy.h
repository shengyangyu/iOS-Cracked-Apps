//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMOBFPlugin.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface SSPWeChatProxy : NSObject <IMOBFPlugin>
{
    id _delegate;
    NSMutableDictionary *_authCallbackSet;
    NSMutableSet *_shareCallbackSet;
}

@property(retain, nonatomic) NSMutableSet *shareCallbackSet; // @synthesize shareCallbackSet=_shareCallbackSet;
@property(retain, nonatomic) NSMutableDictionary *authCallbackSet; // @synthesize authCallbackSet=_authCallbackSet;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onResp:(id)arg1;
- (void)onReq:(id)arg1;
- (void)unload;
- (void)load:(id)arg1;
- (void)registerCancelAuth;
- (void)registerHandlerShareCallbackMethod;
- (void)registerShareMethod;
- (void)registerHandleSSOCallbackMethod;
- (void)registerAuthMethod;
- (void)registerSetupApp;
- (_Bool)sendAuthRequest:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
- (_Bool)registerApp:(id)arg1;
- (_Bool)isSupportApi;
- (_Bool)isClientInstalled;
- (_Bool)canShare:(id)arg1 callback:(id)arg2;
- (void)setupAppKey:(id)arg1;
- (id)checkThumbImageSize:(id)arg1;
- (void)registerSDK;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

