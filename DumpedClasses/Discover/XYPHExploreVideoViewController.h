//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseNoteListViewController.h"

@interface XYPHExploreVideoViewController : XYPHBaseNoteListViewController
{
    _Bool _isRequestData;
    id <UIScrollViewDelegate> _superScrolldelegate;
    long long _page;
}

@property(nonatomic) long long page; // @synthesize page=_page;
@property _Bool isRequestData; // @synthesize isRequestData=_isRequestData;
@property(nonatomic) id <UIScrollViewDelegate> superScrolldelegate; // @synthesize superScrolldelegate=_superScrolldelegate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)requestNoteListMore:(id)arg1 cusor:(id)arg2;
- (void)requestNoteList:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

