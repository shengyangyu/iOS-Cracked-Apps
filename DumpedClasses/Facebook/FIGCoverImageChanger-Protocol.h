//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemPhoto, UIImage;

@protocol FIGCoverImageChanger <NSObject>
- (void)didSelectNewCoverImage:(UIImage *)arg1 didChangeCoverImageBlock:(void (^)(void))arg2 didFailToChangeCoverImageBlock:(void (^)(void))arg3;
- (void)didSelectNewCoverImageWithExistingPhoto:(FBMemPhoto *)arg1 didChangeCoverImageBlock:(void (^)(void))arg2 didFailToChangeCoverImageBlock:(void (^)(void))arg3;
@end
