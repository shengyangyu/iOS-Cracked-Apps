//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface SSDKService : NSObject
{
    _Bool _enabledATS;
    NSDictionary *_serverPaths;
}

+ (id)sharedService;
@property(nonatomic) _Bool enabledATS; // @synthesize enabledATS=_enabledATS;
@property(retain, nonatomic) NSDictionary *serverPaths; // @synthesize serverPaths=_serverPaths;
- (void).cxx_destruct;
- (void)parseResponse:(id)arg1 data:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)getServicePath:(id)arg1;
- (void)getAllowConnectServer:(CDUnknownBlockType)arg1;
- (void)getShortUrls:(id)arg1 user:(id)arg2 platformType:(unsigned long long)arg3 onResult:(CDUnknownBlockType)arg4;
- (void)sendLogs:(id)arg1 onResult:(CDUnknownBlockType)arg2;
- (void)getServerDate:(CDUnknownBlockType)arg1;
- (void)uploadSharedImage:(id)arg1 onResult:(CDUnknownBlockType)arg2;
- (void)uploadDUIDInfo:(id)arg1 onResult:(CDUnknownBlockType)arg2;
- (void)getPlatformAppConfig:(CDUnknownBlockType)arg1;
- (void)getConfig:(CDUnknownBlockType)arg1;

@end

