//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class UIImageView, UILabel, UIView;

@interface XYPHStoreThirdPartyBrandHeaderView : UICollectionReusableView
{
    UIImageView *_headerImageView;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    UILabel *_goodsLabel;
    UILabel *_fansLabel;
    UIView *_horizontalLine;
    UIView *_verticalLine;
}

@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) UIView *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(retain, nonatomic) UILabel *fansLabel; // @synthesize fansLabel=_fansLabel;
@property(retain, nonatomic) UILabel *goodsLabel; // @synthesize goodsLabel=_goodsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
- (void).cxx_destruct;
- (void)setViewWithBrand:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

