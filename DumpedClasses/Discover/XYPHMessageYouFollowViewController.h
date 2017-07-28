//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "XYPHMessageYouCellDelegate.h"

@class NSMutableArray, NSString, UIButton, UILabel, UITableView, XYPHMessageYouCellAdapter;

@interface XYPHMessageYouFollowViewController : XYPHBaseViewController <UITableViewDataSource, UITableViewDelegate, XYPHMessageYouCellDelegate>
{
    _Bool _isLoading;
    _Bool _hasNewMessage;
    UITableView *_tableView;
    UIButton *_loadHistoryButton;
    UILabel *_footerLabel;
    XYPHMessageYouCellAdapter *_cellAdapter;
    NSMutableArray *_dataArray;
    unsigned long long _unreadMessageCount;
}

@property(nonatomic) _Bool hasNewMessage; // @synthesize hasNewMessage=_hasNewMessage;
@property(nonatomic) unsigned long long unreadMessageCount; // @synthesize unreadMessageCount=_unreadMessageCount;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) XYPHMessageYouCellAdapter *cellAdapter; // @synthesize cellAdapter=_cellAdapter;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UIButton *loadHistoryButton; // @synthesize loadHistoryButton=_loadHistoryButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)messageYouFanCellDidTapFollowButton:(id)arg1;
- (void)messageYouCellDidTapAvatar:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setRead;
- (void)requestMessagesWithStart:(_Bool)arg1;
- (void)loadHistory;
- (void)loadMoreData;
- (void)refresh;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

