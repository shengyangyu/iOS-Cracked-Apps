//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHAssetCollection.h"

@interface PHAssetCollection (FetchAssetCollection)
+ (id)xyph_cameraRollAssetCollection;
+ (void)xyph_createOrFindFirstAssetCollectionWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)xyph_createOrFindFirstAssetCollectionWithName:(id)arg1;
+ (id)xyph_fetchAssetCollectionsWithName:(id)arg1 options:(id)arg2;
- (long long)xyph_assetCountWithPredicate:(id)arg1;
- (long long)xyph_assetCountWithMediaType:(long long)arg1;
- (id)xyph_firstAssetWithPredicate:(id)arg1;
- (id)xyph_firstAssetWithMediaType:(long long)arg1;
@end

