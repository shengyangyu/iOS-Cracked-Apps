//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PTHActionItem : NSObject
{
    _Bool _enabled;
    NSString *_title;
    CDUnknownBlockType _chosenBlock;
    long long _buttonStyle;
    long long _tag;
}

+ (id)actionItemWithTitle:(id)arg1 chosenBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(copy, nonatomic) CDUnknownBlockType chosenBlock; // @synthesize chosenBlock=_chosenBlock;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

