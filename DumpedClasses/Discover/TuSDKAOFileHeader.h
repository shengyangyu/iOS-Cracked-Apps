//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TuSDKAOFileHeader : NSObject
{
    unsigned char _type;
    NSString *_name;
    unsigned long long _start;
    unsigned long long _end;
    unsigned long long _dataLength;
    NSString *_vaild;
    unsigned long long _vaildType;
}

+ (id)fileHeader;
@property(nonatomic) unsigned long long vaildType; // @synthesize vaildType=_vaildType;
@property(copy, nonatomic) NSString *vaild; // @synthesize vaild=_vaild;
@property(nonatomic) unsigned long long dataLength; // @synthesize dataLength=_dataLength;
@property(nonatomic) unsigned long long end; // @synthesize end=_end;
@property(nonatomic) unsigned long long start; // @synthesize start=_start;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned char type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;

@end

