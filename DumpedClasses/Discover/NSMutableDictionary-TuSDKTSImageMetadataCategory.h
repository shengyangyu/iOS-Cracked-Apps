//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableDictionary.h"

@class CLLocation;

@interface NSMutableDictionary (TuSDKTSImageMetadataCategory)
- (void)setImageOrientation:(long long)arg1;
- (void)setDigitalZoom:(double)arg1;
- (void)setKeywords:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setMake:(id)arg1 model:(id)arg2 software:(id)arg3;
- (void)setDateDigitized:(id)arg1;
- (void)setDateOriginal:(id)arg1;
- (void)setUserComment:(id)arg1;
- (id)dictionaryForKey:(struct __CFString *)arg1;
@property(nonatomic) double trueHeading;
@property(retain, nonatomic) CLLocation *location; // @dynamic location;
- (void)setHeading:(id)arg1;
- (id)initFromAssetURL:(id)arg1;
- (id)initWithInfoFromImagePicker:(id)arg1;
- (id)initWithImageSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)getUTCFormattedDate:(id)arg1;
@end

