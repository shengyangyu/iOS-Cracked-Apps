//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TuSDKICViewController.h"

@interface TuSDKCPViewController : TuSDKICViewController
{
    id <TuSDKCPComponentErrorDelegate> _errorDelegate;
}

@property(nonatomic) id <TuSDKCPComponentErrorDelegate> errorDelegate; // @synthesize errorDelegate=_errorDelegate;
- (void)configDefaultStyleView:(id)arg1;
- (void)buildDefaultStyleView;
- (void)notifyErrorType:(long long)arg1 result:(id)arg2;
- (void)notifyError:(id)arg1 result:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;

@end

