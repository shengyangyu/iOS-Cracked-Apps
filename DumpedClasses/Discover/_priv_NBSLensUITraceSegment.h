//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface _priv_NBSLensUITraceSegment : NSObject
{
    int _entryTime;
    int _exitTime;
    long long _Segment_id;
    double _startTime;
    NSString *_segmentName;
    NSArray *_threadInfo;
    NSDictionary *_segmentParam;
    NSMutableArray *_childSegments;
}

@property(retain, nonatomic) NSMutableArray *childSegments; // @synthesize childSegments=_childSegments;
@property(retain, nonatomic) NSDictionary *segmentParam; // @synthesize segmentParam=_segmentParam;
@property(retain, nonatomic) NSArray *threadInfo; // @synthesize threadInfo=_threadInfo;
@property(retain, nonatomic) NSString *segmentName; // @synthesize segmentName=_segmentName;
@property(nonatomic) int exitTime; // @synthesize exitTime=_exitTime;
@property(nonatomic) int entryTime; // @synthesize entryTime=_entryTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property long long Segment_id; // @synthesize Segment_id=_Segment_id;
- (void).cxx_destruct;
- (void)setNetworkParam:(id)arg1;
- (void)setThreadInfomation:(id)arg1;
- (id)init;

@end

