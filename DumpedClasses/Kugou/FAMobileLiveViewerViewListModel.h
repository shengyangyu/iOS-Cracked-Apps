//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FAMobileLiveViewerViewListModel : NSObject
{
}

+ (void)getSelfMountList:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;
+ (void)getRoomMountListWithRoomId:(long long)arg1 page:(long long)arg2 size:(long long)arg3 succeed:(CDUnknownBlockType)arg4 fail:(CDUnknownBlockType)arg5;
+ (void)getViewerCountWithRoomId:(long long)arg1 sucessHandler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3;
+ (void)getViewerList:(long long)arg1 sucessHandler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3;

@end
