//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aluBizModel.h"

@class NSString;

@interface aluCallbackBizModel : aluBizModel
{
    CDUnknownBlockType _callback;
    NSString *_bizScene;
    NSString *_signData;
}

@property(retain, nonatomic) NSString *signData; // @synthesize signData=_signData;
@property(retain, nonatomic) NSString *bizScene; // @synthesize bizScene=_bizScene;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)dealloc;

@end
