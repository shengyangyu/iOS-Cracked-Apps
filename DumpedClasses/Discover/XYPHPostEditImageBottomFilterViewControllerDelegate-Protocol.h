//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XYPHEditImageEffect, XYPHEditImageFilter, XYPHPostEditImageBottomFilterViewController;

@protocol XYPHPostEditImageBottomFilterViewControllerDelegate <NSObject>

@optional
- (void)postEditImageBottomFilterViewController:(XYPHPostEditImageBottomFilterViewController *)arg1 didSelectedEffect:(XYPHEditImageEffect *)arg2;
- (void)postEditImageBottomFilterViewControllerDidSelectedCrop:(XYPHPostEditImageBottomFilterViewController *)arg1;
- (void)postEditImageBottomFilterViewController:(XYPHPostEditImageBottomFilterViewController *)arg1 didSelectedFilter:(XYPHEditImageFilter *)arg2;
@end

