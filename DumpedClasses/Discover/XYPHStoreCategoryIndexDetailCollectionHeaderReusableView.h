//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, UILabel, XYPHStoreCategoryIndexDetailCollectionHeaderShowMoreButton;

@interface XYPHStoreCategoryIndexDetailCollectionHeaderReusableView : UICollectionReusableView
{
    UILabel *_titleLabel;
    NSString *_link;
    id <XYPHStoreCategoryIndexDetailCollectionHeaderReusableViewDelegate> _delegate;
    XYPHStoreCategoryIndexDetailCollectionHeaderShowMoreButton *_showMoreButton;
}

@property(retain, nonatomic) XYPHStoreCategoryIndexDetailCollectionHeaderShowMoreButton *showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(nonatomic) __weak id <XYPHStoreCategoryIndexDetailCollectionHeaderReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)showMoreButtonTouchUpInside:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

