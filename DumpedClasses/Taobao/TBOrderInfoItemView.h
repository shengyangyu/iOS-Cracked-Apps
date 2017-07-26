//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface TBOrderInfoItemView : UIView
{
    UILabel *_name;
    UILabel *_value;
    UIButton *_operation;
    id _controller;
}

@property(nonatomic) __weak id controller; // @synthesize controller=_controller;
@property(retain, nonatomic) UIButton *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) UILabel *value; // @synthesize value=_value;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)copyText;
- (void)layoutSubviews;
- (void)setData:(id)arg1;

@end
