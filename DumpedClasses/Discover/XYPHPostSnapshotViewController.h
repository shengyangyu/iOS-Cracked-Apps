//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

@class NSString, UIScrollView, XYPHNote;

@interface XYPHPostSnapshotViewController : XYPHBaseViewController
{
    _Bool _didSaveToLocal;
    _Bool _snapShotGeneral;
    NSString *_noteId;
    UIScrollView *_imageScrollView;
    XYPHNote *_note;
}

@property(nonatomic) _Bool snapShotGeneral; // @synthesize snapShotGeneral=_snapShotGeneral;
@property(nonatomic) _Bool didSaveToLocal; // @synthesize didSaveToLocal=_didSaveToLocal;
@property(retain, nonatomic) XYPHNote *note; // @synthesize note=_note;
@property(retain, nonatomic) UIScrollView *imageScrollView; // @synthesize imageScrollView=_imageScrollView;
@property(retain, nonatomic) NSString *noteId; // @synthesize noteId=_noteId;
- (void).cxx_destruct;
- (void)saveToLocalBarButtonTouchUpInside:(id)arg1;
- (id)generateSnapshot;
- (void)shareToPlatform:(id)arg1;
- (void)saveToLocal;
- (void)setupBottom;
- (void)setupImage:(id)arg1;
- (void)setup;
- (void)loadNote;
- (void)viewDidLoad;

@end

