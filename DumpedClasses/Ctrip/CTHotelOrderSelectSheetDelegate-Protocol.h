//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTHotelOrderSelectSheet, CTHotelOrderSelectSheetModel;

@protocol CTHotelOrderSelectSheetDelegate <NSObject>

@optional
- (void)sheetDisappear:(CTHotelOrderSelectSheet *)arg1;
- (void)orderSheet:(CTHotelOrderSelectSheet *)arg1 didSelected:(CTHotelOrderSelectSheetModel *)arg2 withIndex:(long long)arg3;
@end

