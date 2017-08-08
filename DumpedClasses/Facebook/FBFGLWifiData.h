//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface FBFGLWifiData : NSObject
{
    NSDate *_updatedDate;
    NSString *_SSID;
    NSString *_BSSID;
    double _rssi;
}

@property(readonly, nonatomic) double rssi; // @synthesize rssi=_rssi;
@property(readonly, copy, nonatomic) NSString *BSSID; // @synthesize BSSID=_BSSID;
@property(readonly, copy, nonatomic) NSString *SSID; // @synthesize SSID=_SSID;
@property(readonly, nonatomic) NSDate *updatedDate; // @synthesize updatedDate=_updatedDate;
- (void).cxx_destruct;
- (id)initWithUpdatedDate:(id)arg1 SSID:(id)arg2 BSSID:(id)arg3 rssi:(double)arg4;

@end
