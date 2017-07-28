//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface SSEBaseUser : NSObject <NSCoding>
{
    NSString *_linkId;
    NSMutableDictionary *_socialUserDict;
}

@property(retain, nonatomic) NSMutableDictionary *socialUserDict; // @synthesize socialUserDict=_socialUserDict;
@property(copy, nonatomic) NSString *linkId; // @synthesize linkId=_linkId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateInfo:(id)arg1;
@property(readonly, nonatomic) NSDictionary *socialUsers;
- (id)init;

@end

