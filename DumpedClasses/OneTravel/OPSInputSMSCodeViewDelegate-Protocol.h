//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OPSInputSMSCodeView;

@protocol OPSInputSMSCodeViewDelegate <NSObject>

@optional
- (void)buttonCloseClickedWithInputSMSCodeView:(OPSInputSMSCodeView *)arg1;
- (void)loginBySMSDidReady:(OPSInputSMSCodeView *)arg1 SMSCode:(NSString *)arg2;
- (void)buttonNotReceiveClicked:(OPSInputSMSCodeView *)arg1;
- (void)contractLinkTapped:(OPSInputSMSCodeView *)arg1;
- (void)buttonCountdownClicked:(OPSInputSMSCodeView *)arg1;
- (void)backButtonClicked:(OPSInputSMSCodeView *)arg1;
@end
