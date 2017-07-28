//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSArray, NSString, UIButton, UICollectionView, UIImageView;

@interface WUEmoticonsKeyboardToolsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    NSArray *_keyItemGroups;
    CDUnknownBlockType _keyboardSwitchButtonTappedBlock;
    CDUnknownBlockType _keyItemGroupSelectedBlock;
    UIButton *_keyboardSwitchButton;
    CDUnknownBlockType _doneButtonTappedBlock;
    UIButton *_doneButton;
    UICollectionView *_segmentedCollect;
    UIImageView *_shadowImage;
}

+ (id)imageWithColor:(id)arg1;
@property(retain, nonatomic) UIImageView *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) __weak UICollectionView *segmentedCollect; // @synthesize segmentedCollect=_segmentedCollect;
@property(nonatomic) __weak UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(copy, nonatomic) CDUnknownBlockType doneButtonTappedBlock; // @synthesize doneButtonTappedBlock=_doneButtonTappedBlock;
@property(readonly, nonatomic) __weak UIButton *keyboardSwitchButton; // @synthesize keyboardSwitchButton=_keyboardSwitchButton;
@property(copy, nonatomic) CDUnknownBlockType keyItemGroupSelectedBlock; // @synthesize keyItemGroupSelectedBlock=_keyItemGroupSelectedBlock;
@property(copy, nonatomic) CDUnknownBlockType keyboardSwitchButtonTappedBlock; // @synthesize keyboardSwitchButtonTappedBlock=_keyboardSwitchButtonTappedBlock;
@property(retain, nonatomic) NSArray *keyItemGroups; // @synthesize keyItemGroups=_keyItemGroups;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)doneButtonTapped:(id)arg1;
- (void)segmentedCollectValueChanged:(id)arg1;
- (void)segmentedControlValueChanged:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

