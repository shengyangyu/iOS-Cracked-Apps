//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMMeetupQRDO : NSObject
{
    _Bool _result;
    NSString *_msg;
    NSString *_title;
    NSString *_subTitle;
    NSString *_amount;
    NSString *_itemId;
    NSString *_payCode;
    NSString *_peerUserId;
    NSString *_scanUrl;
    NSString *_qrTip;
}

@property(copy, nonatomic) NSString *qrTip; // @synthesize qrTip=_qrTip;
@property(copy, nonatomic) NSString *scanUrl; // @synthesize scanUrl=_scanUrl;
@property(copy, nonatomic) NSString *peerUserId; // @synthesize peerUserId=_peerUserId;
@property(copy, nonatomic) NSString *payCode; // @synthesize payCode=_payCode;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) _Bool result; // @synthesize result=_result;
- (void).cxx_destruct;

@end
