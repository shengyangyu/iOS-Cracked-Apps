//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AFNetworkActivityLoggerProtocol-Protocol.h"

@class NSPredicate, NSString;

@interface AFNetworkActivityConsoleLogger : NSObject <AFNetworkActivityLoggerProtocol>
{
    NSPredicate *_filterPredicate;
    unsigned long long _level;
}

@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
- (void).cxx_destruct;
- (void)URLSessionTaskDidFinish:(id)arg1 withResponseObject:(id)arg2 inElapsedTime:(double)arg3 withError:(id)arg4;
- (void)URLSessionTaskDidStart:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
