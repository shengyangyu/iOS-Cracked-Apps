//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SDDJPositionInfo : NSObject
{
    NSString *_name;
    NSString *_address;
    NSString *_district;
    NSString *_city;
    NSString *_locSource;
    NSString *_defaultLocSource;
    struct CLLocationCoordinate2D _coordinate;
}

@property(copy, nonatomic) NSString *defaultLocSource; // @synthesize defaultLocSource=_defaultLocSource;
@property(copy, nonatomic) NSString *locSource; // @synthesize locSource=_locSource;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;

@end

