//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImageView;

@interface TuSDKTKImageViewTaskWare : NSObject
{
    _Bool _isCancel;
    UIImageView *_imageView;
}

+ (id)initWithImageView:(id)arg1;
@property(readonly, nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)imageLoaded:(id)arg1 loadType:(long long)arg2;
- (_Bool)isEqualView:(id)arg1;
- (void)cancel;
- (id)cacheKey;

@end

