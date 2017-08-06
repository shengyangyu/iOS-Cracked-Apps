//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGFXPlayerView, KGLiveManager, NSArray, UIImageView, UIImageViewHL;

@interface FXLiveAutoPlayView : UIView
{
    _Bool _isMobileLive;
    NSArray *_urlArray;
    id <FXLiveAutoPlayViewDelegate> _delegate;
    KGFXPlayerView *_playerView;
    UIImageView *_loadingImageView;
    UIImageViewHL *_tagImageView;
    KGLiveManager *_livePlayer;
    unsigned long long _playIndex;
}

@property(nonatomic) unsigned long long playIndex; // @synthesize playIndex=_playIndex;
@property(retain, nonatomic) KGLiveManager *livePlayer; // @synthesize livePlayer=_livePlayer;
@property(retain, nonatomic) UIImageViewHL *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(retain, nonatomic) KGFXPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <FXLiveAutoPlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isMobileLive; // @synthesize isMobileLive=_isMobileLive;
@property(copy, nonatomic) NSArray *urlArray; // @synthesize urlArray=_urlArray;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopPlay;
- (void)stopLoadingImageViewAnim;
- (void)startPlay;

@end
