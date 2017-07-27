//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBaseEngine.h"

@interface QZHomePageEngineV2 : QZBaseEngine
{
}

+ (id)instance;
- (long long)setCustomListSwitch:(int)arg1 valueBits:(int)arg2;
- (long long)deleteVisitRecord:(long long)arg1;
- (long long)setNickBlinkFlag:(long long)arg1 flag:(_Bool)arg2;
- (long long)getNickBlinkFlag:(long long)arg1;
- (long long)getVisitorNotify:(long long)arg1;
- (id)getLocalSettingsWithKey:(id)arg1;
- (void)saveLocalSettings:(id)arg1 withKey:(id)arg2;
- (long long)setCoverWithInfo:(id)arg1 isSendFeed:(_Bool)arg2;
- (long long)getPhotoWallWithUin:(long long)arg1 attach:(id)arg2;
- (long long)getConcernRecomm:(long long)arg1 attachInfo:(id)arg2;
- (long long)setConcern:(_Bool)arg1 objuin:(long long)arg2 feedModel:(id)arg3 source:(long long)arg4;
- (long long)setBlackListActionType:(int)arg1 uinList:(id)arg2 userParam:(id)arg3;
- (long long)getBlackList:(id)arg1;
- (long long)setUnCareListActionType:(int)arg1 uinList:(id)arg2 userParam:(id)arg3;
- (long long)getSpaceRight:(long long)arg1 actionType:(long long)arg2 userParam:(id)arg3;
- (id)getLocalSpaceRightSettings;
- (long long)requestVerifyRightsWithfriendUin:(long long)arg1 question:(id)arg2 answer:(id)arg3;
- (long long)setVisitSpaceRight:(long long)arg1 visituin:(long long)arg2 content:(id)arg3;
- (long long)getPersonalProfile:(long long)arg1 params:(id)arg2;
- (long long)getLocalPersonalProfile:(long long)arg1;

@end
