//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseCollectionRefreshViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UISearchBarDelegate.h"
#import "XYPHPostEditImageStickerDownloadViewControllerDelegate.h"

@class NSString, UICollectionView, UISearchBar, XYPHRefreshBaseDataSource, XYPHSticker;

@interface XYPHPostEditImageStickersHistoryViewController : XYPHBaseCollectionRefreshViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, XYPHPostEditImageStickerDownloadViewControllerDelegate, UISearchBarDelegate>
{
    XYPHRefreshBaseDataSource *_dataSource;
    id <XYPHPostEditImageStickersHistoryViewControllerDelegate> _delegate;
    XYPHSticker *_hightlightSticker;
    UISearchBar *_searchBar;
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) XYPHSticker *hightlightSticker; // @synthesize hightlightSticker=_hightlightSticker;
@property(nonatomic) __weak id <XYPHPostEditImageStickersHistoryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDataSource:(id)arg1;
- (void).cxx_destruct;
- (void)finishPullToRefresh:(id)arg1;
- (void)cancelBarButtonTouchUpInside:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)postEditImageStickerDownloadViewController:(id)arg1 sticker:(id)arg2 didDownloadButtonTouchUpInside:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)dataSource;
- (void)setupNavigationItem;
- (void)setupCollectionView;
- (void)setup;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

