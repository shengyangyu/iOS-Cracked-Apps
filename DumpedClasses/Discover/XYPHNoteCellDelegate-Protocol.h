//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UICollectionViewCell, XYPHNoteMentionLocation, XYPHStoreGoods, XYTextLinkItem;

@protocol XYPHNoteCellDelegate <NSObject>

@optional
- (void)noteCellLocationButtonClicked:(UICollectionViewCell *)arg1;
- (void)noteCellShareToQQClicked:(UICollectionViewCell *)arg1;
- (void)noteCellShareToweiboClicked:(UICollectionViewCell *)arg1;
- (void)noteCellShareToWechatClicked:(UICollectionViewCell *)arg1;
- (void)noteCellShareToMomentClicked:(UICollectionViewCell *)arg1;
- (void)noteCellRedPacketClicked:(UICollectionViewCell *)arg1;
- (void)noteCellMoreGoodsClicked:(UICollectionViewCell *)arg1;
- (void)noteCellDescLinkClicked:(XYTextLinkItem *)arg1;
- (void)noteCellMetionGoodsClicked:(XYPHStoreGoods *)arg1;
- (void)noteCellMetionLocationClicked:(XYPHNoteMentionLocation *)arg1;
- (void)noteCellRelatedGoodsClicked:(XYPHStoreGoods *)arg1;
- (void)noteCellNotInterestClicked:(UICollectionViewCell *)arg1;
- (void)noteCellCollectButtonClicked:(UICollectionViewCell *)arg1;
- (void)noteCellTagButtonClicked:(NSString *)arg1;
- (void)noteCellUserButtonClicked:(UICollectionViewCell *)arg1;
- (void)noteCellCommentsButtonClicked:(UICollectionViewCell *)arg1;
- (void)noteCellLikesButtonClicked:(UICollectionViewCell *)arg1;
- (void)noteCellAuthorFollowButtonClicked:(UICollectionViewCell *)arg1;
@end

