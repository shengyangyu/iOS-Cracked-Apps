//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseFilterTag.h"

@class NSMutableArray, NSString;

@interface XYPHSearchFilterGroup : XYPHBaseFilterTag
{
    NSString *_type;
    NSMutableArray *_filterTags;
}

+ (id)filterTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSMutableArray *filterTags; // @synthesize filterTags=_filterTags;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

