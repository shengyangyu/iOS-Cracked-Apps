//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TXYTaskRsp.h"

@class NSString;

@interface TXYCreateDirCommandRsp : TXYTaskRsp
{
    _Bool _overwrite;
    long long _ctime;
    NSString *_accessUrl;
}

@property(retain, nonatomic) NSString *accessUrl; // @synthesize accessUrl=_accessUrl;
@property(nonatomic) long long ctime; // @synthesize ctime=_ctime;
@property(nonatomic) _Bool overwrite; // @synthesize overwrite=_overwrite;
- (void).cxx_destruct;

@end

