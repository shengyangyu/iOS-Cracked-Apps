//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTradeComponentModel.h"

#import "TBTradeCTSecDeliveryInfoDelegate.h"

@class NSMutableArray, NSString;

@interface TBTradeCTSecDeliveryInfoModel : TBTradeComponentModel <TBTradeCTSecDeliveryInfoDelegate>
{
    NSMutableArray *_options;
}

@property(retain, nonatomic) NSMutableArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)loadOptionArray:(id)arg1;
- (_Bool)needThroughLine;
- (id)descIcon;
- (id)desc;
- (id)chinesePrice;
- (id)title;
- (void)updateFiledsData:(id)arg1;
- (void)initEmptyOptions;
- (void)setSelectedId:(id)arg1 reloadData:(_Bool)arg2;
@property(retain, nonatomic) NSString *selectedId;
- (void)reload:(id)arg1;
- (id)initWithData:(id)arg1 withBuyEngine:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
