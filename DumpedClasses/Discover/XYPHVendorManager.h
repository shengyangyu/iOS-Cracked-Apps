//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface XYPHVendorManager : NSObject
{
    NSMutableDictionary *_sendedIds;
    NSMutableDictionary *_viewedIds;
}

+ (void)logout;
+ (void)loginSuccess;
+ (void)appBecomeActive;
+ (void)setExpIds:(id)arg1;
+ (void)setUserId:(id)arg1;
+ (void)startSession;
+ (id)defaultManager;
@property(retain, nonatomic) NSMutableDictionary *viewedIds; // @synthesize viewedIds=_viewedIds;
@property(retain, nonatomic) NSMutableDictionary *sendedIds; // @synthesize sendedIds=_sendedIds;
- (void).cxx_destruct;
- (id)init;

@end

