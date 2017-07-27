//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ReadInJoyChannelArticle, ReadInjoyAsynImageView, UILabel;

@interface ReadInJoyTopicView : UIView
{
    ReadInJoyChannelArticle *_feedsModel;
    UILabel *_title;
    UILabel *_subTitle;
    UIView *_subView;
    UIView *_leftLineView;
    UIView *_rightLineView;
    ReadInjoyAsynImageView *_backImage;
}

@property(retain, nonatomic) ReadInjoyAsynImageView *backImage; // @synthesize backImage=_backImage;
@property(retain, nonatomic) UIView *rightLineView; // @synthesize rightLineView=_rightLineView;
@property(retain, nonatomic) UIView *leftLineView; // @synthesize leftLineView=_leftLineView;
@property(retain, nonatomic) UIView *subView; // @synthesize subView=_subView;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (void).cxx_destruct;
- (void)tap;
- (void)layoutSubviewsExt;
- (void)layoutSubviews;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)initLargeTopicView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
