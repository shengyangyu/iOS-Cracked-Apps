//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class UIButton;

@interface XYPHStoreSubCategorySwitchHeaderView : UICollectionReusableView
{
    id <XYPHStoreSubCategorySwitchHeaderViewDelegate> _delegate;
    UIButton *_categoryButton;
    UIButton *_sortButton;
}

@property(retain, nonatomic) UIButton *sortButton; // @synthesize sortButton=_sortButton;
@property(retain, nonatomic) UIButton *categoryButton; // @synthesize categoryButton=_categoryButton;
@property(nonatomic) __weak id <XYPHStoreSubCategorySwitchHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)unselectButton;
- (void)selectSort:(id)arg1;
- (void)selectCategory:(id)arg1;
- (void)sortButtonClicked;
- (void)categoryButtonClicked;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

