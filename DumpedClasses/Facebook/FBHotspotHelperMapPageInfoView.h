//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBNetworkImageView, UIButton, UILabel;
@protocol FBHotspotHelperMapPageInfoViewDelegate;

@interface FBHotspotHelperMapPageInfoView : UIView
{
    UILabel *_titleLabel;
    UILabel *_detailsLabel;
    UILabel *_wifiNameLabel;
    FBNetworkImageView *_profileView;
    UIView *_horizontalLine;
    UIView *_verticalLine;
    UIButton *_visitPageButton;
    UIButton *_directionButton;
    id <FBHotspotHelperMapPageInfoViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBHotspotHelperMapPageInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapDirectionButton;
- (void)_didTapVisitPageButton;
- (void)layoutSubviews;
- (void)loadPageInfoViewWithPageInfo:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

@end
