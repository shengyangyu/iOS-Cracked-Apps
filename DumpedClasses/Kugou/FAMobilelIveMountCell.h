//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface FAMobilelIveMountCell : UITableViewCell
{
    UIImageView *_headImage;
    UILabel *_nickNameLab;
    UIImageView *_vipLevel;
    UIImageView *_levelImg;
    UIImageView *_carImage;
}

@property(retain, nonatomic) UIImageView *carImage; // @synthesize carImage=_carImage;
@property(retain, nonatomic) UIImageView *levelImg; // @synthesize levelImg=_levelImg;
@property(retain, nonatomic) UIImageView *vipLevel; // @synthesize vipLevel=_vipLevel;
@property(retain, nonatomic) UILabel *nickNameLab; // @synthesize nickNameLab=_nickNameLab;
@property(retain, nonatomic) UIImageView *headImage; // @synthesize headImage=_headImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadMountInfo:(id)arg1;
- (void)configSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

