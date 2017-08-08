//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, PTHTweetbotPostDraft;
@protocol PTHTweetbotPostViewDelegate;

@interface PTHTweetbotPostMediaView : UIView
{
    id _draftObserver;
    NSArray *_media;
    NSArray *_thumbnailViews;
    PTHTweetbotPostDraft *_draft;
    id <PTHTweetbotPostViewDelegate> _delegate;
    long long _mode;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <PTHTweetbotPostViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PTHTweetbotPostDraft *draft; // @synthesize draft=_draft;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)_draftDidUpdate;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setMode:(long long)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateThumbnailPositions:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_selectedThumbnailView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
