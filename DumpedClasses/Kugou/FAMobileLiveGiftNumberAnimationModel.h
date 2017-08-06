//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface FAMobileLiveGiftNumberAnimationModel : NSObject
{
    id <FAMobileLiveGiftNumberAnimationModelDelegate> _delegate;
    NSTimer *_giftNumberTimer;
    long long _currentGiftNumValue;
    long long _finalGiftNumValue;
}

@property(nonatomic) long long finalGiftNumValue; // @synthesize finalGiftNumValue=_finalGiftNumValue;
@property(nonatomic) long long currentGiftNumValue; // @synthesize currentGiftNumValue=_currentGiftNumValue;
@property(retain, nonatomic) NSTimer *giftNumberTimer; // @synthesize giftNumberTimer=_giftNumberTimer;
@property(nonatomic) __weak id <FAMobileLiveGiftNumberAnimationModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isDoingGiftNumberAnimation;
- (void)resetGiftNumValue:(long long)arg1;
- (void)removeAnimations;
- (void)resetAllData;
- (void)invalueGiftNumTimer;
- (_Bool)shouldRenewLayoutWithBeforeGiftNum:(id)arg1 nowGiftNum:(id)arg2;
- (double)getTimerTimeWithChangeCount:(long long)arg1;
- (void)renewViewWithGiftNum:(id)arg1 shouldRenewLayout:(_Bool)arg2;
- (void)dealDoGiftNumAnimationWithGiftNum:(id)arg1;

@end
