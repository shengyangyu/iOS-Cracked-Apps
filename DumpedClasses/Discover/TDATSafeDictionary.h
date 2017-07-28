//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TDATSafeDictionary : NSObject
{
    NSMutableDictionary *_internalDic;
}

+ (id)safeDictionary;
- (void).cxx_destruct;
- (void)removeObjectForKey:(id)arg1;
- (double)doubleValueForKey:(id)arg1;
- (_Bool)boolValueForKey:(id)arg1;
- (unsigned long long)uint64ValueForKey:(id)arg1;
- (long long)int64ValueForKey:(id)arg1;
- (long long)integerValueForKey:(id)arg1;
- (int)intValueForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)safeSetDouble:(double)arg1 forKey:(id)arg2;
- (void)safeSetBool:(_Bool)arg1 forKey:(id)arg2;
- (void)safeSetUint64:(unsigned long long)arg1 forKey:(id)arg2;
- (void)safeSetInt64:(long long)arg1 forKey:(id)arg2;
- (void)safeSetInteger:(long long)arg1 forKey:(id)arg2;
- (void)safeSetInt:(int)arg1 forKey:(id)arg2;
- (void)safeSetObject:(id)arg1 forKey:(id)arg2;
- (id)getDictionary;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

