//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XYPHMessageYouBoardCell, XYPHMessageYouCell, XYPHMessageYouFanCell, XYPHMessageYouFriendCell, XYPHMessageYouNoteCommentCell;

@protocol XYPHMessageYouCellDelegate <NSObject>

@optional
- (void)messageYouBoardCellDidTapBoard:(XYPHMessageYouBoardCell *)arg1;
- (void)messageYouNoteCommentCellDidTapComment:(XYPHMessageYouNoteCommentCell *)arg1;
- (void)messageYouNoteCellDidTapNote:(XYPHMessageYouCell *)arg1;
- (void)messageYouFriendCellDidTapFollowButton:(XYPHMessageYouFriendCell *)arg1;
- (void)messageYouFanCellDidTapFollowButton:(XYPHMessageYouFanCell *)arg1;
- (void)messageYouCellDidTapAvatar:(XYPHMessageYouCell *)arg1;
@end

