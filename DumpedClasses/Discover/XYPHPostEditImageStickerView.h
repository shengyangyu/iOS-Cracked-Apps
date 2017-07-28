//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIButton, UIView;

@interface XYPHPostEditImageStickerView : UIImageView <UIGestureRecognizerDelegate>
{
    struct CGPoint panGestureLastPoint;
    struct CGPoint resizeGretureLastPoint;
    _Bool _editModel;
    double _markPercentage;
    double _stickerAngel;
    id <XYPHPostEditImageStickerViewDelegate> _delegate;
    UIView *_borderView;
    UIButton *_closeButton;
    UIImageView *_resizeImageView;
    double _minWidth;
    double _maxWidth;
    double _minHeight;
    double _maxHeight;
    struct CGPoint _strickerCenterOffsetPercentage;
}

@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
@property(retain, nonatomic) UIImageView *resizeImageView; // @synthesize resizeImageView=_resizeImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(nonatomic) __weak id <XYPHPostEditImageStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool editModel; // @synthesize editModel=_editModel;
@property(nonatomic) struct CGPoint strickerCenterOffsetPercentage; // @synthesize strickerCenterOffsetPercentage=_strickerCenterOffsetPercentage;
@property(nonatomic) double stickerAngel; // @synthesize stickerAngel=_stickerAngel;
@property(nonatomic) double markPercentage; // @synthesize markPercentage=_markPercentage;
- (void).cxx_destruct;
- (void)updateSize;
- (void)updateTransform;
- (void)updatePosition;
- (void)disableEditModel;
- (void)enableEditModel;
- (void)closeButtonTouchUpInside:(id)arg1;
- (void)resizeGestureRecognizer:(id)arg1;
- (void)moveGestureRecognizer:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

