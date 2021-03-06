//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class QQApiObject;

@interface QQApiMessage : NSObject <NSCoding>
{
    QQApiObject *_object;
    unsigned long long _type;
}

+ (id)messageWithObject:(id)arg1 andType:(unsigned long long)arg2;
+ (id)messageWithObject:(id)arg1;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) QQApiObject *object; // @synthesize object=_object;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithObject:(id)arg1 andType:(unsigned long long)arg2;
- (_Bool)isAssociatedWithTask;
- (void)setAssociatedTask:(id)arg1;

@end

