//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQCrashDataCounter : NSObject
{
}

+ (id)shareInstance;
- (void)recordEnterForeground;
- (void)recordCrash;
- (void)addCurrentDateToHistoryDates:(id)arg1 name:(id)arg2;
- (void)storeDates:(id)arg1 forName:(id)arg2;
- (void)reportData;
- (long long)getCountByArr:(id)arg1;
- (id)getDateInfoWithName:(id)arg1;
- (long long)dayWithDate:(id)arg1;

@end
