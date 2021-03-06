//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, UIImage;

@interface DCPageViewTabView : UIView
{
    id <DCTabManageViewProtocal> _delegate;
    double _selectTabTag;
    NSArray *_viewsArray;
    unsigned long long _selectStyle;
    NSString *_titleColor;
    NSString *_selectTitleColor;
    double _titleFont;
    double _tabMargin;
    double _leftSpace;
    UIImage *_normalimage;
    UIImage *_selectimage;
    NSMutableArray *_itemsArr;
    UIView *_scrollBar;
}

@property(retain, nonatomic) UIView *scrollBar; // @synthesize scrollBar=_scrollBar;
@property(retain, nonatomic) NSMutableArray *itemsArr; // @synthesize itemsArr=_itemsArr;
@property(retain, nonatomic) UIImage *selectimage; // @synthesize selectimage=_selectimage;
@property(retain, nonatomic) UIImage *normalimage; // @synthesize normalimage=_normalimage;
@property(nonatomic) double leftSpace; // @synthesize leftSpace=_leftSpace;
@property(nonatomic) double tabMargin; // @synthesize tabMargin=_tabMargin;
@property(nonatomic) double titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *selectTitleColor; // @synthesize selectTitleColor=_selectTitleColor;
@property(retain, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) unsigned long long selectStyle; // @synthesize selectStyle=_selectStyle;
@property(retain, nonatomic) NSArray *viewsArray; // @synthesize viewsArray=_viewsArray;
@property(nonatomic) double selectTabTag; // @synthesize selectTabTag=_selectTabTag;
@property(nonatomic) __weak id <DCTabManageViewProtocal> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)buttonTitleRealSize:(id)arg1;
- (long long)currentShowPageViewTag;
- (void)setTabTitle:(id)arg1 withItemTage:(long long)arg2;
- (void)selectTabWithTag:(long long)arg1;
- (void)onTabButtonSelected:(id)arg1;
- (void)clickOpertionButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

