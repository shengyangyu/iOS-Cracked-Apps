//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTVPlayerMVPCell, KTVPlayerMVPInfo, KTVPlayerMVPView, NSIndexPath;

@protocol KTVPlayerMVPViewDataSource <NSObject>
- (long long)numberOfSectionsInplayerMVPView:(KTVPlayerMVPView *)arg1;
- (void)playerMVPView:(KTVPlayerMVPView *)arg1 configurePlayerRankCell:(KTVPlayerMVPCell *)arg2;
- (KTVPlayerMVPInfo *)playerMVPView:(KTVPlayerMVPView *)arg1 ObjectByindexPath:(NSIndexPath *)arg2;
- (long long)numberOfPlayerMVP:(KTVPlayerMVPView *)arg1 numberOfRowsInSection:(long long)arg2;

@optional
- (_Bool)haveMoreDataInPlayerMVPView:(KTVPlayerMVPView *)arg1;
@end
