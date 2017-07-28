//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabaseQueue, NSString;

@interface XYAZEventStorage : NSObject
{
    NSString *_dbPath;
    FMDatabaseQueue *_queue;
}

- (void).cxx_destruct;
- (long long)getLastInsertedRowId;
- (id)getAllEventsWithQuery:(id)arg1;
- (id)getAllEventsLimited:(unsigned long long)arg1;
- (id)getAllEvents;
- (id)getEventWithId:(long long)arg1;
- (unsigned long long)count;
- (void)removeAllEvents;
- (_Bool)removeEventWithId:(long long)arg1;
- (long long)insertDictionaryData:(id)arg1;
- (long long)insertEvent:(id)arg1;
- (_Bool)createTable;
- (void)dealloc;
- (id)init;

@end

