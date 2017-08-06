//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FXMobileLiveRoomShareVCDelegate.h"
#import "KGShareViewControllerDelegate.h"
#import "MTSharerProtocol.h"

@class FXMobileLiveRoomShareVC, FXShareViewController, NSArray, NSString;

@interface MTSharer : NSObject <MTSharerProtocol, KGShareViewControllerDelegate, FXMobileLiveRoomShareVCDelegate>
{
    _Bool _show;
    long long _tag;
    NSArray *_items;
    id <MTSharerDelegate> _delegate;
    FXMobileLiveRoomShareVC *_mobileLiveSharer;
    FXShareViewController *_liveSharer;
    NSString *_message;
    long long _type;
}

+ (id)sharerWithDelegate:(id)arg1;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic, getter=isShow) _Bool show; // @synthesize show=_show;
@property(retain, nonatomic) FXShareViewController *liveSharer; // @synthesize liveSharer=_liveSharer;
@property(retain, nonatomic) FXMobileLiveRoomShareVC *mobileLiveSharer; // @synthesize mobileLiveSharer=_mobileLiveSharer;
@property(nonatomic) __weak id <MTSharerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelShare;
- (id)showShareViewHeadView;
- (void)shouldBeginShareWithMsg:(id)arg1;
- (void)shareComplete:(_Bool)arg1 AndErrorCode:(unsigned long long)arg2 AndErrorMsg:(id)arg3 AndController:(id)arg4 AndItem:(id)arg5;
- (_Bool)clickShareViewController:(id)arg1 withItem:(id)arg2;
- (void)hideActionComplete;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (unsigned long long)shareTypeWithTag:(unsigned long long)arg1;
- (id)getShareModelWithShareInfo:(id)arg1;
- (id)getShareExtendObjWithShareExtendModel:(id)arg1;
- (id)getShareInfoWithShareModel:(id)arg1;
- (void)shareWithItem:(id)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (id)getShareInfoImgIcon;
- (void)setShareInfoTryListenUrl:(id)arg1;
- (void)setShareInfoSingerName:(id)arg1;
- (void)setShareInfoImgIcon:(id)arg1;
- (void)setShareInfoImgIconUrl:(id)arg1;
- (void)setShareExtendModel:(id)arg1;
- (void)setShareModel:(id)arg1;
- (void)setShareHideScreenShot:(_Bool)arg1;
- (void)setSharerTitle:(id)arg1;
- (void)setSharerType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
