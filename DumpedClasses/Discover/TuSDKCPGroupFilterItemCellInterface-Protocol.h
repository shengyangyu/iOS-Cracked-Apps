//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TuSDKCPGroupFilterItem;

@protocol TuSDKCPGroupFilterItemCellInterface <NSObject>
@property(retain, nonatomic) TuSDKCPGroupFilterItem *mode;
@property(readonly, nonatomic) _Bool activating;
@property(nonatomic) long long action;
- (void)stopActivating;
- (void)waitInActivate:(double)arg1;
- (_Bool)isCameraAction;
@end

