//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MQQPFRecordCenter : NSObject
{
    long long _dataSourceTotalCount;
    NSMutableDictionary *_filterOptionDataDictionary;
}

+ (id)sharedRecordCenter;
- (void)didSmartSelectWithSelects:(long long)arg1 overs:(long long)arg2 forOption:(unsigned long long)arg3;
- (void)didSmartSelectWithCorrects:(long long)arg1 wrongs:(long long)arg2 forOption:(unsigned long long)arg3;
- (void)photoJourneyDidStartWithHits:(id)arg1;
- (void)didCleanPhotosWithCount:(long long)arg1 capacity:(long long)arg2 forOption:(unsigned long long)arg3;
- (void)addCount:(long long)arg1 toOption:(unsigned long long)arg2 withKey:(id)arg3;
- (void)setValue:(long long)arg1 forOption:(unsigned long long)arg2 withKey:(id)arg3;
- (void)reportCachedBeaconData;
- (void)clearCachedProcessBeaconData;
- (void)cacheProcessBeaconData;
- (void)reportBeaconData;
- (void)setDataSourceTotalCount:(long long)arg1;
- (void)readDataSourceTotalCount;
- (void)dealloc;
- (id)init;
- (id)firstCleanTime;
- (id)gatheredCleanRecordsWithOptions:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (id)cleanRecordsWithOptions:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (id)allCleanRecords;
- (_Bool)addCleanRecordWithOption:(unsigned long long)arg1 count:(long long)arg2 capacity:(long long)arg3;
- (id)filterRecordFromAsset:(id)arg1 filterOption:(unsigned long long)arg2 datetime:(id)arg3;
- (id)filterRecordFromCleanRecord:(id)arg1;
- (id)filterRecordFromCacheItem:(id)arg1;
- (void)transformFilterRecordsFromOldData:(CDUnknownBlockType)arg1;
- (id)filterRecordsFromResultSet:(id)arg1;
- (id)gatheredFilterRecordsWithOptions:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (id)filterRecordsWithOptions:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3;
- (id)allFilterRecords;
- (_Bool)insertFilterRecordsWithResultSets:(id)arg1;
- (_Bool)insertFilterRecordsWithResultSet:(id)arg1;

@end

