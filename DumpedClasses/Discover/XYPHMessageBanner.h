//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString;

@interface XYPHMessageBanner : XYRKModel
{
    NSString *_ID;
    NSString *_title;
    NSString *_content;
    NSString *_actionButtonTitle;
    NSString *_link;
}

+ (id)notificationBanner;
+ (id)recommendUserBanner;
+ (id)recommendContactsBanner;
+ (id)recommendWeiboBanner;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;

@end

