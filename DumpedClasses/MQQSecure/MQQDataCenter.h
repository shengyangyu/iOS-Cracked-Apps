//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

@interface MQQDataCenter : NSObject
{
    NSUserDefaults *_defaultGroupUserDefaults;
    _Bool _appGroupsAvailable;
}

+ (id)defaultCenter;
@property(nonatomic) _Bool appGroupsAvailable; // @synthesize appGroupsAvailable=_appGroupsAvailable;
@property(readonly, nonatomic) NSString *defaultGroupPath;
@property(readonly, nonatomic) NSUserDefaults *defaultGroupUserDefaults;
@property(readonly, nonatomic) NSString *defaultGroupIdentifier;
@property(readonly, nonatomic) NSUserDefaults *standardUserDefaults;
- (void)dealloc;
- (id)init;
- (_Bool)transferToAppGroupsForV_4_9;
- (_Bool)transferToAppGroups;
- (_Bool)linkFileFromPath:(id)arg1 toPath:(id)arg2;
- (void)transferObjectsWithKeys:(id)arg1 fromDefaults:(id)arg2 toDefaults:(id)arg3;
- (_Bool)shouldTransferToAppGroups;
- (void)setTransferredVersion:(long long)arg1;
@property(readonly, nonatomic) long long transferredVersion;
@property(readonly, nonatomic) long long version;

@end
