//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYNavigationBackHeaderView.h"

@class UIButton, UIImageView, UILabel, XYFollowButton;

@interface XYPHMyHeaderNavigationView : XYNavigationBackHeaderView
{
    id <XYPHMyHeaderNavigationViewDelegate> _delegate;
    UIButton *_personalSettingButton;
    UIImageView *_userPortraitButton;
    UIButton *_userFollowButton;
    UIButton *_userFansButton;
    UIButton *_userCommendedButton;
    UIButton *_userCollectedButton;
    UILabel *_userNameLabel;
    UIButton *_userRankButton;
    UILabel *_locationLabel;
    UIButton *_showMoreButton;
    XYFollowButton *_followButton;
    UIImageView *_arrow;
}

@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) XYFollowButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIButton *showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UIButton *userRankButton; // @synthesize userRankButton=_userRankButton;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIButton *userCollectedButton; // @synthesize userCollectedButton=_userCollectedButton;
@property(retain, nonatomic) UIButton *userCommendedButton; // @synthesize userCommendedButton=_userCommendedButton;
@property(retain, nonatomic) UIButton *userFansButton; // @synthesize userFansButton=_userFansButton;
@property(retain, nonatomic) UIButton *userFollowButton; // @synthesize userFollowButton=_userFollowButton;
@property(retain, nonatomic) UIImageView *userPortraitButton; // @synthesize userPortraitButton=_userPortraitButton;
@property(retain, nonatomic) UIButton *personalSettingButton; // @synthesize personalSettingButton=_personalSettingButton;
@property(nonatomic) __weak id <XYPHMyHeaderNavigationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setArrowAnimation;
- (void)setHeaderViewWithFollowStatus:(id)arg1;
- (void)setShowMoreButtonStyle:(_Bool)arg1;
- (void)folllowButtonEvent;
- (void)showMoreButtonEvent:(id)arg1;
- (void)userFansButtonEvent;
- (void)userFollowButtonEvent;
- (void)backButtonEvent;
- (void)userRankButtonEvent;
- (void)personalSettingButtonEvent;
- (void)shareButtonEvent;
- (void)systemSettingButtonEvent;
- (void)findFriendsButtonEvent;
- (void)setupDefaultView;
- (void)setMyNavigationIsRootVC:(_Bool)arg1;
- (void)setUserNavigation;
- (void)setupNavigationButtons;
- (id)initWithFrame:(struct CGRect)arg1;

@end

