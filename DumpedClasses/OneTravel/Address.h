//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface Address : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIp; // @dynamic hasIp;
@property(nonatomic) _Bool hasPort; // @dynamic hasPort;
@property(nonatomic) _Bool hasShouldStat; // @dynamic hasShouldStat;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(copy, nonatomic) NSString *ip; // @dynamic ip;
@property(nonatomic) unsigned int port; // @dynamic port;
@property(nonatomic) _Bool shouldStat; // @dynamic shouldStat;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;

@end
