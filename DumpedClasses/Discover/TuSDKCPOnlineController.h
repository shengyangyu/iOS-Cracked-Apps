//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TuSDKCPViewController.h"

#import "TuSDKICWebViewDelegate.h"

@class NSString, TuSDKICWebView;

@interface TuSDKCPOnlineController : TuSDKCPViewController <TuSDKICWebViewDelegate>
{
    _Bool _isLoaded;
    TuSDKICWebView *_webView;
    Class _viewClazz;
    unsigned long long _detailDataId;
    NSString *_onlineType;
}

@property(copy, nonatomic) NSString *onlineType; // @synthesize onlineType=_onlineType;
@property(nonatomic) unsigned long long detailDataId; // @synthesize detailDataId=_detailDataId;
@property(retain, nonatomic) Class viewClazz; // @synthesize viewClazz=_viewClazz;
@property(readonly, nonatomic) TuSDKICWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)notifyOnlineWithDownloadItem:(id)arg1;
- (void)handleDetail:(id)arg1;
- (void)handleSelected:(id)arg1;
- (void)onResourceCancelDownloadWithIdt:(unsigned long long)arg1;
- (void)handleCancel:(id)arg1;
- (void)onResourceDownloadWithIdt:(unsigned long long)arg1 key:(id)arg2 fileId:(id)arg3;
- (void)handleDownload:(id)arg1;
- (void)onReceivedWithType:(id)arg1 onlinCommand:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (id)pageFinishedData;
- (void)configDefaultStyleView:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

