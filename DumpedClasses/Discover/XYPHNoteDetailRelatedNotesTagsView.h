//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSArray, UILabel, UIScrollView;

@interface XYPHNoteDetailRelatedNotesTagsView : UICollectionViewCell
{
    NSArray *_tagsArray;
    UILabel *_titleLabel;
    UIScrollView *_tagsScrollView;
}

@property(retain, nonatomic) UIScrollView *tagsScrollView; // @synthesize tagsScrollView=_tagsScrollView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *tagsArray; // @synthesize tagsArray=_tagsArray;
- (void).cxx_destruct;
- (void)initilize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

