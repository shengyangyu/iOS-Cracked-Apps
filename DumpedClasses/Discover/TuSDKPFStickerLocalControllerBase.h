//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TuSDKCPViewController.h"

#import "TuSDKPFStickerLocalPackageDelegate.h"

@class NSArray, NSString;

@interface TuSDKPFStickerLocalControllerBase : TuSDKCPViewController <TuSDKPFStickerLocalPackageDelegate>
{
    NSArray *_categories;
}

@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (void).cxx_destruct;
- (void)reloadStickers;
- (void)stickerManager:(id)arg1 item:(id)arg2 changedStatus:(long long)arg3;
- (void)removeWithStickerGroup:(id)arg1;
- (void)controllerWillDestory;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

