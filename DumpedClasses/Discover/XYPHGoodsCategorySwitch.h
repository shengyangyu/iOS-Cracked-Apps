//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, NSMutableArray, UIButton, UIColor, UIFont, UIView;

@interface XYPHGoodsCategorySwitch : UIControl
{
    UIButton *_segmentMoreButton;
    UIButton *_fakeSegmentMoreButton;
    id <XYPHGoodsCategorySwitchDelegate> _switchDelegate;
    UIColor *_backgroundColor;
    UIColor *_sliderColor;
    UIColor *_labelTextColorInsideSlider;
    UIColor *_labelTextColorOutsideSlider;
    UIFont *_font;
    double _cornerRadius;
    double _sliderOffset;
    NSMutableArray *_labels;
    NSMutableArray *_onTopLabels;
    NSArray *_strings;
    CDUnknownBlockType _handlerBlock;
    CDUnknownBlockType _willBePressedHandlerBlock;
    UIView *_backgroundView;
    UIView *_sliderView;
    long long _selectedIndex;
    UIView *_topHorizontalLine;
    UIView *_bottomHorizontalLine;
}

@property(retain, nonatomic) UIView *bottomHorizontalLine; // @synthesize bottomHorizontalLine=_bottomHorizontalLine;
@property(retain, nonatomic) UIView *topHorizontalLine; // @synthesize topHorizontalLine=_topHorizontalLine;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIView *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType willBePressedHandlerBlock; // @synthesize willBePressedHandlerBlock=_willBePressedHandlerBlock;
@property(copy, nonatomic) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
@property(retain, nonatomic) NSArray *strings; // @synthesize strings=_strings;
@property(retain, nonatomic) NSMutableArray *onTopLabels; // @synthesize onTopLabels=_onTopLabels;
@property(retain, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
@property(nonatomic) double sliderOffset; // @synthesize sliderOffset=_sliderOffset;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *labelTextColorOutsideSlider; // @synthesize labelTextColorOutsideSlider=_labelTextColorOutsideSlider;
@property(retain, nonatomic) UIColor *labelTextColorInsideSlider; // @synthesize labelTextColorInsideSlider=_labelTextColorInsideSlider;
@property(retain, nonatomic) UIColor *sliderColor; // @synthesize sliderColor=_sliderColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) __weak id <XYPHGoodsCategorySwitchDelegate> switchDelegate; // @synthesize switchDelegate=_switchDelegate;
@property(retain, nonatomic) UIButton *fakeSegmentMoreButton; // @synthesize fakeSegmentMoreButton=_fakeSegmentMoreButton;
@property(retain, nonatomic) UIButton *segmentMoreButton; // @synthesize segmentMoreButton=_segmentMoreButton;
- (void).cxx_destruct;
- (void)moreButtonClicked:(id)arg1;
- (void)handleRecognizerTap:(id)arg1;
- (void)changeToIndexWithoutAnimation:(unsigned long long)arg1 callHandler:(_Bool)arg2;
- (void)animateChangeToIndex:(unsigned long long)arg1 callHandler:(_Bool)arg2;
- (void)layoutSubviews;
- (void)selectIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)forceSelectedIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setWillBePressedHandler:(CDUnknownBlockType)arg1;
- (void)setPressedHandler:(CDUnknownBlockType)arg1;
- (void)hideBorderLine;
- (id)initWithStringsArray:(id)arg1;
- (id)init;

@end

