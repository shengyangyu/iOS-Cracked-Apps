//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FMDatabaseQueue, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface PPao_IMDBEngine : NSObject
{
    int _readOnlyQueueCount;
    int _readOnlyQueueIndex;
    NSString *_databasePath;
    FMDatabaseQueue *_FMDBQueue;
    NSArray *_readOnlyQueues;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSArray *readOnlyQueues; // @synthesize readOnlyQueues=_readOnlyQueues;
@property(nonatomic) int readOnlyQueueIndex; // @synthesize readOnlyQueueIndex=_readOnlyQueueIndex;
@property(nonatomic) int readOnlyQueueCount; // @synthesize readOnlyQueueCount=_readOnlyQueueCount;
@property(retain, nonatomic) FMDatabaseQueue *FMDBQueue; // @synthesize FMDBQueue=_FMDBQueue;
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void).cxx_destruct;
- (void)releaseDatabase;
- (void)asyncExecuteSql:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)syncExecuteSql:(id)arg1;
- (id)syncExecuteReadOnlySql:(id)arg1;
- (void)openDatabaseWithPath:(id)arg1;

@end

