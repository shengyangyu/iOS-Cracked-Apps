//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, TXYUploadReachability;

@interface TXYSniffIpMgr : NSObject
{
    int _bestPort;
    NSArray *_optimizedIPs;
    NSArray *_sniffPorts;
    NSString *_bestSniffIP;
    long long _cloudType;
    TXYUploadReachability *_reachability;
}

+ (_Bool)isNetworkConnected:(id)arg1 toPort:(int)arg2;
+ (struct dispatch_queue_s *)processing_queue;
@property(retain, nonatomic) TXYUploadReachability *reachability; // @synthesize reachability=_reachability;
@property(nonatomic) long long cloudType; // @synthesize cloudType=_cloudType;
@property(retain, nonatomic) NSString *bestSniffIP; // @synthesize bestSniffIP=_bestSniffIP;
@property(nonatomic) int bestPort; // @synthesize bestPort=_bestPort;
@property(retain, nonatomic) NSArray *sniffPorts; // @synthesize sniffPorts=_sniffPorts;
@property(retain, nonatomic) NSArray *optimizedIPs; // @synthesize optimizedIPs=_optimizedIPs;
- (void).cxx_destruct;
- (void)load;
- (id)getIp;
- (void)update:(id)arg1 result:(long long)arg2 domainIp:(id)arg3;
- (void)reset;
- (void)refreshLatestIp;
- (_Bool)isInBadIpList:(id)arg1;
- (void)addBadIpList:(id)arg1;
- (id)backupIp;
- (id)getUploadDomain;
- (id)resolveDomainIp;
- (id)getSniffPorts;
- (void)reachabilityChanged:(id)arg1;
- (void)removeApnEventListen;
- (void)apnEventNotifyListen;
- (void)clear;
- (void)updateIpStragyOnUploadThread:(id)arg1;
- (void)insertSniffedIp:(id)arg1;
- (_Bool)checkIpAvailable:(id)arg1;
- (_Bool)concurrentCheckIpAvailable;
- (void)updateValidIp;
- (void)sniffOnUploadThread;
- (void)sniff;
- (void)dealloc;
- (id)initWithType:(long long)arg1;

@end

