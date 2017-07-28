//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TDATBaseModel.h"

@class NSDictionary, NSString;

@interface TDATLocation : TDATBaseModel
{
    float _lat;
    float _lng;
    long long _ts;
    NSString *_provider;
    NSString *_unit;
    NSDictionary *_data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(retain, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(nonatomic) long long ts; // @synthesize ts=_ts;
@property(nonatomic) float lng; // @synthesize lng=_lng;
@property(nonatomic) float lat; // @synthesize lat=_lat;
- (void).cxx_destruct;
- (id)archiveToDictionary;

@end

