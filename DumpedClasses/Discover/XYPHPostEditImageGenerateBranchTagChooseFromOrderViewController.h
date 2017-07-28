//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseTableRefreshViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, UITableView, XYPHRefreshBaseDataSource, XYPHSearchTextField;

@interface XYPHPostEditImageGenerateBranchTagChooseFromOrderViewController : XYPHBaseTableRefreshViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    XYPHRefreshBaseDataSource *_dataSource;
    id <XYPHPostEditImageGenerateBranchTagChooseFromOrderViewControllerDelegate> _delegate;
    XYPHSearchTextField *_searchTextField;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) XYPHSearchTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(nonatomic) __weak id <XYPHPostEditImageGenerateBranchTagChooseFromOrderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDataSource:(id)arg1;
- (void).cxx_destruct;
- (void)searchTextFieldDidTextChange:(id)arg1;
- (void)cancelBarButtonTouchUpInside:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)finishPullToRefresh:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)dataSource;
- (void)setup;
- (void)setupNavigationBar;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

