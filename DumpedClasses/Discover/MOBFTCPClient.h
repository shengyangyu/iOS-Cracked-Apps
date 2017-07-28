//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString, NSThread;

@interface MOBFTCPClient : NSObject
{
    CDStruct_e097db04 *_context;
    struct __CFReadStream *_readStream;
    struct __CFWriteStream *_writeStream;
    struct __CFRunLoop *_runloopRef;
    NSThread *_workerThread;
    unsigned int _port;
    NSString *_host;
    NSMutableData *_writeBufferData;
    unsigned long long _writeBufferOffset;
    CDUnknownBlockType _connectedHandler;
    CDUnknownBlockType _disconnectedHandler;
    CDUnknownBlockType _recevieDataHandler;
}

@property(copy, nonatomic) CDUnknownBlockType recevieDataHandler; // @synthesize recevieDataHandler=_recevieDataHandler;
@property(copy, nonatomic) CDUnknownBlockType disconnectedHandler; // @synthesize disconnectedHandler=_disconnectedHandler;
@property(copy, nonatomic) CDUnknownBlockType connectedHandler; // @synthesize connectedHandler=_connectedHandler;
@property(nonatomic) unsigned long long writeBufferOffset; // @synthesize writeBufferOffset=_writeBufferOffset;
@property(retain, nonatomic) NSMutableData *writeBufferData; // @synthesize writeBufferData=_writeBufferData;
@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)writeDataToStream;
- (_Bool)setup;
- (void)onReceiveData:(CDUnknownBlockType)arg1;
- (void)onDisconnected:(CDUnknownBlockType)arg1;
- (void)onConnected:(CDUnknownBlockType)arg1;
- (void)sendData:(id)arg1;
- (void)disconnect;
- (_Bool)connect;
- (void)dealloc;
- (id)initWithHost:(id)arg1 port:(unsigned int)arg2;

@end

