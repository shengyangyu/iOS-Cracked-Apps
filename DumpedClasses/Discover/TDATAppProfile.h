//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TDATBaseModel.h"

@class NSString;

@interface TDATAppProfile : TDATBaseModel
{
    _Bool _cracked;
    NSString *_appKey;
    NSString *_server;
    NSString *_name;
    NSString *_globalId;
    NSString *_uniqueId;
    NSString *_displayName;
    NSString *_category;
    NSString *_vendor;
    NSString *_vendorSign;
    NSString *_channel;
    NSString *_versionName;
    NSString *_versionCode;
    long long _purchaseTime;
    long long _installTime;
    long long _updateTime;
    NSString *_packageType;
}

@property(retain, nonatomic) NSString *packageType; // @synthesize packageType=_packageType;
@property(nonatomic) long long updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) long long installTime; // @synthesize installTime=_installTime;
@property(nonatomic) long long purchaseTime; // @synthesize purchaseTime=_purchaseTime;
@property(nonatomic) _Bool cracked; // @synthesize cracked=_cracked;
@property(retain, nonatomic) NSString *versionCode; // @synthesize versionCode=_versionCode;
@property(retain, nonatomic) NSString *versionName; // @synthesize versionName=_versionName;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *vendorSign; // @synthesize vendorSign=_vendorSign;
@property(retain, nonatomic) NSString *vendor; // @synthesize vendor=_vendor;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain, nonatomic) NSString *globalId; // @synthesize globalId=_globalId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *server; // @synthesize server=_server;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (id)archiveToDictionary;

@end

