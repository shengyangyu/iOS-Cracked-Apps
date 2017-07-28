//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface UPJsonBase : NSObject
{
    NSMutableArray *errorTrace;
    unsigned long long depth;
    unsigned long long maxDepth;
}

@property unsigned long long maxDepth; // @synthesize maxDepth;
@property(readonly, copy) NSArray *errorTrace; // @synthesize errorTrace;
- (void)clearErrorTrace;
- (void)addErrorWithCode:(unsigned long long)arg1 description:(id)arg2;
- (void)dealloc;
- (id)init;

@end

