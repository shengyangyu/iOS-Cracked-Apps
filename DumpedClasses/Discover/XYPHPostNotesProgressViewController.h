//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView;

@interface XYPHPostNotesProgressViewController : XYPHBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_postNotesArray;
    UITableView *_progressTableView;
}

@property(retain, nonatomic) UITableView *progressTableView; // @synthesize progressTableView=_progressTableView;
@property(retain, nonatomic) NSMutableArray *postNotesArray; // @synthesize postNotesArray=_postNotesArray;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)updateViewHeight:(id)arg1;
- (void)updateProgressBar:(id)arg1;
- (void)updateProgressContent:(id)arg1;
- (void)cellDraftButtonPressed:(id)arg1;
- (void)cellRetryButtonPressed:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)fetchNotes;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPostNotesArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

