//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (TuSDKTSDateExtend)
+ (id)dateFromRFC1123:(id)arg1;
- (id)rfc1123String;
- (id)weekdayName;
- (id)dateFormat:(id)arg1;
- (id)getCurrentLocal;
- (_Bool)sameMonthWithDate:(id)arg1;
- (_Bool)sameWeekWithDate:(id)arg1;
- (_Bool)sameDayWithDate:(id)arg1;
- (id)followingDay;
- (id)previousDay;
- (id)associateDayOfTheFollowingWeek;
- (id)associateDayOfThePreviousWeek;
- (unsigned long long)weekOfDayInYear;
- (unsigned long long)weekOfDayInMonth;
- (unsigned long long)numberOfDaysInTheWeekInMonth;
- (id)firstDayOfTheWeekInTheMonth;
- (id)firstDayOfTheFirstWeekInFollowingMonth;
- (id)firstDayOfTheFollowingWeekInTheMonth;
- (id)firstDayOfTheLastWeekInPreviousMonth;
- (id)firstDayOfThePreviousWeekInTheMonth;
- (id)firstDayOfTheWeek;
- (unsigned long long)numberOfWeeksInMonth;
- (unsigned long long)numberOfDaysInMonth;
- (id)associateDayOfTheFollowingMonth;
- (id)associateDayOfThePreviousMonth;
- (id)firstDayOfTheFollowingMonth;
- (id)firstDayOfThePreviousMonth;
- (id)lastDayOfTheMonth;
- (id)firstDayOfTheMonth;
- (id)endOfDay;
- (id)beginingOfDay;
- (unsigned long long)week;
- (unsigned long long)weekday;
- (unsigned long long)second;
- (unsigned long long)minute;
- (unsigned long long)hour;
- (unsigned long long)day;
- (unsigned long long)month;
- (unsigned long long)year;
- (long long)weekdayOrdinal;
- (id)componentsOfDay;
@end

