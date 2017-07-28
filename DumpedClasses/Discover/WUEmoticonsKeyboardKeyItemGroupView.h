//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSString, UICollectionView, UIImageView, UILongPressGestureRecognizer, UIPageControl, WUEmoticonsKeyboardKeyCell, WUEmoticonsKeyboardKeyItemGroup;

@interface WUEmoticonsKeyboardKeyItemGroupView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    WUEmoticonsKeyboardKeyItemGroup *_keyItemGroup;
    CDUnknownBlockType _keyItemTappedBlock;
    CDUnknownBlockType _pressedKeyItemCellChangedBlock;
    UIImageView *_backgroundImageView;
    UICollectionView *_collectionView;
    UIPageControl *_pageControl;
    WUEmoticonsKeyboardKeyCell *_lastPressedCell;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property(nonatomic) __weak UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) __weak WUEmoticonsKeyboardKeyCell *lastPressedCell; // @synthesize lastPressedCell=_lastPressedCell;
@property(nonatomic) __weak UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) CDUnknownBlockType pressedKeyItemCellChangedBlock; // @synthesize pressedKeyItemCellChangedBlock=_pressedKeyItemCellChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType keyItemTappedBlock; // @synthesize keyItemTappedBlock=_keyItemTappedBlock;
@property(retain, nonatomic) WUEmoticonsKeyboardKeyItemGroup *keyItemGroup; // @synthesize keyItemGroup=_keyItemGroup;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)refreshPageControl;
- (void)collectionViewLongPress:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

