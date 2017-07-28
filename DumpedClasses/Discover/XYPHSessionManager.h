//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XYPHMe;

@interface XYPHSessionManager : NSObject
{
    XYPHMe *_user;
}

+ (void)setRestKitAuthorityHeader;
+ (void)requestAddAuthorityHeader:(id)arg1;
+ (void)requestUserInfo:(CDUnknownBlockType)arg1;
+ (void)showLoginView:(CDUnknownBlockType)arg1;
+ (_Bool)isLogin;
+ (void)getUserInfo:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) XYPHMe *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)MigratingFromOldSession:(id)arg1;
- (void)loginSuccess;
- (void)loginFail:(id)arg1;
- (void)clearShuduizhangMessage;
- (void)logout:(CDUnknownBlockType)arg1;
- (void)registerPhone:(id)arg1 withZone:(id)arg2 withMobileToken:(id)arg3 withNickname:(id)arg4 withPassword:(id)arg5 withGender:(long long)arg6 withRegisterCompletion:(CDUnknownBlockType)arg7;
- (void)loginWithPhone:(id)arg1 withZone:(id)arg2 withMobileToken:(id)arg3 withLoginCompletion:(CDUnknownBlockType)arg4;
- (void)loginWithPhone:(id)arg1 withZone:(id)arg2 withPassword:(id)arg3 withLoginCompletion:(CDUnknownBlockType)arg4;
- (void)loginWithWechat:(CDUnknownBlockType)arg1;
- (void)loginWithWeibo:(CDUnknownBlockType)arg1;
- (void)loginWithQQ:(CDUnknownBlockType)arg1;
- (id)init;

@end

