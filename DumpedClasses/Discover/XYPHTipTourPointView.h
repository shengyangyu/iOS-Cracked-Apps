//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface XYPHTipTourPointView : UIView
{
    float time;
    UIImageView *_panBackgroundImage;
    UIImageView *_panImage;
}

@property(retain, nonatomic) UIImageView *panImage; // @synthesize panImage=_panImage;
@property(retain, nonatomic) UIImageView *panBackgroundImage; // @synthesize panBackgroundImage=_panBackgroundImage;
- (void).cxx_destruct;
- (_Bool)dismiss;
- (void)showInTime:(float)arg1;
- (void)show;
- (void)setImageWithCenter:(id)arg1 border:(id)arg2;
- (id)init;

@end

