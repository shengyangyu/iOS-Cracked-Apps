//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString;

@interface XYPHGeoInfo : XYRKModel
{
    double _lat;
    double _lng;
    NSString *_geoId;
    NSString *_name;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *geoId; // @synthesize geoId=_geoId;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
- (void).cxx_destruct;

@end

