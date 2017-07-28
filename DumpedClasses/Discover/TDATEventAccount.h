//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TDATEventAccount : NSObject
{
}

+ (void)missionFailed:(id)arg1 failedCause:(id)arg2;
+ (void)missionCompleted:(id)arg1;
+ (void)missionBegin:(id)arg1;
+ (void)setRoleInfoInteger:(long long)arg1 forKey:(id)arg2;
+ (void)setRoleInfoString:(id)arg1 forKey:(id)arg2;
+ (void)setRoleName:(id)arg1;
+ (void)roleDelete;
+ (void)roleCreate:(id)arg1;
+ (void)updateRoleProfile:(id)arg1;
+ (void)setInfoInteger:(long long)arg1 forKey:(id)arg2;
+ (void)setInfoString:(id)arg1 forKey:(id)arg2;
+ (void)setGameServer:(id)arg1;
+ (void)setLevel:(int)arg1;
+ (void)setType:(id)arg1;
+ (void)setGender:(unsigned long long)arg1;
+ (void)setAge:(int)arg1;
+ (void)setName:(id)arg1;
+ (void)setAccountId:(id)arg1;
+ (void)logout;
+ (void)login:(id)arg1;
+ (void)registerAccount:(id)arg1;
+ (void)updateProfile:(id)arg1 withSubmoduleType:(unsigned long long)arg2;

@end

