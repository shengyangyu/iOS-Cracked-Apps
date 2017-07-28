//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UPMPService.h"

@interface UPMPServiceConsumption : UPMPService
{
}

- (_Bool)parseUPMPResponse:(id)arg1;
- (void)parseInstalmentChangeResponse:(id)arg1;
- (void)parsePromotionCouponResponse:(id)arg1;
- (void)parsePromotionScoreResponse:(id)arg1;
- (void)parseOpenRulesResponse:(id)arg1;
- (void)parseFollowRulesResponse:(id)arg1;
- (void)parseBingoPromotionResponse:(id)arg1;
- (void)parseGetUserInfoResponse:(id)arg1;
- (void)parseGetLoginRulesResponse:(id)arg1;
- (void)parseUnbindCardResponse:(id)arg1;
- (void)parseRulesResponse:(id)arg1;
- (void)postGetInstalmentWithCmd:(id)arg1 andElement:(id)arg2;
- (void)postPromotionCoupon:(id)arg1 andElement:(id)arg2;
- (void)postPromotionScore:(id)arg1 andUUID:(id)arg2;
- (void)postBindCardRulesRequestWithParams:(id)arg1;
- (void)postReopenRequest;
- (void)postBingoPromotionRequest;
- (void)postGetUserInfoRequestWithParams:(id)arg1;
- (void)postGetLoginRequest;
- (void)postOpenRulesRequestWithFlag:(id)arg1 param:(id)arg2;
- (void)postFollowRulesRequestWithParams:(id)arg1;
- (void)postRulesRequestWithFlag:(id)arg1 param:(id)arg2 payType:(id)arg3 payMode:(id)arg4;
- (void)postUnBindCardRequestWithCardId:(id)arg1;
- (void)postModifyPhoneRequestWithCard:(id)arg1;

@end

