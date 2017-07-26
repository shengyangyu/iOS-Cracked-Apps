//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCChatBubble.h"

#import "TBTextLabelDelegate.h"

@class NSString, TBTextLabel, UIImageView;

@interface MCChatSystemBubble : MCChatBubble <TBTextLabelDelegate>
{
    UIImageView *_innerBubbleImageView;
    TBTextLabel *_textLabel;
}

+ (struct CGSize)textSizeForMessage:(id)arg1 withContainer:(struct CGSize)arg2;
+ (struct CGSize)bubbleSizeForMessage:(id)arg1 withContainer:(struct CGSize)arg2;
@property(retain, nonatomic) TBTextLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *innerBubbleImageView; // @synthesize innerBubbleImageView=_innerBubbleImageView;
- (void).cxx_destruct;
- (void)textLabel:(id)arg1 didTapWithLink:(id)arg2 range:(struct _NSRange)arg3;
- (void)recycle;
- (void)updateBubbleWithCellObject:(id)arg1 bubbleHandler:(id)arg2;
- (id)initWithBubbleStyle:(long long)arg1 subStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
