//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface IQYWalletPayResult : NSObject
{
    NSString *_partnerOrderCode;
    NSString *_partner;
    NSString *_fee;
    NSString *_status;
    NSString *_subject;
    NSString *_orderCode;
    NSString *_createTime;
    NSString *_payTime;
    NSString *_charset;
}

+ (id)parseForArray:(id)arg1;
@property(retain, nonatomic) NSString *charset; // @synthesize charset=_charset;
@property(retain, nonatomic) NSString *payTime; // @synthesize payTime=_payTime;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *orderCode; // @synthesize orderCode=_orderCode;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *fee; // @synthesize fee=_fee;
@property(retain, nonatomic) NSString *partner; // @synthesize partner=_partner;
@property(retain, nonatomic) NSString *partnerOrderCode; // @synthesize partnerOrderCode=_partnerOrderCode;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

