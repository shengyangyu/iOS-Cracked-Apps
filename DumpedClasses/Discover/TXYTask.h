//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface TXYTask : NSObject <NSCoding>
{
    long long _taskId;
    NSString *_flowId;
}

@property(retain, nonatomic) NSString *flowId; // @synthesize flowId=_flowId;
@property(nonatomic) long long taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)randomIn1000;
- (long long)generateTaskId;
- (id)generateUUId;
- (id)init;

@end

