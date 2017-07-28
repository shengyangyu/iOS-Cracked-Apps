//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TuSDKAOCellGridViewAlgorithmic : NSObject
{
    double _inputWidth;
    double _desireSize;
    double _desireSpace;
    double _size;
    double _space;
    double _spaceStart;
    unsigned long long _count;
}

+ (id)initWithViewWidth:(double)arg1 desireSize:(double)arg2 space:(double)arg3;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) double spaceStart; // @synthesize spaceStart=_spaceStart;
@property(readonly, nonatomic) double space; // @synthesize space=_space;
@property(readonly, nonatomic) double size; // @synthesize size=_size;
- (void)initAlgorithmic;
- (id)initWithViewWidth:(double)arg1 desireSize:(double)arg2 space:(double)arg3;

@end

