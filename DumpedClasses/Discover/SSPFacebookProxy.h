//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMOBFPlugin.h"

@class NSString;

@interface SSPFacebookProxy : NSObject <IMOBFPlugin>
{
}

- (void)unload;
- (void)load:(id)arg1;
- (void)registerCancelAuthMethod;
- (void)registerShareMethod;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

