//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface TTImagePickerCacheManager : NSObject
{
    unsigned long long _memoryCapacity;
    unsigned long long _preferredMemoryUsageAfterPurge;
    NSMutableDictionary *_cachedImages;
    unsigned long long _currentMemoryUsage;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;
@property(nonatomic) unsigned long long currentMemoryUsage; // @synthesize currentMemoryUsage=_currentMemoryUsage;
@property(retain, nonatomic) NSMutableDictionary *cachedImages; // @synthesize cachedImages=_cachedImages;
@property(nonatomic) unsigned long long preferredMemoryUsageAfterPurge; // @synthesize preferredMemoryUsageAfterPurge=_preferredMemoryUsageAfterPurge;
@property(nonatomic) unsigned long long memoryCapacity; // @synthesize memoryCapacity=_memoryCapacity;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) unsigned long long memoryUsage;
- (_Bool)removeAllImages;
- (_Bool)removeImageWithAssetID:(id)arg1;
- (id)getImageWithAssetID:(id)arg1;
- (void)setImage:(id)arg1 withAssetID:(id)arg2;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 preferredMemoryCapacity:(unsigned long long)arg2;
- (id)init;

@end

