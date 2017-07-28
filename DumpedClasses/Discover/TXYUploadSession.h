//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TXYConnectionDelegate.h"

@class NSString, NSTimer, TXYUpIpInfo, TXYUploadConnection, TXYUploadTraceString;

@interface TXYUploadSession : NSObject <TXYConnectionDelegate>
{
    TXYUploadConnection *_connection;
    NSTimer *_timer;
    _Bool _isRedirect;
    int _status;
    int _state;
    TXYUpIpInfo *_ipModel;
    long long _priority;
    TXYUploadTraceString *_log;
    NSString *_clientIp;
    double _handShakeTime;
    id <UpSessionDelegate> _delegate;
    long long _cloudType;
}

+ (id)descState:(int)arg1;
@property(nonatomic) long long cloudType; // @synthesize cloudType=_cloudType;
@property(nonatomic) __weak id <UpSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double handShakeTime; // @synthesize handShakeTime=_handShakeTime;
@property(readonly, nonatomic) NSString *clientIp; // @synthesize clientIp=_clientIp;
@property(retain, nonatomic) TXYUploadTraceString *log; // @synthesize log=_log;
@property(nonatomic) _Bool isRedirect; // @synthesize isRedirect=_isRedirect;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) TXYUpIpInfo *ipModel; // @synthesize ipModel=_ipModel;
- (void).cxx_destruct;
- (int)inputStreamStatus;
- (void)Notify:(id)arg1 writeNum:(long long)arg2 totalNum:(long long)arg3;
- (void)Notify:(id)arg1 SendResultState:(int)arg2 length:(int)arg3;
- (void)Notify:(id)arg1 Data:(id)arg2;
- (void)Notify:(id)arg1 oldState:(int)arg2 newState:(int)arg3 errCode:(int)arg4 msg:(id)arg5;
- (_Bool)isRedirectAvailable:(id)arg1 to:(id)arg2;
- (_Bool)processHandshakeResp:(id)arg1;
- (void)performHandshake;
- (void)stopHandshakeTimer;
- (void)startHandshakeTimer;
- (void)handshakeTimeout;
- (void)processHandshakeResult:(int)arg1 info:(id)arg2 msg:(id)arg3;
- (void)handshakeSendResult:(int)arg1;
- (_Bool)isError;
- (_Bool)isConnected;
- (_Bool)isActive;
- (_Bool)isOk;
- (_Bool)sendRaw:(id)arg1;
- (_Bool)send:(id)arg1;
- (void)cancel;
- (void)run;
- (void)sessionNotifyResult:(int)arg1 info:(id)arg2 msg:(id)arg3;
- (void)dealloc;
- (id)initWithModel:(id)arg1 delegate:(id)arg2 cloudType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
