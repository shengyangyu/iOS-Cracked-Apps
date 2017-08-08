//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAccountRecoveryChangePasswordController, FBAccountRecoveryCodeEntryController, FBAccountRecoveryFlowData, FBAccountRecoverySearchController, NSString, UIViewController;
@protocol FBAccountRecoveryChangePasswordFlowControlling, FBAccountRecoveryCodeEntryFlowControlling, FBAccountRecoveryContactPointsFlowControlling, FBAccountRecoveryFDRFlowControlling, FBAccountRecoveryFriendFlowControlling, FBAccountRecoveryOtherSessionsFlowControlling, FBAccountRecoverySearchFlowControlling;

@protocol FBAccountRecoveryUIProviding <NSObject>
- (UIViewController *)fdrViewControllerWithFlowData:(FBAccountRecoveryFlowData *)arg1 fdrFlowControlling:(id <FBAccountRecoveryFDRFlowControlling>)arg2;
- (UIViewController *)friendViewController:(id <FBAccountRecoveryFriendFlowControlling>)arg1;
- (UIViewController *)changePasswordViewControllerWithFlowData:(FBAccountRecoveryFlowData *)arg1 changePasswordController:(FBAccountRecoveryChangePasswordController *)arg2 changePasswordFlowControlling:(id <FBAccountRecoveryChangePasswordFlowControlling>)arg3;
- (UIViewController *)otherSessionsViewController:(id <FBAccountRecoveryOtherSessionsFlowControlling>)arg1;
- (UIViewController *)codeEntryViewControllerWithFlowData:(FBAccountRecoveryFlowData *)arg1 codeEntryController:(FBAccountRecoveryCodeEntryController *)arg2 codeEntryFlowControlling:(id <FBAccountRecoveryCodeEntryFlowControlling>)arg3;
- (UIViewController *)contactPointsViewControllerWithFlowData:(FBAccountRecoveryFlowData *)arg1 codeEntryController:(FBAccountRecoveryCodeEntryController *)arg2 contactPointsFlowControlling:(id <FBAccountRecoveryContactPointsFlowControlling>)arg3;
- (UIViewController *)searchViewControllerWithFlowData:(FBAccountRecoveryFlowData *)arg1 searchController:(FBAccountRecoverySearchController *)arg2 searchFlowControlling:(id <FBAccountRecoverySearchFlowControlling>)arg3;
- (UIViewController *)spinnerViewControllerWithLabelText:(NSString *)arg1;
@end
