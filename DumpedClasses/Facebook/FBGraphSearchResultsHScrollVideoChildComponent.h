//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

#import "FBHScrollImpressionLogging-Protocol.h"
#import "FIGCardContentHScrollChildCompliant-Protocol.h"

@class FBSearchResultsPlayableVideoThumbnailComponent, NSString;

@interface FBGraphSearchResultsHScrollVideoChildComponent : CKCompositeComponent <FBHScrollImpressionLogging, FIGCardContentHScrollChildCompliant>
{
    FBSearchResultsPlayableVideoThumbnailComponent *_thumbnailComponent;
}

+ (id)newWithVideoEdgeModel:(id)arg1 context:(id)arg2 autoplay:(_Bool)arg3 insets:(struct UIEdgeInsets)arg4;
- (void).cxx_destruct;
- (void)didTapOnComponent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
