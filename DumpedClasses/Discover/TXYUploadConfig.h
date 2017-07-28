//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TXYSniffIpMgr, TXYUploadConfigDict;

@interface TXYUploadConfig : NSObject
{
    TXYUploadConfigDict *_config;
    NSString *_bucket;
    NSString *_appId;
    long long _cloudType;
    TXYSniffIpMgr *_snifIpMgr;
}

+ (id)instance:(long long)arg1;
@property(retain, nonatomic) TXYSniffIpMgr *snifIpMgr; // @synthesize snifIpMgr=_snifIpMgr;
@property(nonatomic) long long cloudType; // @synthesize cloudType=_cloudType;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(retain, nonatomic) TXYUploadConfigDict *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (long long)channelCount;
- (id)optimizedIPsInCurrentAPN;
- (void)saveConfig;
- (void)loadConfig;
- (id)appConfigPath;
- (id)documentPath;
- (id)init:(long long)arg1;

@end

