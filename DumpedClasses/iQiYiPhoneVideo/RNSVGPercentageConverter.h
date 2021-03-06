//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSRegularExpression;

@interface RNSVGPercentageConverter : NSObject
{
    double _relative;
    double _offset;
    NSRegularExpression *percentageRegularExpression;
}

- (void).cxx_destruct;
- (_Bool)isPercentage:(id)arg1;
- (double)percentageToFloat:(id)arg1 relative:(double)arg2 offset:(double)arg3;
- (double)percentageToFloat:(id)arg1;
- (double)stringToFloat:(id)arg1 relative:(double)arg2 offset:(double)arg3;
- (double)stringToFloat:(id)arg1;
- (id)getPercentageRegularExpression;
- (id)init;
- (id)initWithRelativeAndOffset:(double)arg1 offset:(double)arg2;

@end

