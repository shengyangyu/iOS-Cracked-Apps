//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class QLNewChannelObj, QLSImageView, UIImageView, UILabel;

@interface QLChannelCustomButton : UIButton
{
    QLSImageView *_imgView;
    UILabel *_titleLabel;
    UIImageView *_topRightImg;
    _Bool _isFixed;
    _Bool _ignoreLayout;
    _Bool _isEdittingMode;
    QLNewChannelObj *_channelObj;
    id <QLChannelOperateProtocol> _operateProxy;
}

@property(nonatomic) _Bool isEdittingMode; // @synthesize isEdittingMode=_isEdittingMode;
@property(nonatomic) _Bool ignoreLayout; // @synthesize ignoreLayout=_ignoreLayout;
@property(nonatomic) __weak id <QLChannelOperateProtocol> operateProxy; // @synthesize operateProxy=_operateProxy;
- (void).cxx_destruct;
- (void)stopFocus;
- (void)startFocus;
- (void)layoutSubviews;
@property(retain, nonatomic) QLNewChannelObj *channelObj; // @synthesize channelObj=_channelObj;
- (void)refreshStatus;
@property(nonatomic) _Bool isFixed; // @synthesize isFixed=_isFixed;
- (void)exitEditingMode:(id)arg1;
- (void)enterEditingMode:(id)arg1;
- (void)refreshTopRightImgStatus;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
