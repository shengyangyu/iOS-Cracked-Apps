//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYCinemaBannerData, UIImageView;
@protocol QYMActivityViewDelegate;

@interface QYMActivityView : UIView
{
    id <QYMActivityViewDelegate> _delegate;
    id _ActivityData;
    QYCinemaBannerData *_resourceData;
    UIImageView *_leftImageView;
    UIImageView *_rightImageView;
}

@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) QYCinemaBannerData *resourceData; // @synthesize resourceData=_resourceData;
@property(nonatomic) __weak id ActivityData; // @synthesize ActivityData=_ActivityData;
@property(nonatomic) __weak id <QYMActivityViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)toH5Withtap:(id)arg1;
- (void)layoutSubviews;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

