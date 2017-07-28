//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CAGradientLayer, NSMutableArray, NSString, UIButton, UIImage, UILabel, UITableView, UIView, UIViewController, XYPHBoard;

@interface XYPHBetaWishBoardNoteAddingController : XYPHBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _fromPublish;
    _Bool _needRefresh;
    _Bool _boardListDownloading;
    UIViewController *_rootViewController;
    NSString *_noteId;
    NSString *_notesId;
    NSString *_notesBoardId;
    NSString *_discoveryImage;
    UIImage *_discoveryImageData;
    NSString *_topTitleString;
    NSMutableArray *_listArray;
    CDUnknownBlockType _addBoardSuccess;
    long long _boardListPage;
    UIView *_containerView;
    UIView *_topContainerView;
    UILabel *_titleLabel;
    UIButton *_addNewButton;
    UIView *_topDividerView;
    UITableView *_listTableView;
    UIView *_bottomContainerView;
    UIButton *_confirmButton;
    CAGradientLayer *_bottomShadowLayer;
    XYPHBoard *_selectedBoard;
}

@property(nonatomic) XYPHBoard *selectedBoard; // @synthesize selectedBoard=_selectedBoard;
@property _Bool boardListDownloading; // @synthesize boardListDownloading=_boardListDownloading;
@property _Bool needRefresh; // @synthesize needRefresh=_needRefresh;
@property(retain, nonatomic) CAGradientLayer *bottomShadowLayer; // @synthesize bottomShadowLayer=_bottomShadowLayer;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
@property(retain, nonatomic) UITableView *listTableView; // @synthesize listTableView=_listTableView;
@property(retain, nonatomic) UIView *topDividerView; // @synthesize topDividerView=_topDividerView;
@property(retain, nonatomic) UIButton *addNewButton; // @synthesize addNewButton=_addNewButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topContainerView; // @synthesize topContainerView=_topContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property long long boardListPage; // @synthesize boardListPage=_boardListPage;
@property(copy, nonatomic) CDUnknownBlockType addBoardSuccess; // @synthesize addBoardSuccess=_addBoardSuccess;
@property(nonatomic) _Bool fromPublish; // @synthesize fromPublish=_fromPublish;
@property(retain, nonatomic) NSMutableArray *listArray; // @synthesize listArray=_listArray;
@property(retain, nonatomic) NSString *topTitleString; // @synthesize topTitleString=_topTitleString;
@property(retain, nonatomic) UIImage *discoveryImageData; // @synthesize discoveryImageData=_discoveryImageData;
@property(copy, nonatomic) NSString *discoveryImage; // @synthesize discoveryImage=_discoveryImage;
@property(copy, nonatomic) NSString *notesBoardId; // @synthesize notesBoardId=_notesBoardId;
@property(copy, nonatomic) NSString *notesId; // @synthesize notesId=_notesId;
@property(copy, nonatomic) NSString *noteId; // @synthesize noteId=_noteId;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)confirmButtonPressed:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)requestAddToBoard:(id)arg1;
- (void)requestBoardList;
- (void)showBoardAddingView:(id)arg1;
- (void)addBoardButtonClicked;
- (void)dismissAddBoard;
- (void)confirm;
- (void)setupConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

