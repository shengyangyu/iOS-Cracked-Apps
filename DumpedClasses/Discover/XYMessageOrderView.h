//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface XYMessageOrderView : UIView
{
    UILabel *_shareWebLabel;
    UIView *_horizontalLine;
    UIImageView *_webImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
}

@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *webImageView; // @synthesize webImageView=_webImageView;
@property(retain, nonatomic) UIView *horizontalLine; // @synthesize horizontalLine=_horizontalLine;
@property(retain, nonatomic) UILabel *shareWebLabel; // @synthesize shareWebLabel=_shareWebLabel;
- (void).cxx_destruct;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

