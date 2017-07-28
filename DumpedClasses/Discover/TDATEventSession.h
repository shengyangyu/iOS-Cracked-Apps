//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTimer;

@interface TDATEventSession : NSObject
{
    unsigned int _tag;
    int _type;
    int _duration;
    NSString *_sessionId;
    long long _activeTime;
    long long _startTime;
    long long _endTime;
    NSTimer *_timer;
}

+ (id)sessionWithSubmoduleTag:(unsigned int)arg1;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long activeTime; // @synthesize activeTime=_activeTime;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) unsigned int tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (void)enterForeground:(id)arg1;
- (void)enterBackground:(id)arg1;
- (void)updateTime;
- (void)onEnd;
- (void)onBegin;
- (void)doCheckSessionWithType:(unsigned int)arg1;
- (void)doCheckSession;
- (void)setUpListeners;
- (void)dealloc;
- (id)archiveToDictionary;
- (id)initWithDictionary:(id)arg1;

@end

