//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView, XYPHSearchQueryUsersCellAdapter;

@interface XYPHSearchResultUsersViewController : XYPHBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_keyword;
    NSString *_source;
    NSMutableArray *_searchResults;
    UITableView *_tableView;
    XYPHSearchQueryUsersCellAdapter *_cellAdapter;
    unsigned long long _pageNow;
}

@property(nonatomic) unsigned long long pageNow; // @synthesize pageNow=_pageNow;
@property(retain, nonatomic) XYPHSearchQueryUsersCellAdapter *cellAdapter; // @synthesize cellAdapter=_cellAdapter;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadMoreData;
- (void)searchUsers;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

