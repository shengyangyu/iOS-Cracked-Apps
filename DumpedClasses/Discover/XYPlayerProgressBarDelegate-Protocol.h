//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XYPlayerProgressBar;

@protocol XYPlayerProgressBarDelegate <NSObject>

@optional
- (void)progressBar:(XYPlayerProgressBar *)arg1 didSlideToProgress:(double)arg2;
- (void)progressBarDidEndSliding:(XYPlayerProgressBar *)arg1;
- (void)progressBarDidBeginSliding:(XYPlayerProgressBar *)arg1;
@end

