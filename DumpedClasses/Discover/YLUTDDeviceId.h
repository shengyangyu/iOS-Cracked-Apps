//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YLUTDBaseModel.h"

@class NSArray, NSString;

@interface YLUTDDeviceId : YLUTDBaseModel
{
    NSString *_tid;
    NSArray *_wifiMacs;
    NSString *_btMac;
    NSString *_adId;
    NSString *_vendorId;
}

@property(retain, nonatomic) NSString *vendorId; // @synthesize vendorId=_vendorId;
@property(retain, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(retain, nonatomic) NSString *btMac; // @synthesize btMac=_btMac;
@property(retain, nonatomic) NSArray *wifiMacs; // @synthesize wifiMacs=_wifiMacs;
@property(retain, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void).cxx_destruct;
- (id)archiveToDictionary;

@end

