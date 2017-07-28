//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface MOBFBigInteger : NSObject <NSCoding>
{
    CDStruct_c40cccb6 _value;
}

+ (_Bool)canParseBigIntegerFromString:(id)arg1 radix:(int)arg2;
+ (id)one;
@property(nonatomic) CDStruct_c40cccb6 value; // @synthesize value=_value;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (void)getUnsignBytes:(void **)arg1 length:(int *)arg2;
- (void)getBytes:(void **)arg1 length:(int *)arg2;
- (long long)toInteger;
- (id)toString:(int)arg1;
- (id)toString;
- (long long)compare:(id)arg1;
- (id)modInverseByInteger:(long long)arg1;
- (id)modInverseByBigInteger:(id)arg1;
- (id)gcdByInteger:(long long)arg1;
- (id)gcdByBigInteger:(id)arg1;
- (id)shiftRight:(int)arg1;
- (id)shiftLeft:(int)arg1;
- (id)bitwiseAndByInteger:(long long)arg1;
- (id)bitwiseAndByBigInteger:(id)arg1;
- (id)bitwiseOrByInteger:(long long)arg1;
- (id)bitwiseOrByBigInteger:(id)arg1;
- (id)bitwiseXorByInteger:(long long)arg1;
- (id)bitwiseXorByBigInteger:(id)arg1;
- (id)abs;
- (id)negate;
- (id)pow:(id)arg1 mod:(id)arg2;
- (id)pow:(unsigned long long)arg1;
- (id)reminderByInteger:(long long)arg1;
- (id)reminderByBigInteger:(id)arg1;
- (id)divideByInteger:(long long)arg1;
- (id)divideByBigInteger:(id)arg1;
- (id)divideAndReminderByInteger:(long long)arg1;
- (id)divideAndReminderByBigInteger:(id)arg1;
- (id)multiplyByInteger:(long long)arg1;
- (id)multiplyByBigInteger:(id)arg1;
- (id)subByInteger:(long long)arg1;
- (id)subByBigInteger:(id)arg1;
- (id)addByInteger:(long long)arg1;
- (id)addByBigInteger:(id)arg1;
- (void)dealloc;
- (id)initWithUnsignedBytes:(const void *)arg1 size:(int)arg2;
- (id)initWithBytes:(const void *)arg1 size:(int)arg2;
- (id)initWithRandomPremeBits:(int)arg1;
- (id)initWithString:(id)arg1 radix:(int)arg2;
- (id)initWithString:(id)arg1;
- (id)initWithBigInteger:(id)arg1;
- (id)initWithInt:(long long)arg1;
- (id)init;

@end

