//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IFTTTFilmstrip;

@interface IFTTTAnimation : NSObject
{
    IFTTTFilmstrip *_filmstrip;
}

@property(retain, nonatomic) IFTTTFilmstrip *filmstrip; // @synthesize filmstrip=_filmstrip;
- (void).cxx_destruct;
- (_Bool)hasKeyframes;
- (id)valueAtTime:(double)arg1;
- (void)addKeyframeForTime:(double)arg1 value:(id)arg2 withEasingFunction:(CDUnknownBlockType)arg3;
- (void)addKeyframeForTime:(double)arg1 value:(id)arg2;
- (id)init;

@end

