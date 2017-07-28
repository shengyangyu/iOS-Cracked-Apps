//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TuSDKNKDownloadMangerDelegate.h"

@class NSArray, NSMutableArray, NSString, TuSDKFilterAdapter;

@interface TuSDKFilterLocalPackage : NSObject <TuSDKNKDownloadMangerDelegate>
{
    TuSDKFilterAdapter *_adapter;
    NSMutableArray *_delegates;
    id <TuSDKFilterConfigDelegate> _initDelegate;
}

+ (id)initWithConfig:(id)arg1;
+ (id)package;
@property(nonatomic) id <TuSDKFilterConfigDelegate> initDelegate; // @synthesize initDelegate=_initDelegate;
- (void).cxx_destruct;
- (void)removeDelegate:(id)arg1;
- (void)appenDelegate:(id)arg1;
- (void)notifyDelegatesWithItem:(id)arg1 status:(long long)arg2;
- (id)jsonAllData;
- (void)downloadManger:(id)arg1 item:(id)arg2 changedStatus:(long long)arg3;
- (void)removeDownloadWithIdt:(unsigned long long)arg1;
- (void)cancelDownloadWithIdt:(unsigned long long)arg1;
- (void)downloadWithIdt:(unsigned long long)arg1 key:(id)arg2 fileId:(id)arg3;
- (void)cancelLoadImage:(id)arg1;
- (void)loadFilterThumbWithImageView:(id)arg1 option:(id)arg2;
- (void)loadGroupDefaultFilterThumbWithImageView:(id)arg1 group:(id)arg2;
- (void)loadGroupThumbWithImageView:(id)arg1 group:(id)arg2;
- (id)filterWithOption:(id)arg1;
- (id)loadTexturesWithCode:(id)arg1;
- (id)groupNameKeyWithGroupID:(unsigned long long)arg1;
- (id)optionsWithGroup:(id)arg1;
- (id)optionsWithCodes:(id)arg1;
- (id)verifyCodes:(id)arg1;
- (id)optionWithCode:(id)arg1;
- (id)normalOption;
@property(readonly, nonatomic) _Bool isInited;
@property(readonly, nonatomic) NSArray *groups;
@property(readonly, nonatomic) NSArray *codes;
- (void)initWithConfig:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

