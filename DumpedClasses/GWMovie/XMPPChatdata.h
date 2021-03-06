//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface XMPPChatdata : NSObject
{
    _Bool isGroup;
    _Bool isEncrypted;
    _Bool _isAnonymous;
    _Bool _offlineMessage;
    _Bool _isChatroom;
    NSString *fromJid;
    NSString *toJid;
    long long timestamp;
    NSString *groupSenderJid;
    NSString *chatId;
    NSString *rawMessage;
    NSString *_anonymousNick;
}

@property(nonatomic) _Bool isChatroom; // @synthesize isChatroom=_isChatroom;
@property(nonatomic, getter=isOfflineMessage) _Bool offlineMessage; // @synthesize offlineMessage=_offlineMessage;
@property(copy, nonatomic) NSString *anonymousNick; // @synthesize anonymousNick=_anonymousNick;
@property(nonatomic) _Bool isAnonymous; // @synthesize isAnonymous=_isAnonymous;
@property(nonatomic) _Bool isEncrypted; // @synthesize isEncrypted;
@property(copy, nonatomic) NSString *rawMessage; // @synthesize rawMessage;
@property(copy, nonatomic) NSString *chatId; // @synthesize chatId;
@property(copy, nonatomic) NSString *groupSenderJid; // @synthesize groupSenderJid;
@property(nonatomic) _Bool isGroup; // @synthesize isGroup;
@property(nonatomic) long long timestamp; // @synthesize timestamp;
@property(copy, nonatomic) NSString *toJid; // @synthesize toJid;
@property(copy, nonatomic) NSString *fromJid; // @synthesize fromJid;
- (void).cxx_destruct;
- (id)description;

@end

