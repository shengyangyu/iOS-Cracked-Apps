//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHTweetbotCursorController.h"

@interface PTHTweetbotUserSearchController : PTHTweetbotCursorController
{
    _Bool _userSelectMode;
}

@property _Bool userSelectMode; // @synthesize userSelectMode=_userSelectMode;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)nothingFoundTitle;
- (id)itemsTitle;
- (id)itemTitle;
- (id)searchTitle;
- (Class)cellClass;
- (void)viewDidLoad;
- (id)initWithAccount:(id)arg1 query:(id)arg2;

@end
