//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TuSDKDataJson.h"

@interface TuSDKPermission : TuSDKDataJson
{
    long long _resolution;
    long long _stickerUseCount;
    long long _localFilterCount;
    long long _localStickerCount;
}

@property(nonatomic) long long localStickerCount; // @synthesize localStickerCount=_localStickerCount;
@property(nonatomic) long long localFilterCount; // @synthesize localFilterCount=_localFilterCount;
@property(nonatomic) long long stickerUseCount; // @synthesize stickerUseCount=_stickerUseCount;
@property(nonatomic) long long resolution; // @synthesize resolution=_resolution;
- (void)deserializationWithJson:(id)arg1;

@end

