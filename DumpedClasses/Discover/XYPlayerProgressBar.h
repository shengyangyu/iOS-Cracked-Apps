//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSLayoutConstraint, UIView;

@interface XYPlayerProgressBar : UIControl
{
    _Bool _sliding;
    id <XYPlayerProgressBarDelegate> _delegate;
    UIView *_backgroundView;
    UIView *_bufferProgressView;
    UIView *_progressView;
    UIView *_slider;
    NSLayoutConstraint *_bufferProgressConstraint;
    NSLayoutConstraint *_progressConstraint;
    struct CGPoint _originalSliderPosition;
}

@property(nonatomic) struct CGPoint originalSliderPosition; // @synthesize originalSliderPosition=_originalSliderPosition;
@property(retain, nonatomic) NSLayoutConstraint *progressConstraint; // @synthesize progressConstraint=_progressConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bufferProgressConstraint; // @synthesize bufferProgressConstraint=_bufferProgressConstraint;
@property(retain, nonatomic) UIView *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *bufferProgressView; // @synthesize bufferProgressView=_bufferProgressView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic, getter=isSliding) _Bool sliding; // @synthesize sliding=_sliding;
@property(nonatomic) __weak id <XYPlayerProgressBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1 invokedByUserInteraction:(_Bool)arg2;
- (void)handleGesture:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setBufferProgress:(double)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

