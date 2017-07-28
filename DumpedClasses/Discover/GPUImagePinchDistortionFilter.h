//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImagePinchDistortionFilter : GPUImageFilter
{
    int aspectRatioUniform;
    int radiusUniform;
    int centerUniform;
    int scaleUniform;
    double _aspectRatio;
    double _radius;
    double _scale;
    struct CGPoint _center;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (void)setInputRotation:(int)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (void)adjustAspectRatio;
- (id)init;

@end

