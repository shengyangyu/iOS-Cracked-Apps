//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@protocol FBCollectionViewMutating;

@protocol FBCollectionViewSectionDataSource <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property(nonatomic) id <FBCollectionViewMutating> collectionViewMutator;
- (void)registerClassWithReuseIdentifier;

@optional
@property(nonatomic, getter=isActive) _Bool active;
@end
