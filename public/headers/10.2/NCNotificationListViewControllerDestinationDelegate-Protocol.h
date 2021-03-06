//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCMaterialSettings, NCNotificationAction, NCNotificationListViewController, NCNotificationRequest, NCNotificationViewController, NSDate, NSDictionary, NSSet, UIView, UIViewController;

@protocol NCNotificationListViewControllerDestinationDelegate <NSObject>
- (void)notificationListViewController:(NCNotificationListViewController *)arg1 requestsClearingNotificationRequests:(NSSet *)arg2;
- (void)notificationListViewController:(NCNotificationListViewController *)arg1 requestsExecuteAction:(NCNotificationAction *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withParameters:(NSDictionary *)arg4 completion:(void (^)(_Bool))arg5;
- (void)notificationListViewController:(NCNotificationListViewController *)arg1 requestPermissionToExecuteAction:(NCNotificationAction *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withParameters:(NSDictionary *)arg4 completion:(void (^)(_Bool))arg5;

@optional
- (void)notificationListViewController:(NCNotificationListViewController *)arg1 requestsClearingNotificationRequestsFromDate:(NSDate *)arg2 toDate:(NSDate *)arg3 inSections:(NSSet *)arg4;
- (void)notificationListViewController:(NCNotificationListViewController *)arg1 requestsClearingNotificationRequestsInSections:(NSSet *)arg2;
- (NCMaterialSettings *)materialSettingsForNotificationListViewController:(NCNotificationListViewController *)arg1;
- (void)notificationListViewController:(NCNotificationListViewController *)arg1 setRaiseGestureDetectionEnabled:(_Bool)arg2 forNotificationRequest:(NCNotificationRequest *)arg3;
- (UIView *)customCellBackgroundViewForNotificationListViewController:(NCNotificationListViewController *)arg1;
- (void)notificationListViewController:(NCNotificationListViewController *)arg1 willDismissRemainingContentWithTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)notificationListViewControllerIsUpdatingContent:(NCNotificationListViewController *)arg1;
- (void)notificationListViewController:(NCNotificationListViewController *)arg1 willPresentInitialContentWithTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (_Bool)notificationListViewController:(NCNotificationListViewController *)arg1 showSupplementaryActionsForNotificationRequest:(NCNotificationRequest *)arg2;
- (_Bool)notificationListViewController:(NCNotificationListViewController *)arg1 shouldAllowInteractionsForNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationListViewController:(NCNotificationListViewController *)arg1 didEndDisplayingCellForNotificationRequest:(NCNotificationRequest *)arg2;
- (id <NCNotificationStaticContentProviding>)notificationListViewController:(NCNotificationListViewController *)arg1 staticContentProviderForNotificationRequest:(NCNotificationRequest *)arg2 viewController:(NCNotificationViewController *)arg3;
- (struct CGRect)notificationListViewController:(NCNotificationListViewController *)arg1 convertRect:(struct CGRect)arg2 toLocalWindowSpaceFromView:(UIView *)arg3;
- (UIViewController *)notificationListViewController:(NCNotificationListViewController *)arg1 preferredViewControllerForPresentingFromViewController:(UIViewController *)arg2;
- (void)notificationListViewController:(NCNotificationListViewController *)arg1 shouldFinishLongLookTransitionForNotification:(NCNotificationRequest *)arg2 withCompletionBlock:(void (^)(_Bool))arg3;
@end

