//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class KTVPlayerBaseInfo, NSString;

@interface KTV_StarInfo : KTVObjectModel
{
    KTVPlayerBaseInfo *_playerBaseInfo;
    long long _opusId;
    NSString *_opusName;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSString *opusName; // @synthesize opusName=_opusName;
@property(nonatomic) long long opusId; // @synthesize opusId=_opusId;
@property(retain, nonatomic) KTVPlayerBaseInfo *playerBaseInfo; // @synthesize playerBaseInfo=_playerBaseInfo;
- (void).cxx_destruct;

@end

