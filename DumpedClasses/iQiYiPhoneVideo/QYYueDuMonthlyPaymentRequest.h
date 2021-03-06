//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYProductRequestManager.h"

#import "IQYDataLoadManagerDelegate-Protocol.h"

@class IQYBookMonthlyProductsManager, NSString;

@interface QYYueDuMonthlyPaymentRequest : QYProductRequestManager <IQYDataLoadManagerDelegate>
{
    IQYBookMonthlyProductsManager *_bookListManager;
}

@property(retain, nonatomic) IQYBookMonthlyProductsManager *bookListManager; // @synthesize bookListManager=_bookListManager;
- (void).cxx_destruct;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)requestProducts:(int)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

