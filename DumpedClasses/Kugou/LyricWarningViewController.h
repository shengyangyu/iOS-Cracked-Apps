//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class KGProgressView, NSString, UIButton, UIColor, UILabel, UIScrollView, UITableView, UITableViewCell, UITextView, UIView;

@interface LyricWarningViewController : KGViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, UIScrollViewDelegate>
{
    UITableView *_tableview;
    UITextView *_inputfield;
    UILabel *_inputLabel;
    UIView *_contentview;
    UITableViewCell *_selectedcell;
    UIButton *_surebutton;
    UIScrollView *_scrollBgView;
    UIColor *htColor;
    UIColor *ccColor;
    UIColor *ntColor;
    UIColor *stColor;
    int _timelength;
    int _isSusseccful;
    NSString *_filename;
    NSString *_mp3_hash;
    NSString *_imei;
    CDUnknownBlockType _dismiss_warning_block;
    KGProgressView *_progressview;
    UILabel *_placehoder;
    struct CGRect _tableFrame;
}

@property(retain, nonatomic) UILabel *placehoder; // @synthesize placehoder=_placehoder;
@property(nonatomic) struct CGRect tableFrame; // @synthesize tableFrame=_tableFrame;
@property(nonatomic) __weak KGProgressView *progressview; // @synthesize progressview=_progressview;
@property(nonatomic) int isSusseccful; // @synthesize isSusseccful=_isSusseccful;
@property(copy, nonatomic) CDUnknownBlockType dismiss_warning_block; // @synthesize dismiss_warning_block=_dismiss_warning_block;
@property(retain, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(nonatomic) int timelength; // @synthesize timelength=_timelength;
@property(retain, nonatomic) NSString *mp3_hash; // @synthesize mp3_hash=_mp3_hash;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGRect)contentviewframe;
- (void)keyboardresigned;
- (void)theKeyBoardWillHide:(id)arg1;
- (void)theKeyBoardWillShow:(id)arg1;
- (void)showtheToastwithState;
- (void)makeProgressView:(id)arg1;
- (void)showMsgProgress:(id)arg1 andParentView:(id)arg2 duration:(int)arg3 type:(_Bool)arg4;
- (void)Confirm:(id)arg1;
- (void)backAction;
- (void)didReceiveMemoryWarning;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initFinishBtn;
- (void)initInputView;
- (void)initView;
- (void)initNavBar;
- (void)viewDidLayoutSubviews;
- (void)initColor;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
