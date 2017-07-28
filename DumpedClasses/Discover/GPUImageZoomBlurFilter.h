//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageZoomBlurFilter : GPUImageFilter
{
    int blurSizeUniform;
    int blurCenterUniform;
    double _blurSize;
    struct CGPoint _blurCenter;
}

@property(nonatomic) struct CGPoint blurCenter; // @synthesize blurCenter=_blurCenter;
@property(nonatomic) double blurSize; // @synthesize blurSize=_blurSize;
- (void)setInputRotation:(int)arg1 atIndex:(long long)arg2;
- (id)init;

@end

