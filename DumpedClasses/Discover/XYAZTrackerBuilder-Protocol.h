//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, XYAZEmitter, XYAZSubject;

@protocol XYAZTrackerBuilder <NSObject>
- (void)setSessionContext:(_Bool)arg1;
- (void)setTrackerNamespace:(NSString *)arg1;
- (void)setBase64Encoded:(_Bool)arg1;
- (void)setAppId:(NSString *)arg1;
- (void)setSubject:(XYAZSubject *)arg1;
- (void)setEmitter:(XYAZEmitter *)arg1;
@end

