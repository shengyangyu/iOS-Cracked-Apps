//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TuSDKCPOnlineController.h"

#import "TuSDKFilterLocalPackageDelegate.h"

@class NSString;

@interface TuSDKPFFilterOnlineControllerBase : TuSDKCPOnlineController <TuSDKFilterLocalPackageDelegate>
{
}

- (void)filterManager:(id)arg1 item:(id)arg2 changedStatus:(long long)arg3;
- (void)onHandleDetailWithID:(unsigned long long)arg1;
- (void)onHandleSelectedWithID:(unsigned long long)arg1;
- (void)handleDetail:(id)arg1;
- (void)handleSelected:(id)arg1;
- (void)onResourceCancelDownloadWithIdt:(unsigned long long)arg1;
- (void)onResourceDownloadWithIdt:(unsigned long long)arg1 key:(id)arg2 fileId:(id)arg3;
- (id)pageFinishedData;
- (void)controllerWillDestory;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

