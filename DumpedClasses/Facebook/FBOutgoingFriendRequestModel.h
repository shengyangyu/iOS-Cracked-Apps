//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBMemPerson;

@interface FBOutgoingFriendRequestModel : NSObject
{
    long long _type;
    FBMemPerson *_person;
}

@property(readonly, nonatomic) FBMemPerson *person; // @synthesize person=_person;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)fbid;
- (id)initWithType:(long long)arg1 andPerson:(id)arg2;

@end
