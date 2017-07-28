//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface SSEUserManager : NSObject
{
    NSString *_currentUserLinkId;
    NSMutableDictionary *_usersDict;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSMutableDictionary *usersDict; // @synthesize usersDict=_usersDict;
@property(copy, nonatomic) NSString *currentUserLinkId; // @synthesize currentUserLinkId=_currentUserLinkId;
- (void).cxx_destruct;
- (void)save;
- (void)removeUser:(id)arg1;
- (void)addUser:(id)arg1;
@property(readonly, nonatomic) NSDictionary *users;
- (id)init;

@end

