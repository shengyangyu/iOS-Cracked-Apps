//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLRankSubItemBaseCtl.h"

#import "P_QLDragToRefresh.h"

@class NSString, QLRankMyContributionModel;

@interface QLRankMyContributionViewCtl : QLRankSubItemBaseCtl <P_QLDragToRefresh>
{
    QLRankMyContributionModel *_dataModel;
}

- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)titleForEmpty;
- (id)imageForEmpty;
- (void)retryDown:(id)arg1;
- (void)dragReload:(_Bool)arg1;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)reportShowUp;
- (void)enterPage;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithModuleInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
