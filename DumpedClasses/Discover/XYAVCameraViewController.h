//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoPreviewLayer, NSObject<OS_dispatch_queue>, NSString, UIBarButtonItem, UIImage, UIToolbar, UIView;

@interface XYAVCameraViewController : XYPHBaseViewController <UIGestureRecognizerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    UIView *previewView;
    UIBarButtonItem *LineToolBarItem;
    UIBarButtonItem *PositionToolBarItem;
    UIBarButtonItem *FlashToolBarItem;
    UIView *lineView;
    UIToolbar *bottomToolBar;
    UIView *actionView;
    AVCaptureSession *session;
    AVCaptureVideoPreviewLayer *previewLayer;
    AVCaptureStillImageOutput *stillImageOutput;
    NSObject<OS_dispatch_queue> *videoDataOutputQueue;
    UIView *flashView;
    UIImage *square;
    _Bool isUsingFrontFacingCamera;
    double beginGestureScale;
    double effectiveScale;
    _Bool _mustHaveBrand;
    _Bool _noNeedCropping;
    CDUnknownBlockType _saveToAlbumCompletion;
    UIView *_processingView;
}

@property(nonatomic) _Bool noNeedCropping; // @synthesize noNeedCropping=_noNeedCropping;
@property(nonatomic) _Bool mustHaveBrand; // @synthesize mustHaveBrand=_mustHaveBrand;
@property(retain, nonatomic) UIView *processingView; // @synthesize processingView=_processingView;
@property(copy, nonatomic) CDUnknownBlockType saveToAlbumCompletion; // @synthesize saveToAlbumCompletion=_saveToAlbumCompletion;
- (void).cxx_destruct;
- (id)captureImageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
- (void)handleTapGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)flashChange:(id)arg1;
- (void)lineChanged:(id)arg1;
- (void)positionChange:(id)arg1;
- (void)takePicture:(id)arg1;
- (void)getImageFromAlbum:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)backBarButtonClicked:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)drawFousBoxesForFeatures:(struct CGRect)arg1 forpreviewBox:(struct CGRect)arg2 orientation:(long long)arg3;
- (void)displayErrorOnMainQueue:(id)arg1 withMessage:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resumeAVCapture;
- (void)teardownAVCapture;
- (void)setupAVCapture;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

