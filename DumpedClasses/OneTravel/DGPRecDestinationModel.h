//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface DGPRecDestinationModel : JSONModel
{
    NSString *_lat;
    NSString *_lng;
    NSString *_c;
    NSString *_t;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *t; // @synthesize t=_t;
@property(copy, nonatomic) NSString *c; // @synthesize c=_c;
@property(copy, nonatomic) NSString *lng; // @synthesize lng=_lng;
@property(copy, nonatomic) NSString *lat; // @synthesize lat=_lat;
- (void).cxx_destruct;

@end
