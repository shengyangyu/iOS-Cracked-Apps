//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXYUpIpMgr.h"

@interface TXYUpFileCloudIpMgr : TXYUpIpMgr
{
}

+ (id)instance;
- (id)backupDomainIP;
- (id)domainName;
- (id)getFileTypeKey;
- (id)getIpList:(id)arg1 iptype:(int)arg2 apn:(int)arg3 existIpList:(id)arg4 domain:(id)arg5;
- (void)initIPList:(id)arg1 latestIpList:(id)arg2;
- (void)updateDomainIP:(id)arg1;
- (void)refreshLatestIp;
- (void)load;
- (id)init;

@end

