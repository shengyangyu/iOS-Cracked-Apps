//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface XYPHWishBoradListCell : UITableViewCell
{
    UIImageView *_boardImage;
    UILabel *_boardTitleLabel;
    UILabel *_lockLabel;
}

@property(retain, nonatomic) UILabel *lockLabel; // @synthesize lockLabel=_lockLabel;
@property(retain, nonatomic) UILabel *boardTitleLabel; // @synthesize boardTitleLabel=_boardTitleLabel;
@property(retain, nonatomic) UIImageView *boardImage; // @synthesize boardImage=_boardImage;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)initilize;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

