//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSMutableArray, NSTimer, TXYReqPacket, TXYUploadManager, TXYUploadSessionRunner;

@interface TXYUploadReqeust : NSOperation
{
    _Bool _finished;
    _Bool _inProgress;
    _Bool _markFinished;
    _Bool _markDelayCancel;
    _Bool _markNotifyCalled;
    TXYUploadSessionRunner *_sessionMgr;
    TXYReqPacket *_packet;
    NSTimer *_dataTimer;
    long long _dataTimeoutSecs;
    double _fileTime;
    double _controlSendTime;
    double _dataSendTime;
    int _retryCnt;
    long long _connectRetryCnt;
    unsigned long long _timeoutType;
    _Bool _isSuccess;
    unsigned long long _state;
    TXYUploadManager *_uploadManager;
    long long _cloudType;
    NSMutableArray *_sessionRunners;
}

+ (id)descState:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableArray *sessionRunners; // @synthesize sessionRunners=_sessionRunners;
@property(nonatomic) long long cloudType; // @synthesize cloudType=_cloudType;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(retain, nonatomic) TXYUploadManager *uploadManager; // @synthesize uploadManager=_uploadManager;
@property(retain) TXYReqPacket *packet; // @synthesize packet=_packet;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)markAsFinished;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isConcurrent;
- (void)finishAsync;
- (void)finishUpload;
- (void)cancelOnUploadThread;
- (void)cancel;
- (void)buildConnection;
- (_Bool)allSessionsError;
- (void)resetRequestParam;
- (void)handlePacketSendFail:(id)arg1;
- (void)sendNextFile;
- (void)main;
- (void)start;
- (void)dealloc;
- (id)initWithPacket:(id)arg1;
- (id)init;
- (void)notifyRequestCancel;
- (void)notifyRequestFinish;
- (void)notifyUserComplete:(id)arg1;
- (void)notifySuccess:(id)arg1;
- (void)notifyFail:(id)arg1;
- (void)notifyProgress:(long long)arg1 total:(long long)arg2;
- (_Bool)isUserCareState:(long long)arg1;
- (void)notifyState:(long long)arg1;
- (int)switchIPTypeToDetectType:(int)arg1;
- (void)reportUploadError:(int)arg1 log:(id)arg2;
- (void)reportUploadSuccss:(double)arg1 fastUpload:(_Bool)arg2 reportURL:(id)arg3;
- (void)resendFile;
- (void)sendFilePacket;
- (void)sendControlPacket;
- (void)sendPacket;
- (void)sendDataWithSessionRunner:(id)arg1;
- (void)setupMutilSessions:(long long)arg1;
- (void)cancelDataTimer;
- (void)dataInteractTimeOut:(id)arg1;
- (void)updateDataTimer;
- (void)resetSessionRunner;
- (void)tryNextSession;
- (id)networkString;
- (int)networkType;
- (_Bool)checkActiveSessionStatus;
- (_Bool)checkTimerState;
- (_Bool)checkPacketStatus;
- (void)checkRequestStatus;
- (void)reportSucess:(_Bool)arg1 reportURL:(id)arg2;
- (void)printErrorLog:(id)arg1 resp:(id)arg2;
- (void)processRespError:(id)arg1;
- (void)handlerUploadSuccess:(id)arg1 fastUpload:(_Bool)arg2;
- (void)processCommandResp:(id)arg1;
- (void)processFileResp:(id)arg1;
- (void)processControlResp:(id)arg1;
- (void)processDecodeResp:(id)arg1;
- (void)decodePacket:(id)arg1;
- (void)processRecvData:(id)arg1;
- (void)sessionMgrNotifyIpFind:(id)arg1 session:(id)arg2 info:(id)arg3;
- (void)sessionMgrNotifyApnChanged:(id)arg1 session:(id)arg2 info:(id)arg3;
- (void)sessionMgrNotifyProgress:(id)arg1 session:(id)arg2 info:(id)arg3;
- (void)sessionMgrNotifySendResultState:(id)arg1 session:(id)arg2 info:(id)arg3;
- (void)sessionMgrNotifyData:(id)arg1 session:(id)arg2 info:(id)arg3;
- (_Bool)allSessionsUnvailable;
- (void)sessionMgrNotifyFail:(id)arg1 session:(id)arg2 info:(id)arg3;
- (void)sessionMgrNotifySuccess:(id)arg1 session:(id)arg2 info:(id)arg3;

@end

