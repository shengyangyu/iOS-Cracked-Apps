//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTWebImageView, ItemDetailModel, UIButton;

@interface CTHotelImageButton : UIView
{
    id <CTHotelImageButtonPressDelegate> _delegate;
    CTWebImageView *_imageView;
    UIButton *_btnPress;
    ItemDetailModel *_itemModel;
}

+ (double)getCellHeight;
@property(retain, nonatomic) ItemDetailModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) UIButton *btnPress; // @synthesize btnPress=_btnPress;
@property(retain, nonatomic) CTWebImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <CTHotelImageButtonPressDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateFrame:(struct CGRect)arg1;
- (void)pressAction:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)initView:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

