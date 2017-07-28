//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCOrderContainerViewController.h"

#import "DBOrderViewProtocol.h"

@class DCPGetOrderInfoModel, NSDictionary, NSString;

@interface DCPOrderContainerViewController : DCOrderContainerViewController <DBOrderViewProtocol>
{
    NSDictionary *userInfo;
    unsigned long long animationType;
    long long _currentRole;
    NSString *orderID;
}

+ (void)load;
@property(copy, nonatomic) NSString *orderID; // @synthesize orderID;
@property(readonly, nonatomic) long long currentRole; // @synthesize currentRole=_currentRole;
@property(nonatomic) unsigned long long animationType; // @synthesize animationType;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
- (void).cxx_destruct;
- (id)dcpSubPageNameForOrderModel:(id)arg1;
- (id)nextSubVCNode;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)showChildVC;
- (void)modelStateChange:(id)arg1;
- (void)changeOrderId:(id)arg1;
- (void)observerDataModelChanged;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id orderData;
@property(retain, nonatomic) DCPGetOrderInfoModel *orderModel; // @dynamic orderModel;
@property(readonly) Class superclass;

@end
