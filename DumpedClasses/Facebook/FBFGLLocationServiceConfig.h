//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBFGLLogger, NSSet;

@interface FBFGLLocationServiceConfig : NSObject
{
    NSSet *_allFetcherIds;
    NSSet *_allFetchers;
    FBFGLLogger *_logger;
    _Bool _fireTriggerUponForeground;
    _Bool _expireOldSignal;
    double _periodicity;
    double _minimumFetchInterval;
    double _maximumSignalAge;
    double _maximumSignalsCollectionTime;
}

@property(readonly, nonatomic) double maximumSignalsCollectionTime; // @synthesize maximumSignalsCollectionTime=_maximumSignalsCollectionTime;
@property(readonly, nonatomic) _Bool expireOldSignal; // @synthesize expireOldSignal=_expireOldSignal;
@property(readonly, nonatomic) double maximumSignalAge; // @synthesize maximumSignalAge=_maximumSignalAge;
@property(readonly, nonatomic) _Bool fireTriggerUponForeground; // @synthesize fireTriggerUponForeground=_fireTriggerUponForeground;
@property(readonly, nonatomic) double minimumFetchInterval; // @synthesize minimumFetchInterval=_minimumFetchInterval;
@property(readonly, nonatomic) double periodicity; // @synthesize periodicity=_periodicity;
- (void).cxx_destruct;
- (id)allFetcherIds;
- (id)allFetchers;
- (void)_generateFetcherIds;
- (id)initWithPeriodicity:(double)arg1 maximumSignalAge:(double)arg2 maximumSignalsCollectionTime:(double)arg3 fetchers:(id)arg4 minimumFetchInterval:(double)arg5 logger:(id)arg6 fireTriggerUponForeground:(_Bool)arg7 expireOldSignal:(_Bool)arg8;

@end
