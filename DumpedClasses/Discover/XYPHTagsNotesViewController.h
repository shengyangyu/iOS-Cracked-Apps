//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseCollectionRefreshViewController.h"

#import "CHTCollectionViewDelegateWaterfallLayout.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "XYPHNoteCellDelegate.h"
#import "XYPHTagsFilterTagHeaderViewDelegate.h"

@class NSArray, NSDictionary, NSString, UICollectionView, XYEmptyPlaceholderView, XYPHNoteGridStyleHomeCellAdapter, XYPHRefreshBaseDataSource, XYPHTagsFilterTagHeaderView;

@interface XYPHTagsNotesViewController : XYPHBaseCollectionRefreshViewController <UICollectionViewDelegate, UICollectionViewDataSource, CHTCollectionViewDelegateWaterfallLayout, XYPHTagsFilterTagHeaderViewDelegate, XYPHNoteCellDelegate>
{
    XYPHRefreshBaseDataSource *_dataSource;
    NSString *_tagId;
    NSDictionary *_params;
    id <UIScrollViewDelegate> _superScrolldelegate;
    NSString *_defaultFilterTag;
    UICollectionView *_collectionView;
    XYPHNoteGridStyleHomeCellAdapter *_noteCellAdapter;
    NSArray *_filterTagsTitleArray;
    XYPHTagsFilterTagHeaderView *_filterTagHeaderView;
    XYEmptyPlaceholderView *_emptyPlaceholderView;
    long long _filterTagSelectIndex;
}

@property(nonatomic) long long filterTagSelectIndex; // @synthesize filterTagSelectIndex=_filterTagSelectIndex;
@property(retain, nonatomic) XYEmptyPlaceholderView *emptyPlaceholderView; // @synthesize emptyPlaceholderView=_emptyPlaceholderView;
@property(retain, nonatomic) XYPHTagsFilterTagHeaderView *filterTagHeaderView; // @synthesize filterTagHeaderView=_filterTagHeaderView;
@property(retain, nonatomic) NSArray *filterTagsTitleArray; // @synthesize filterTagsTitleArray=_filterTagsTitleArray;
@property(retain, nonatomic) XYPHNoteGridStyleHomeCellAdapter *noteCellAdapter; // @synthesize noteCellAdapter=_noteCellAdapter;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSString *defaultFilterTag; // @synthesize defaultFilterTag=_defaultFilterTag;
@property(nonatomic) __weak id <UIScrollViewDelegate> superScrolldelegate; // @synthesize superScrolldelegate=_superScrolldelegate;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
- (void)setDataSource:(id)arg1;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)finishPullToRefresh:(id)arg1;
- (id)emptyDataView;
- (id)dataSource;
- (id)getFilterArrayByFilterTagsArray:(id)arg1;
- (void)tagsFilterTagHeaderView:(id)arg1 didDeselectedItemAtIndex:(unsigned long long)arg2;
- (void)tagsFilterTagHeaderView:(id)arg1 didSelectedItemAtIndex:(unsigned long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)noteCellUserButtonClicked:(id)arg1;
- (void)noteCellLikesButtonClicked:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 columnCountForSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setupUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

