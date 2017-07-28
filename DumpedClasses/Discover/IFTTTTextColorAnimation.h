//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IFTTTAnimation.h"

#import "IFTTTAnimatable.h"

@class NSString, UILabel;

@interface IFTTTTextColorAnimation : IFTTTAnimation <IFTTTAnimatable>
{
    UILabel *_label;
}

+ (id)animationWithLabel:(id)arg1;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)animate:(double)arg1;
- (_Bool)validColor:(id)arg1;
- (void)addKeyframeForTime:(double)arg1 color:(id)arg2 withEasingFunction:(CDUnknownBlockType)arg3;
- (void)addKeyframeForTime:(double)arg1 color:(id)arg2;
- (id)initWithLabel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

