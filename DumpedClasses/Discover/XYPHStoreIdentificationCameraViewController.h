//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "UIScrollViewDelegate.h"
#import "XYPHAlbumPhotosViewControllerDelegate.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, NSObject<OS_dispatch_queue>, NSString, UIActivityIndicatorView, UIButton, UIImage, UIImageView, UIScrollView, UIView, XYPHCameraPreviewView;

@interface XYPHStoreIdentificationCameraViewController : XYPHBaseViewController <XYPHAlbumPhotosViewControllerDelegate, UIScrollViewDelegate>
{
    CDUnknownBlockType _completionBlock;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_activeDeviceInput;
    AVCaptureStillImageOutput *_imageOutput;
    NSObject<OS_dispatch_queue> *_cameraQueue;
    long long _activeDevicePosition;
    UIButton *_flashButton;
    UIButton *_cancelButton;
    UIButton *_albumButton;
    UIButton *_playButton;
    XYPHCameraPreviewView *_preview;
    UIImageView *_stickerView;
    UIImageView *_cropImageView;
    UIImage *_imageToCrop;
    UIScrollView *_cropScrollView;
    UIView *_indicatorDimView;
    UIActivityIndicatorView *_indicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIView *indicatorDimView; // @synthesize indicatorDimView=_indicatorDimView;
@property(retain, nonatomic) UIScrollView *cropScrollView; // @synthesize cropScrollView=_cropScrollView;
@property(retain, nonatomic) UIImage *imageToCrop; // @synthesize imageToCrop=_imageToCrop;
@property(retain, nonatomic) UIImageView *cropImageView; // @synthesize cropImageView=_cropImageView;
@property(retain, nonatomic) UIImageView *stickerView; // @synthesize stickerView=_stickerView;
@property(retain, nonatomic) XYPHCameraPreviewView *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIButton *albumButton; // @synthesize albumButton=_albumButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *flashButton; // @synthesize flashButton=_flashButton;
@property(nonatomic) long long activeDevicePosition; // @synthesize activeDevicePosition=_activeDevicePosition;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cameraQueue; // @synthesize cameraQueue=_cameraQueue;
@property(retain, nonatomic) AVCaptureStillImageOutput *imageOutput; // @synthesize imageOutput=_imageOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *activeDeviceInput; // @synthesize activeDeviceInput=_activeDeviceInput;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)centerScrollView;
- (void)addImage;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)finishCapturing:(id)arg1;
- (id)captureImageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (long long)currentOrientation;
- (void)flashButtonClicked;
- (void)playButtonClicked;
- (void)albumButtonClicked;
- (void)cancelButtonClicked;
- (void)cellDidSelect:(id)arg1;
- (void)stopSession;
- (void)startSession;
- (void)setupSession:(CDUnknownBlockType)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

