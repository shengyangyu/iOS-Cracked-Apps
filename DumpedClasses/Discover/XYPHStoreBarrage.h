//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString;

@interface XYPHStoreBarrage : XYRKModel
{
    NSString *_image;
    NSString *_address;
    NSString *_time;
    NSString *_levelName;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *levelName; // @synthesize levelName=_levelName;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end

