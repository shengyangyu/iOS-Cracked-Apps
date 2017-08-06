//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GWPayManager, GWPayOrder, NSError;

@protocol GWPayManagerDelegate <NSObject>

@optional
- (void)payManager:(GWPayManager *)arg1 willCallThirdPay:(GWPayOrder *)arg2;
- (void)payManager:(GWPayManager *)arg1 confirmPayDidFinished:(_Bool)arg2 error:(NSError *)arg3;
- (void)payManager:(GWPayManager *)arg1 confirmPayMethodDidFinished:(id)arg2 error:(NSError *)arg3;
@end
