//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSTimer, UIView;

@interface GWUserCenterHeaderViewAnimation : NSObject
{
    NSTimer *animationManger;
    double image_W_H_ratio;
    UIView *_baseView;
    NSArray *_animationGroups;
    NSMutableArray *_stopPoints;
}

+ (id)defaultHeaderAnimation;
@property(retain, nonatomic) NSMutableArray *stopPoints; // @synthesize stopPoints=_stopPoints;
@property(retain, nonatomic) NSArray *animationGroups; // @synthesize animationGroups=_animationGroups;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startAnimation;
- (void)startAnimationWithRecord;
- (void)stopAnimatonWithRecord;
- (void)stopAnimaton;
- (void)animationMovie;
- (void)loadViews;
- (id)changeImageWithImage:(id)arg1 andHeight:(double)arg2;
- (void)createAnimationWith:(id)arg1 andMovieViews:(id)arg2;
- (id)getBaseView;

@end
