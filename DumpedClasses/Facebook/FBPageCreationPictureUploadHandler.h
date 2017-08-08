//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBMediaAttachmentPickerControllerDelegate-Protocol.h"
#import "FBPageSurfaceEditCoverControllerDelegate-Protocol.h"
#import "FBTimelineEditCoverControllerDelegate-Protocol.h"

@class FBMediaAttachmentPickerController, FBMemPage, FBPageSurfaceEditCoverController, FBProfilePicturePickerController, FBUserSession, NSString, UIImage, UIViewController;

@interface FBPageCreationPictureUploadHandler : NSObject <FBPageSurfaceEditCoverControllerDelegate, FBTimelineEditCoverControllerDelegate, FBMediaAttachmentPickerControllerDelegate>
{
    FBProfilePicturePickerController *_profilePicturePickerController;
    FBMediaAttachmentPickerController *_coverPhotoPickerController;
    FBPageSurfaceEditCoverController *_editCoverPhotoController;
    UIViewController *_coverPhotoPickerViewController;
    FBUserSession *_session;
    FBMemPage *_page;
    CDUnknownBlockType _coverUploadCompletionBlock;
    CDUnknownBlockType _profileUploadCompletionBlock;
    UIImage *_profileImage;
    UIImage *_coverImage;
    UIViewController *_presentingViewController;
}

@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(copy, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(copy, nonatomic) UIImage *profileImage; // @synthesize profileImage=_profileImage;
@property(copy, nonatomic) CDUnknownBlockType profileUploadCompletionBlock; // @synthesize profileUploadCompletionBlock=_profileUploadCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType coverUploadCompletionBlock; // @synthesize coverUploadCompletionBlock=_coverUploadCompletionBlock;
- (void).cxx_destruct;
- (void)_presentImagePickerWithAccessToken:(id)arg1 sourceType:(long long)arg2 sender:(id)arg3;
- (void)_updateCoverPhoto:(id)arg1 focus:(struct CGPoint)arg2 accessToken:(id)arg3;
- (void)saveCoverPhoto:(id)arg1 focus:(struct CGPoint)arg2;
- (void)cancelCoverPhotoEdit;
- (void)mediaAttachmentPickerControllerDidClearMediaAttachments:(id)arg1;
- (void)mediaAttachmentPickerControllerPermissionDenied:(id)arg1;
- (void)mediaAttachmentPickerControllerDidCancel:(id)arg1;
- (void)mediaAttachmentPickerController:(id)arg1 didSelectMediaAttachments:(id)arg2 fromSource:(long long)arg3;
- (void)openCoverPhotoPicker;
- (void)showPickerFromSender:(id)arg1 sourceType:(long long)arg2;
- (id)initWithPage:(id)arg1 session:(id)arg2 viewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
