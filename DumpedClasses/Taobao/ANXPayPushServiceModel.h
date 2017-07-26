//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ANXLogManager, ANXRuntimeConfig, NSArray, NSString;

@interface ANXPayPushServiceModel : NSObject
{
    NSString *_pushContext;
    ANXLogManager *_logManager;
    ANXRuntimeConfig *_runtimeConfig;
    NSString *_appName;
    NSString *_sid;
    NSString *_isTrojan;
    NSString *_isPrisonBreak;
    NSString *_currentOperateMobile;
    NSArray *_dynamicIds;
    NSString *_havanaId;
}

@property(copy, nonatomic) NSString *havanaId; // @synthesize havanaId=_havanaId;
@property(copy, nonatomic) NSArray *dynamicIds; // @synthesize dynamicIds=_dynamicIds;
@property(copy, nonatomic) NSString *currentOperateMobile; // @synthesize currentOperateMobile=_currentOperateMobile;
@property(copy, nonatomic) NSString *isPrisonBreak; // @synthesize isPrisonBreak=_isPrisonBreak;
@property(copy, nonatomic) NSString *isTrojan; // @synthesize isTrojan=_isTrojan;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) ANXRuntimeConfig *runtimeConfig; // @synthesize runtimeConfig=_runtimeConfig;
@property(retain, nonatomic) ANXLogManager *logManager; // @synthesize logManager=_logManager;
@property(copy, nonatomic) NSString *pushContext; // @synthesize pushContext=_pushContext;
- (void).cxx_destruct;
- (id)buildPayContextResponse;
- (void)buildRuntimeConfig;
- (_Bool)validateParams;
- (id)initWithParams:(id)arg1;

@end
