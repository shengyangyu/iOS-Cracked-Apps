//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIButton;

@interface BRSActionSheet : UIView
{
    id <BRSActionSheetDelegate> _delegate;
    UIView *_backgroundView;
    UIView *_buttonView;
    UIButton *_cancleButton;
    NSArray *_actionItems;
    NSMutableArray *_actionButtons;
}

@property(retain, nonatomic) NSMutableArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(retain, nonatomic) NSArray *actionItems; // @synthesize actionItems=_actionItems;
@property(retain, nonatomic) UIButton *cancleButton; // @synthesize cancleButton=_cancleButton;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <BRSActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)backgroundTapped;
- (void)hideWithButtonTapped:(long long)arg1;
- (void)cancleButtonTapped:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)show;
- (void)setupViews;
- (void)setupActionItems;
- (id)init;

@end

