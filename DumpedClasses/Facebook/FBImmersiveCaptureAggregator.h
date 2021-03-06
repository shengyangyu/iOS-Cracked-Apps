//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBImmersiveCaptureDataHolder-Protocol.h"
#import "FBImmersiveImageStitchStatusUpdateDelegate-Protocol.h"
#import "FBMPOutput-Protocol.h"

@class FBGLTexture, FBImmersiveCaptureMotionManager, FBImmersiveImageStitchManager, FBImmersiveImageStitchStatus, FBImmersiveImageWithAABB, FBMPBaseConsumerPort, FBVideoProcessor, FBYUVSurface, NSString, UIImage;
@protocol FBImmersiveCaptureDataConsumptionDelegate, FBImmersiveCaptureInfoProviderProtocol;

@interface FBImmersiveCaptureAggregator : NSObject <FBImmersiveImageStitchStatusUpdateDelegate, FBMPOutput, FBImmersiveCaptureDataHolder>
{
    struct unique_ptr<immersive::capture::ImmersiveCapturePresenter, std::__1::default_delete<immersive::capture::ImmersiveCapturePresenter>> _presenterRef;
    FBMPBaseConsumerPort *_videoConsumerPort;
    FBImmersiveCaptureMotionManager *_motionManager;
    FBVideoProcessor *_videoProcessor;
    UIImage *_overSpeedImage;
    id <FBImmersiveCaptureInfoProviderProtocol> _captureInfoProvider;
    id <FBImmersiveCaptureDataConsumptionDelegate> _captureDelegate;
    FBImmersiveImageWithAABB *_stitchedImage;
    FBYUVSurface *_yuvSurface;
    FBGLTexture *_overSpeedTexture;
    FBImmersiveImageStitchManager *_stitchManager;
}

@property(retain, nonatomic) FBImmersiveImageStitchManager *stitchManager; // @synthesize stitchManager=_stitchManager;
@property(retain, nonatomic) FBGLTexture *overSpeedTexture; // @synthesize overSpeedTexture=_overSpeedTexture;
@property(retain, nonatomic) FBYUVSurface *yuvSurface; // @synthesize yuvSurface=_yuvSurface;
@property(retain, nonatomic) FBImmersiveImageWithAABB *stitchedImage; // @synthesize stitchedImage=_stitchedImage;
@property(nonatomic) __weak id <FBImmersiveCaptureDataConsumptionDelegate> captureDelegate; // @synthesize captureDelegate=_captureDelegate;
@property(nonatomic) __weak id <FBImmersiveCaptureInfoProviderProtocol> captureInfoProvider; // @synthesize captureInfoProvider=_captureInfoProvider;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) FBImmersiveImageStitchStatus *currentStitchStatus;
- (id)consumerPorts;
- (void)imageStitchManager:(id)arg1 didUpdateImageStitchStatus:(id)arg2;
- (id)_videoProcessor;
- (id)_convertVideoData:(id)arg1;
- (void)_processVideoData:(id)arg1;
- (void)_updateOverSpeedTexture;
- (unique_ptr_e0d791e2)_yuvTexture;
- (_Bool)isCaptureActive;
- (void)resetStitch;
- (void)startStitch;
- (void)performCaptureAction:(int)arg1;
- (void)stopMotionUpdates;
- (void)startMotionUpdates;
- (void)renderPreviewWithSize:(struct CGSize)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

