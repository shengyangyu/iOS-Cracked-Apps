//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface MOBFImageLoadSession : NSObject
{
    _Bool _isLoading;
    id <MOBFImageLoadSessionDelegate> _delegate;
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_cachePath;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak id <MOBFImageLoadSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadWebImageByURL:(id)arg1;
- (void)loadLocalImageByURL:(id)arg1;
- (_Bool)existsImageCacheByURL:(id)arg1;
- (_Bool)existsImageCache;
- (void)load;
- (id)initWithURL:(id)arg1 cachePath:(id)arg2;

@end

