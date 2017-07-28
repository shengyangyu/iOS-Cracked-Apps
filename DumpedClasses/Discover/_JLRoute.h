//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JLRoutes, NSArray, NSString;

@interface _JLRoute : NSObject
{
    _Bool _matchFragmentComponents;
    JLRoutes *_parentRoutesController;
    NSString *_pattern;
    CDUnknownBlockType _block;
    unsigned long long _priority;
    NSArray *_patternPathComponents;
    NSArray *_patternFragmentComponents;
}

@property(nonatomic) _Bool matchFragmentComponents; // @synthesize matchFragmentComponents=_matchFragmentComponents;
@property(retain, nonatomic) NSArray *patternFragmentComponents; // @synthesize patternFragmentComponents=_patternFragmentComponents;
@property(retain, nonatomic) NSArray *patternPathComponents; // @synthesize patternPathComponents=_patternPathComponents;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
@property(nonatomic) __weak JLRoutes *parentRoutesController; // @synthesize parentRoutesController=_parentRoutesController;
- (void).cxx_destruct;
- (id)description;
- (id)_parametersForURL:(id)arg1 patternComponents:(id)arg2 components:(id)arg3;
- (id)parametersForURL:(id)arg1 pathComponents:(id)arg2 fragmentComponents:(id)arg3;

@end

