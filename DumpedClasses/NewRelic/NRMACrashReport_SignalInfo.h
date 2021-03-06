//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NRMAJSONABLE-Protocol.h"

@class NSString;

@interface NRMACrashReport_SignalInfo : NSObject <NRMAJSONABLE>
{
    NSString *_faultAddress;
    NSString *_signalCode;
    NSString *_signalName;
}

@property(retain) NSString *signalName; // @synthesize signalName=_signalName;
@property(retain) NSString *signalCode; // @synthesize signalCode=_signalCode;
@property(retain) NSString *faultAddress; // @synthesize faultAddress=_faultAddress;
- (void).cxx_destruct;
- (id)JSONObject;
- (id)initWithFaultAddress:(id)arg1 signalCode:(id)arg2 signalName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

