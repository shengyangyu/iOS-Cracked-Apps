//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGTableViewDelegate.h"
#import "RefreshControlDelegate.h"
#import "UITableViewDataSource.h"
#import "WatchHomeTableFallCellDelegate.h"

@class KGDefaultNetErrorView, KGTableView, KGThemeView, NSMutableArray, NSString, RefreshControl;

@interface WatchHomePopupViewController : KGViewController <KGTableViewDelegate, UITableViewDataSource, RefreshControlDelegate, WatchHomeTableFallCellDelegate>
{
    _Bool _isLoadingData;
    _Bool _isTopRefreshing;
    int _type;
    long long _tagId;
    KGTableView *_fallTableView;
    long long _pageIndex;
    NSMutableArray *_contentArray;
    KGThemeView *_themeBgView;
    RefreshControl *_refreshControl;
    KGDefaultNetErrorView *_errorView;
}

@property(retain, nonatomic) KGDefaultNetErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) RefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) KGThemeView *themeBgView; // @synthesize themeBgView=_themeBgView;
@property(nonatomic) _Bool isTopRefreshing; // @synthesize isTopRefreshing=_isTopRefreshing;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(retain, nonatomic) NSMutableArray *contentArray; // @synthesize contentArray=_contentArray;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) KGTableView *fallTableView; // @synthesize fallTableView=_fallTableView;
@property(nonatomic) long long tagId; // @synthesize tagId=_tagId;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)changeCommentsNumWithMvHash:(id)arg1 AndCommentsNum:(long long)arg2;
- (void)sendBIWithA:(int)arg1 b:(id)arg2 r:(id)arg3 fo:(id)arg4 ft:(id)arg5 sh:(id)arg6;
- (void)WatchHomeTableFallCellClick:(id)arg1;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadShortVideoRecommendData;
- (void)loadMVRecommendData;
- (void)kg_retryButtonClick:(id)arg1;
- (void)showErrorViewWithNoData;
- (void)scrollViewScrollEnabled:(_Bool)arg1;
- (void)refreshFinished;
- (void)viewInit;
- (void)initData;
- (void)viewDidLoad;
- (id)initWithType:(int)arg1 andTagId:(long long)arg2 andTitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

