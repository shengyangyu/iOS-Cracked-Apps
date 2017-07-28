//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXOMTAEvent.h"

#import "WXOMTAEventProtocol.h"

@class NSString;

@interface WXOMTAGameUserEvent : WXOMTAEvent <WXOMTAEventProtocol>
{
    NSString *_uid;
    NSString *_world;
    NSString *_level;
}

@property(retain, nonatomic) NSString *level; // @synthesize level=_level;
@property(retain, nonatomic) NSString *world; // @synthesize world=_world;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)init;
- (void)encode:(id)arg1;
- (int)getType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

