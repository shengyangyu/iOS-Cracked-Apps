//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SBBPlayerSliderDelegate <NSObject>
- (void)didSliderFinishDragActionWithProgress:(long long)arg1 maxProgress:(long long)arg2 complete:(void (^)(void))arg3;
- (void)didSliderChangedProgress:(long long)arg1 maxProgress:(long long)arg2;
@end
