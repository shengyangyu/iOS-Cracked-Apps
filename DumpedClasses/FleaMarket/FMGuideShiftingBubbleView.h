//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMGuideBubbleView.h"

@class FMImageView, NSString;

@interface FMGuideShiftingBubbleView : FMGuideBubbleView
{
    FMImageView *_arrowView;
    NSString *_arrorImage;
    unsigned long long _arrowPosition;
}

@property(nonatomic) unsigned long long arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property(copy, nonatomic) NSString *arrorImage; // @synthesize arrorImage=_arrorImage;
- (void).cxx_destruct;
- (double)xOffsetForArrowPosition:(unsigned long long)arg1;
- (id)initWithImage:(id)arg1 withArrow:(id)arg2;

@end
