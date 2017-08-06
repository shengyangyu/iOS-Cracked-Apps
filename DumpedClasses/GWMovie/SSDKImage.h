//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MOBFImageGetter, MOBFImageObserver, NSURL;

@interface SSDKImage : NSObject
{
    MOBFImageGetter *_theGetter;
    MOBFImageObserver *_theObserver;
    NSURL *_URL;
}

+ (id)imageWithObject:(id)arg1;
+ (id)checkThumbImageSize:(id)arg1;
+ (void)getImage:(id)arg1 onResult:(CDUnknownBlockType)arg2;
+ (void)getImage:(id)arg1 thumbImagePath:(id)arg2 result:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) MOBFImageObserver *theObserver; // @synthesize theObserver=_theObserver;
@property(retain, nonatomic) MOBFImageGetter *theGetter; // @synthesize theGetter=_theGetter;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)getNativeImage:(CDUnknownBlockType)arg1;
- (id)initWithImage:(id)arg1 format:(id)arg2 settings:(id)arg3;
- (id)initWithURL:(id)arg1;

@end
