//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface XYPHStoreGoodsCountDownView : UIView
{
    UILabel *_descLabel;
    UILabel *_hourLeftLabel;
    UILabel *_hourRightLabel;
    UILabel *_minLeftLabel;
    UILabel *_minRightLabel;
    UILabel *_secLeftLabel;
    UILabel *_secRightLabel;
}

@property(retain, nonatomic) UILabel *secRightLabel; // @synthesize secRightLabel=_secRightLabel;
@property(retain, nonatomic) UILabel *secLeftLabel; // @synthesize secLeftLabel=_secLeftLabel;
@property(retain, nonatomic) UILabel *minRightLabel; // @synthesize minRightLabel=_minRightLabel;
@property(retain, nonatomic) UILabel *minLeftLabel; // @synthesize minLeftLabel=_minLeftLabel;
@property(retain, nonatomic) UILabel *hourRightLabel; // @synthesize hourRightLabel=_hourRightLabel;
@property(retain, nonatomic) UILabel *hourLeftLabel; // @synthesize hourLeftLabel=_hourLeftLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
- (void).cxx_destruct;
- (void)countdown:(int)arg1;
- (void)setViewWithCountDown:(id)arg1;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

