//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MASTMRAIDExpandProperties : NSObject
{
    _Bool useCustomClose;
    long long width;
    long long height;
}

+ (id)propertiesFromArgs:(id)arg1;
@property(nonatomic) _Bool useCustomClose; // @synthesize useCustomClose;
@property(nonatomic) long long height; // @synthesize height;
@property(nonatomic) long long width; // @synthesize width;
- (id)description;
- (id)initWithSize:(struct CGSize)arg1;
- (id)init;

@end

