//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBUserSession, NSString;
@protocol FBGroupAddMemberControllerDelegate, FBIntentHandler, FBNavigationCoordinator;

@interface FBGroupCasualGroupsFacepileToolbox : NSObject
{
    NSString *_groupID;
    FBUserSession *_session;
    id <FBNavigationCoordinator> _navigationCoordinator;
    id <FBIntentHandler> _intentHandler;
    NSString *_analyticsModule;
    id <FBGroupAddMemberControllerDelegate> _addMemberControllerDelegate;
}

@property(readonly, nonatomic) __weak id <FBGroupAddMemberControllerDelegate> addMemberControllerDelegate; // @synthesize addMemberControllerDelegate=_addMemberControllerDelegate;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) id <FBIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
- (void).cxx_destruct;
- (id)initWithGroupID:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3 intentHandler:(id)arg4 analyticsModule:(id)arg5 addMemberControllerDelegate:(id)arg6;

@end
