//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBQPPromotion, FBUserSession;
@protocol FBNuxBannerControllerDelegate;

@protocol FBNuxBannerViewController <NSObject>
@property(nonatomic) __weak id <FBNuxBannerControllerDelegate> delegate;
- (id)initWithSession:(FBUserSession *)arg1 promotion:(FBQPPromotion *)arg2;

@optional
- (double)heightWithFrame:(struct CGRect)arg1;
@end
