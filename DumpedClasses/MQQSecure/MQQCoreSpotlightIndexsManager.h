//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MQQCoreSpotlightIndexsManager : NSObject
{
}

+ (void)writeCoreSpotlightForSecureIfNeed;
+ (void)createCoreSpotlightFinish;
+ (_Bool)isCreatedCoreSpotlight;
+ (void)deleteIndexForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)indexForIdentifier:(id)arg1 title:(id)arg2 description:(id)arg3 keywords:(id)arg4;
+ (id)indexForIdentifier:(id)arg1 title:(id)arg2 description:(id)arg3 image:(id)arg4 keywords:(id)arg5;

@end
