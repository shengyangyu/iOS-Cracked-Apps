//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLock.h"

@class NSDictionary, NSMutableArray;

@interface _priv_NBSLens_webViewDataManager : NSLock
{
    NSMutableArray *jsErrors;
    NSMutableArray *pfmDatas;
    NSDictionary *private_buf_postData;
}

+ (id)singletonObject;
- (void).cxx_destruct;
- (void)logWebPerformance:(id)arg1;
- (void)logJSException:(id)arg1;
- (void)postToServer;
- (id)getPostData;
- (void)dealloc;
- (id)init;
- (void)onNotification_post:(id)arg1;
- (void)handleMemoryWarning;

@end

