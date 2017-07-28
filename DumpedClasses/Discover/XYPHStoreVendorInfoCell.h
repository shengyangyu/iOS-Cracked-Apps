//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface XYPHStoreVendorInfoCell : UICollectionViewCell
{
    UIImageView *_logoImageView;
    UILabel *_brandLabel;
    UIView *_horizontalLine;
    UILabel *_descLabel;
    UIButton *_websiteButton;
    UIButton *_locationButton;
}

@property(retain, nonatomic) UIButton *locationButton; // @synthesize locationButton=_locationButton;
@property(retain, nonatomic) UIButton *websiteButton; // @synthesize websiteButton=_websiteButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(retain, nonatomic) UILabel *brandLabel; // @synthesize brandLabel=_brandLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void).cxx_destruct;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

