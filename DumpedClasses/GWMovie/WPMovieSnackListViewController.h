//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WPOrderSnackListCellDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, UILabel, UITableView, UIView, WPSnackModel;

@interface WPMovieSnackListViewController : GWBaseViewController <UITableViewDelegate, UITableViewDataSource, WPOrderSnackListCellDelegate>
{
    UIView *_mainView;
    UITableView *_tableView;
    id _delegate;
    NSArray *_snackArray;
    WPSnackModel *_selectedSnack;
    UILabel *_totalPriceLabel;
    UIView *_blackView;
    NSDictionary *_snackNumDict;
}

@property(retain, nonatomic) NSDictionary *snackNumDict; // @synthesize snackNumDict=_snackNumDict;
@property(nonatomic) __weak UIView *blackView; // @synthesize blackView=_blackView;
@property(nonatomic) __weak UILabel *totalPriceLabel; // @synthesize totalPriceLabel=_totalPriceLabel;
@property(retain, nonatomic) WPSnackModel *selectedSnack; // @synthesize selectedSnack=_selectedSnack;
@property(retain, nonatomic) NSArray *snackArray; // @synthesize snackArray=_snackArray;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UIView *mainView; // @synthesize mainView=_mainView;
- (void).cxx_destruct;
- (void)makesureSnackDidClick:(id)arg1;
- (void)cancel;
- (void)orderSnackListCell:(id)arg1 didChangeTotalPrice:(id)arg2;
- (void)orderSnackListCell:(id)arg1 didAddNumber:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)setupTableView;
- (void)changeTotalPrice;
- (void)startAnimation;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 snackArray:(id)arg2 selectedSnack:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
