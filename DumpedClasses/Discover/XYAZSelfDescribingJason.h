//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface XYAZSelfDescribingJason : NSObject
{
    NSMutableDictionary *_payload;
}

- (void).cxx_destruct;
- (id)description;
- (id)getAsDictionary;
- (void)setDataWithSelfDescribingJson:(id)arg1;
- (void)setDataWithPayload:(id)arg1;
- (void)setDataWithObject:(id)arg1;
- (void)setSchema:(id)arg1;
- (id)initWithSchema:(id)arg1 andSelfDescribingJson:(id)arg2;
- (id)initWithSchema:(id)arg1 andPayload:(id)arg2;
- (id)initWithSchema:(id)arg1 andData:(id)arg2;

@end

