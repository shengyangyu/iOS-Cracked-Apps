//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString;

@interface XYPHLikeNoteImg : XYRKModel
{
    NSString *_like_img;
    NSString *_liked_img;
    NSString *_like_animation_img;
    NSString *_start;
    NSString *_end;
}

+ (id)endJSONTransformer;
+ (id)startJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *end; // @synthesize end=_end;
@property(retain, nonatomic) NSString *start; // @synthesize start=_start;
@property(retain, nonatomic) NSString *like_animation_img; // @synthesize like_animation_img=_like_animation_img;
@property(retain, nonatomic) NSString *liked_img; // @synthesize liked_img=_liked_img;
@property(retain, nonatomic) NSString *like_img; // @synthesize like_img=_like_img;
- (void).cxx_destruct;

@end

