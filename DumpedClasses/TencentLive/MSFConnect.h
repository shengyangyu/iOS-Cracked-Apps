//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class NSMutableData, NSMutableURLRequest, NSString, NSURLConnection;

@interface MSFConnect : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    id <MSFConnectProtocol> msfDelegate;
    NSMutableData *rspData;
    NSMutableURLRequest *urlRequest;
    NSURLConnection *httpRequest;
}

- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancel:(long long)arg1;
- (int)sendData:(id)arg1 withTimeout:(double)arg2 param:(id)arg3 delegate:(id)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
