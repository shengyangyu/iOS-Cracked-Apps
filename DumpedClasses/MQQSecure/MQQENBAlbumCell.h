//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MQQCPLAlbum, MQQCPLDownloadOperation, NSArray, UILabel;

@interface MQQENBAlbumCell : UITableViewCell
{
    NSArray *_imageViews;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    MQQCPLAlbum *_album;
    MQQCPLDownloadOperation *_downloadOperation;
}

+ (double)defaultHeight;
@property(retain, nonatomic) MQQCPLDownloadOperation *downloadOperation; // @synthesize downloadOperation=_downloadOperation;
@property(retain, nonatomic) MQQCPLAlbum *album; // @synthesize album=_album;
- (void)updateAlbum:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
