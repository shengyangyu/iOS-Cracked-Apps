//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQPHCTransitionView.h"

#import "CAAnimationDelegate-Protocol.h"

@class MQQAttributedLabel, MQQPHCAnimationView, NSString, UIButton, UILabel, UIView;

@interface MQQPHCCompressingView : MQQPHCTransitionView <CAAnimationDelegate>
{
    UIView *_compressingContentView;
    UILabel *_numberLabel;
    UILabel *_unitLabel;
    MQQPHCAnimationView *_compressingView;
    UILabel *_countLabel;
    UILabel *_timeLabel;
    MQQAttributedLabel *_compressingTipLabel;
    UIButton *_stopButton;
    _Bool _isAnimating;
    _Bool _shouldUpdateSavedSpace;
    unsigned long long _savedSpace;
    double _lastAnimationTime;
    long long _mediaType;
}

@property(readonly, nonatomic) UIButton *stopButton; // @synthesize stopButton=_stopButton;
- (void)animtionWithBlock:(CDUnknownBlockType)arg1 duration:(double)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)getCompressionFinishedText;
- (void)showFinishedComressionWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopCompressionAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startCompressionAnimationWithSavedSpace:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *tipText;
- (void)setCompressededCount:(unsigned long long)arg1 totalCount:(unsigned long long)arg2 leftTime:(double)arg3;
- (void)setSavedSpace:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 mediaType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
