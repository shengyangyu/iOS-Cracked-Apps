//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray, QYUCardDataV3, UIImageView, UIView;

@interface QYUCardLineType12 : UITableViewCell
{
    UIImageView *bgView;
    NSMutableArray *blockViews;
    UIView *grayView;
    _Bool _reused;
    NSArray *_data;
    QYUCardDataV3 *_cardData;
    long long _row;
    NSMutableArray *_blocks;
    NSMutableArray *_dotArray;
    UIView *_dotBackgroundView;
    UIView *_maskView;
}

+ (double)getHeightByData:(id)arg1 row:(unsigned long long)arg2 ratio:(id)arg3 cardData:(id)arg4;
+ (id)getInstance:(id)arg1 row:(long long)arg2 rowData:(id)arg3 table:(id)arg4;
+ (id)getReuseIdentifier:(id)arg1 cardData:(id)arg2;
@property(nonatomic) _Bool reused; // @synthesize reused=_reused;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *dotBackgroundView; // @synthesize dotBackgroundView=_dotBackgroundView;
@property(retain, nonatomic) NSMutableArray *dotArray; // @synthesize dotArray=_dotArray;
@property(retain, nonatomic) NSMutableArray *blocks; // @synthesize blocks=_blocks;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(retain, nonatomic) QYUCardDataV3 *cardData; // @synthesize cardData=_cardData;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)clearBlockViews;
- (void)layoutSubviews;
- (void)refreshSubControls;
- (void)initSubControls;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

