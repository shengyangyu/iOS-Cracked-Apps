//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XGJceObjectV2.h"

@class NSString;

@interface XGMutableInfo : XGJceObjectV2
{
    NSString *jcev2_p_0_o_ssid;
    NSString *jcev2_p_1_o_bssid;
    NSString *jcev2_p_2_o_mac;
    NSString *jcev2_p_3_o_wflist;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_wflist, setter=setJce_wflist:) NSString *jcev2_p_3_o_wflist; // @synthesize jcev2_p_3_o_wflist;
@property(retain, nonatomic, getter=jce_mac, setter=setJce_mac:) NSString *jcev2_p_2_o_mac; // @synthesize jcev2_p_2_o_mac;
@property(retain, nonatomic, getter=jce_bssid, setter=setJce_bssid:) NSString *jcev2_p_1_o_bssid; // @synthesize jcev2_p_1_o_bssid;
@property(retain, nonatomic, getter=jce_ssid, setter=setJce_ssid:) NSString *jcev2_p_0_o_ssid; // @synthesize jcev2_p_0_o_ssid;
- (void)dealloc;
- (id)init;

@end
