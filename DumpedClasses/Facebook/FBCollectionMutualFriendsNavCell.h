//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBCollectionNavCell.h"

@class FBCollectionFacepileView, FBMemPerson;

@interface FBCollectionMutualFriendsNavCell : FBCollectionNavCell
{
    FBCollectionFacepileView *_facePileView;
    FBMemPerson *_person;
}

@property(retain, nonatomic) FBMemPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 session:(id)arg2 showCustomBorder:(_Bool)arg3;

@end
