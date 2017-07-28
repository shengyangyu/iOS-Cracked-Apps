//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMOBFPlugin.h"
#import "ISSPWeChatAction.h"

@class NSMutableDictionary, NSMutableSet, NSString;

@interface SSPWeChatNewProxy : NSObject <ISSPWeChatAction, IMOBFPlugin>
{
    NSMutableDictionary *_authCallbackSet;
    NSMutableSet *_shareCallbackSet;
}

@property(retain, nonatomic) NSMutableSet *shareCallbackSet; // @synthesize shareCallbackSet=_shareCallbackSet;
@property(retain, nonatomic) NSMutableDictionary *authCallbackSet; // @synthesize authCallbackSet=_authCallbackSet;
- (void).cxx_destruct;
- (void)unload;
- (void)registerCancelAuth;
- (void)registerHandlerShareCallbackMethod;
- (void)registerShareMethod;
- (void)registerHandleSSOCallbackMethod;
- (void)registerAuthMethod;
- (void)registerSetupApp;
- (void)load:(id)arg1;
- (_Bool)sendAuthRequest:(id)arg1;
- (_Bool)wechat_handleOpenURL:(id)arg1 delegate:(id)arg2;
- (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
- (_Bool)isClientInstalled;
- (_Bool)isSupportApi;
- (_Bool)canShare:(id)arg1 callback:(id)arg2;
- (_Bool)registerApp:(id)arg1;
- (void)setupAppKey:(id)arg1;
- (id)checkThumbImageSize:(id)arg1;
- (void)registerSDK;
- (void)connectWechatWithAppId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

