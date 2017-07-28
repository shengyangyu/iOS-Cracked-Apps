//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray;

@interface NBSLensSession : NSObject <NSCoding>
{
    _Bool _isFinished;
    unsigned long long _sessionTimeInSeconds;
    unsigned long long _sessionDuration;
    unsigned long long _requestCount;
    NSArray *_pageFlows;
    NSArray *_customerEvents;
    unsigned long long _sessionSuspendInSeconds;
    unsigned long long _suspendTime;
}

@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) unsigned long long suspendTime; // @synthesize suspendTime=_suspendTime;
@property(nonatomic) unsigned long long sessionSuspendInSeconds; // @synthesize sessionSuspendInSeconds=_sessionSuspendInSeconds;
@property(retain, nonatomic) NSArray *customerEvents; // @synthesize customerEvents=_customerEvents;
@property(retain, nonatomic) NSArray *pageFlows; // @synthesize pageFlows=_pageFlows;
@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) unsigned long long sessionDuration; // @synthesize sessionDuration=_sessionDuration;
@property(nonatomic) unsigned long long sessionTimeInSeconds; // @synthesize sessionTimeInSeconds=_sessionTimeInSeconds;
- (void).cxx_destruct;
- (id)render;
- (void)removeSessionFromDiskAtPath:(id)arg1;
- (void)saveToDiskAtPath:(id)arg1;
- (void)clearSession;
- (void)sessionFinished;
- (void)sessionSuspend;
- (void)sessionContinue;
- (void)sessionStart;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

