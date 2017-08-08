//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "MQQAlertViewDelegate-Protocol.h"
#import "MQQENBPhotoTaskDelegate-Protocol.h"
#import "MQQPhotoTaskManagerDelegate-Protocol.h"
#import "MQQRefreshTableHeaderDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class MQQAlbumBrowserBottomBar, MQQAlbumProgressView, MQQBarButtonItem, MQQBlankView, MQQButton, MQQCPLAlbum, MQQCPLCommonOperation, MQQENBPhotoBrowserController, MQQPhotoTask, MQQProgressHUD, MQQRefreshTableHeaderView, NSMutableArray, NSString, UICollectionView;

@interface MQQENBPhotoViewController : MQQBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate, MQQPhotoTaskManagerDelegate, MQQAlertViewDelegate, MQQRefreshTableHeaderDelegate, MQQENBPhotoTaskDelegate>
{
    MQQBarButtonItem *_editButton;
    MQQBarButtonItem *_cancelEditButton;
    UICollectionView *_collectionView;
    MQQAlbumBrowserBottomBar *_editBottomBar;
    MQQButton *_deleteButton;
    MQQButton *_downloadButton;
    MQQButton *_selectAllButton;
    MQQRefreshTableHeaderView *_refreshHeaderView;
    MQQBlankView *_blankView;
    MQQProgressHUD *_loadingHUD;
    _Bool _isEditting;
    _Bool _isTableReloading;
    _Bool _isCancelAndPop;
    long long _selectCount;
    _Bool _isChanged;
    MQQCPLAlbum *_album;
    NSMutableArray *_photoList;
    MQQCPLCommonOperation *_photoListOperation;
    MQQCPLCommonOperation *_deleteOperation;
    MQQPhotoTask *_photoTask;
    MQQAlbumProgressView *_progressView;
    MQQENBPhotoBrowserController *_browserController;
}

@property(retain, nonatomic) MQQENBPhotoBrowserController *browserController; // @synthesize browserController=_browserController;
@property(retain, nonatomic) MQQAlbumProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) MQQPhotoTask *photoTask; // @synthesize photoTask=_photoTask;
@property(retain, nonatomic) MQQCPLCommonOperation *deleteOperation; // @synthesize deleteOperation=_deleteOperation;
@property(retain, nonatomic) MQQCPLCommonOperation *photoListOperation; // @synthesize photoListOperation=_photoListOperation;
@property(retain, nonatomic) NSMutableArray *photoList; // @synthesize photoList=_photoList;
@property(retain, nonatomic) MQQCPLAlbum *album; // @synthesize album=_album;
@property(readonly, nonatomic) _Bool isChanged; // @synthesize isChanged=_isChanged;
- (id)mqqRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (_Bool)mqqRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)mqqRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)mqqAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)photoTaskManagerDidCancel:(id)arg1;
- (void)photoTaskManagerDidFinish:(id)arg1;
- (void)photoTaskManager:(id)arg1 didFinishOneTask:(_Bool)arg2;
- (void)photoTaskManager:(id)arg1 isProcessingOneTaskWithPercentage:(double)arg2;
- (void)photoTaskManagerWillBeginOneTask:(id)arg1;
- (void)photoTaskDidCancelAfterBeginningNetworkAlert:(id)arg1;
- (void)photoTaskWillStartAfterNetworkChecking:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)progressViewCancelButtonClicked:(id)arg1;
- (void)selectAllButtonClicked:(id)arg1;
- (void)downloadButtonClicked:(id)arg1;
- (void)deleteButtonClicked:(id)arg1;
- (void)cancelEditButtonClicked:(id)arg1;
- (void)editButtonClicked:(id)arg1;
- (void)endProcessing;
- (void)loadProgressViewWithMessage:(id)arg1 style:(long long)arg2;
- (void)loadEditBottomBar;
- (void)refreshSelectedState;
- (void)checkPhotoList;
- (void)_updatePhotoList;
- (void)_reloadData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAlbum:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
