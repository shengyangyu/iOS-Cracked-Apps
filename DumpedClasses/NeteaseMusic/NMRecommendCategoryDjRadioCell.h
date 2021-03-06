//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "NMBaseSquareCoverButtonContentViewDelegate.h"

@class NMDjRadioCategory, NSArray, NSMutableArray, NSString;

@interface NMRecommendCategoryDjRadioCell : UITableViewCell <NMBaseSquareCoverButtonContentViewDelegate>
{
    NSMutableArray *_viewArray;
    NSArray *_resourceArray;
    id <NMRecommendCategoryDjRadioCellDelegate> _delegate;
    NMDjRadioCategory *_category;
}

+ (double)viewMaxWidth;
+ (unsigned long long)viewCountPerLine;
+ (double)heightForResources:(id)arg1;
@property(retain, nonatomic) NMDjRadioCategory *category; // @synthesize category=_category;
@property(nonatomic) __weak id <NMRecommendCategoryDjRadioCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *resourceArray; // @synthesize resourceArray=_resourceArray;
- (void).cxx_destruct;
- (id)viewForPoint:(struct CGPoint)arg1;
- (void)squareCoverButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

