//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NVMBookingServices.h"

@class NSString;

@interface NVMBookingServicesHandler : NSObject <NVMBookingServices>
{
}

- (id)confirmOrderViewControllerWithRestaurantID:(id)arg1 checkoutFoods:(id)arg2 rankID:(id)arg3;
- (id)confirmOrderViewControllerWithRestaurantID:(id)arg1 cartMetaData:(id)arg2 rankID:(id)arg3;
- (id)delayInsuranceWebViewController;
- (void)resumeCoOrderIfCan;
- (void)startPayProcessFromOrderWithOrderID:(id)arg1 restaurantID:(id)arg2 showOrderedPage:(_Bool)arg3 refreshBlock:(CDUnknownBlockType)arg4;
- (void)startPayProcessFromOrderWithOrderID:(id)arg1 restaurantID:(id)arg2 showOrderedPage:(_Bool)arg3;
- (void)showCoOrderWithRestaurantID:(id)arg1 restaurantType:(unsigned long long)arg2 piecewiseAgentFee:(id)arg3;
- (void)showCoOrderWithRestaurantID:(id)arg1 piecewiseAgentFee:(id)arg2;
- (id)addressListViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

