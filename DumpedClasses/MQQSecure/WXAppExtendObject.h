//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXAppExtendObject : NSObject
{
    NSString *extInfo;
    NSData *fileData;
    NSString *url;
}

+ (id)object;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo;
- (void)dealloc;
- (id)init;

@end
