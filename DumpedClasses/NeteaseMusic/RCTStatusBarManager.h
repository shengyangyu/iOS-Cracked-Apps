//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTEventEmitter.h"

@interface RCTStatusBarManager : RCTEventEmitter
{
}

+ (id)__rct_export__1253;
+ (id)__rct_export__1142;
+ (id)__rct_export__1021;
+ (id)__rct_export__940;
+ (void)load;
+ (id)moduleName;
- (void)setNetworkActivityIndicatorVisible:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1 withAnimation:(long long)arg2;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)getHeight:(CDUnknownBlockType)arg1;
- (void)applicationWillChangeStatusBarFrame:(id)arg1;
- (void)applicationDidChangeStatusBarFrame:(id)arg1;
- (void)emitEvent:(id)arg1 forNotification:(id)arg2;
- (id)methodQueue;
- (void)stopObserving;
- (void)startObserving;
- (id)supportedEvents;

@end
