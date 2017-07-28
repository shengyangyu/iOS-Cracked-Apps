//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APAlertViewDelegate.h"

@class APayProcessor, APayRoute, BizContext, NSCondition, NSDictionary, NSString, UIWindow;

@interface AlipaySDK : NSObject <APAlertViewDelegate>
{
    UIWindow *_targetWindow;
    NSString *_schemeStr;
    NSString *_executingOrderStr;
    CDUnknownBlockType _completionBlock;
    APayRoute *_route;
    APayProcessor *_processor;
    NSDictionary *_alertOkAction;
    NSDictionary *_alertCancelAction;
    BizContext *_bizContext;
    NSCondition *_tidCondition;
}

+ (id)defaultService;
@property(retain, nonatomic) NSCondition *tidCondition; // @synthesize tidCondition=_tidCondition;
@property(retain, nonatomic) BizContext *bizContext; // @synthesize bizContext=_bizContext;
@property(retain, nonatomic) NSDictionary *alertCancelAction; // @synthesize alertCancelAction=_alertCancelAction;
@property(retain, nonatomic) NSDictionary *alertOkAction; // @synthesize alertOkAction=_alertOkAction;
@property(readonly, nonatomic) APayProcessor *processor; // @synthesize processor=_processor;
@property(readonly, nonatomic) APayRoute *route; // @synthesize route=_route;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSString *executingOrderStr; // @synthesize executingOrderStr=_executingOrderStr;
@property(copy, nonatomic) NSString *schemeStr; // @synthesize schemeStr=_schemeStr;
@property(nonatomic) __weak UIWindow *targetWindow; // @synthesize targetWindow=_targetWindow;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)removeAlipayObserver;
- (void)cleanInfoWhenGoPortal:(id)arg1;
- (void)cleanData;
- (void)processResultUrl:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)processAuth_V2Result:(id)arg1 standbyCallback:(CDUnknownBlockType)arg2;
- (void)payWithH5:(_Bool)arg1 order:(id)arg2 scheme:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)auth_V2WithInfo:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)authWithInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onAdapterFinished;
- (void)queryTid;
- (id)queryTidFactor:(int)arg1;
- (id)currentVersion;
- (_Bool)isLogined;
- (id)dictionaryFromRegular:(id)arg1 pattern:(id)arg2;
- (void)processAuthResult:(id)arg1 standbyCallback:(CDUnknownBlockType)arg2;
- (void)processOrderWithPaymentResult:(id)arg1 standbyCallback:(CDUnknownBlockType)arg2;
- (void)callbackWithResult:(id)arg1;
- (id)processTradeToken:(id)arg1;
- (id)valueFromResult:(id)arg1 withKey:(id)arg2 isNewModel:(_Bool)arg3;
- (_Bool)isNewModelResult:(id)arg1;
- (void)setUrl:(id)arg1;
- (long long)routeTypeWithConfig:(id)arg1;
- (id)addBizContextToOrder:(id)arg1;
- (id)fetchTradeToken;
- (void)payUrlOrder:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)fetchOrderInfoFromH5PayUrl:(id)arg1;
- (void)payOrder:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

