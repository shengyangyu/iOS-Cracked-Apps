//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YLUTDBaseModel.h"

@class NSDictionary;

@interface YLUTDAppContext : YLUTDBaseModel
{
    long long _type;
    NSDictionary *_model;
}

@property(retain, nonatomic) NSDictionary *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)archiveModel;
- (void)unArchiveModel:(long long)arg1;
- (id)archiveToDictionary;

@end

