//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class NSString;

@interface TuSDKICTableView : UITableView
{
    NSString *_cellIdentifier;
}

+ (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
+ (id)initWithFrame:(struct CGRect)arg1;
+ (id)tableWithHeight:(float)arg1;
+ (id)table;
@property(readonly, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
- (void).cxx_destruct;
- (void)reloadDataSaveSelected;
- (void)setCellSelected:(_Bool)arg1 rowAtIndexPath:(id)arg2;
- (void)deselectRow;
- (void)deselectRow:(_Bool)arg1;
- (void)initView;
- (void)setTopHeight:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

