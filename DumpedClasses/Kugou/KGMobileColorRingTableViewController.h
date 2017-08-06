//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGColorRingPlayViewController.h"

#import "KGColorRingAlertViewDelegate.h"
#import "RefreshControlDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ColorRingCollectionInfo, ColorRingDataBLL, ColorRingInfo, KGProgressView, KGRefreshController, KGRingBannerView, KGRingImportView, KGTableView, NSIndexPath, NSString, UITableView, UIView, color_ring_banner;

@interface KGMobileColorRingTableViewController : KGColorRingPlayViewController <KGColorRingAlertViewDelegate, RefreshControlDelegate, UITableViewDataSource, UITableViewDelegate>
{
    KGTableView *_crbtTable;
    ColorRingInfo *_currentRingInfo;
    ColorRingDataBLL *_shareDataInstace;
    NSString *_alertVaildCodeStr;
    long long _alertIndex;
    _Bool _isLoadingNextPage;
    NSString *_openPhoneNumber;
    unsigned long long _selectedIndex;
    KGProgressView *_progressViewCR;
    _Bool _check_type_for_cell;
    _Bool _hidden_usr_icon_for_cell;
    _Bool _show_banner;
    ColorRingCollectionInfo *_collectionInfo;
    KGRefreshController *_refreshControl;
    color_ring_banner *_banner_info;
    color_ring_banner *_import_info;
    ColorRingInfo *_selectedRing;
    KGRingBannerView *_banner_view;
    KGRingImportView *_import_view;
    UIView *_menu_view;
    ColorRingInfo *_curr_play_ring;
    NSIndexPath *_curr_index_path;
}

@property(retain, nonatomic) NSIndexPath *curr_index_path; // @synthesize curr_index_path=_curr_index_path;
@property(retain, nonatomic) ColorRingInfo *curr_play_ring; // @synthesize curr_play_ring=_curr_play_ring;
@property(retain, nonatomic) UIView *menu_view; // @synthesize menu_view=_menu_view;
@property(retain, nonatomic) KGRingImportView *import_view; // @synthesize import_view=_import_view;
@property(retain, nonatomic) KGRingBannerView *banner_view; // @synthesize banner_view=_banner_view;
@property(retain, nonatomic) ColorRingInfo *selectedRing; // @synthesize selectedRing=_selectedRing;
@property(retain, nonatomic) color_ring_banner *import_info; // @synthesize import_info=_import_info;
@property(retain, nonatomic) color_ring_banner *banner_info; // @synthesize banner_info=_banner_info;
@property(retain, nonatomic) KGRefreshController *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) _Bool show_banner; // @synthesize show_banner=_show_banner;
@property(nonatomic) _Bool hidden_usr_icon_for_cell; // @synthesize hidden_usr_icon_for_cell=_hidden_usr_icon_for_cell;
@property(nonatomic) _Bool check_type_for_cell; // @synthesize check_type_for_cell=_check_type_for_cell;
@property(retain, nonatomic) ColorRingCollectionInfo *collectionInfo; // @synthesize collectionInfo=_collectionInfo;
@property(retain, nonatomic) UITableView *crbtTable; // @synthesize crbtTable=_crbtTable;
- (void).cxx_destruct;
- (void)showKGColorRingAlertView;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)cancelButtonClicked:(id)arg1 index:(long long)arg2;
- (void)orderAndSetColorRingWithVaildCode:(id)arg1 RingId:(id)arg2;
- (void)confirmButtonClicked:(id)arg1 index:(long long)arg2;
- (void)getVaildCodeButtonClicked:(id)arg1 index:(long long)arg2;
- (void)p_showLoadingImagesWithStatus2:(id)arg1 maskType:(unsigned long long)arg2;
- (void)showMsgProgress:(id)arg1 andParentView:(id)arg2 duration:(int)arg3 type:(_Bool)arg4;
- (void)showWithStatus:(id)arg1 andParentView:(id)arg2 maskType:(unsigned long long)arg3;
- (void)makeProgressView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reloadTable;
- (void)dealloc;
- (void)jump2App:(id)arg1;
- (void)jump2AppWithURL:(id)arg1;
- (void)check_need_to_show_banner;
- (void)go_to_load_banner;
- (void)go_to_load_import;
- (void)showStatus:(id)arg1;
- (void)getNextPage;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateUIWithPlayStateChange;
- (void)addTableHeaderView:(id)arg1;
- (void)addTableViewWithFrame:(struct CGRect)arg1 set_the_rolling:(_Bool)arg2;
- (void)addTableViewWithFrame:(struct CGRect)arg1;
- (void)updateColorRingListInfo;
- (void)colorRingStateChangeNotifi:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
