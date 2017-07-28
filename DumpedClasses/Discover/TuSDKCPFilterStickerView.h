//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TuSDKCPFilterStickerViewInterface.h"

@class NSString, TuSDKICMaskRegionView, TuSDKPFStickerView, UIView<TuSDKICFilterImageViewInterface>;

@interface TuSDKCPFilterStickerView : UIView <TuSDKCPFilterStickerViewInterface>
{
    TuSDKICMaskRegionView *_cutRegionView;
    TuSDKPFStickerView *_stickerView;
    UIView<TuSDKICFilterImageViewInterface> *_filterView;
}

@property(readonly, nonatomic) UIView<TuSDKICFilterImageViewInterface> *filterView; // @synthesize filterView=_filterView;
@property(readonly, nonatomic) TuSDKPFStickerView *stickerView; // @synthesize stickerView=_stickerView;
@property(readonly, nonatomic) TuSDKICMaskRegionView *cutRegionView; // @synthesize cutRegionView=_cutRegionView;
- (void).cxx_destruct;
- (id)stickerResults;
- (void)setFilterWrap:(id)arg1;
- (void)setImage:(id)arg1;
- (void)needUpdateLayout;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

