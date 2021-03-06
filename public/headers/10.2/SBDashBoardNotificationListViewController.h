//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "NCNotificationListViewControllerDestinationDelegate.h"
#import "NCNotificationListViewControllerUserInteractionDelegate.h"
#import "SBDashBoardNotificationDestination.h"
#import "SBMotionGestureObserver.h"

@class BSTimer, NCMaterialView, NCNotificationPriorityListViewController, NCNotificationRequest, NSHashTable, NSMutableDictionary, NSMutableSet, NSString, SBDashBoardClippingLine, SBFTouchPassThroughView;

@interface SBDashBoardNotificationListViewController : SBDashBoardViewControllerBase <NCNotificationListViewControllerUserInteractionDelegate, NCNotificationListViewControllerDestinationDelegate, SBMotionGestureObserver, SBDashBoardNotificationDestination>
{
    NCNotificationPriorityListViewController *_listViewController;
    NCMaterialView *_captureOnlyMaterialView;
    SBDashBoardClippingLine *_clippingLine;
    SBFTouchPassThroughView *_clippingView;
    double _headerOffset;
    double _footerOffset;
    _Bool _listPresentingContent;
    _Bool _listDismissingContent;
    _Bool _listBeingLaidOut;
    NSHashTable *_notificationEffectViews;
    BSTimer *_significantUserInteractionTimer;
    _Bool _listSuppressLongLookDismissal;
    id <SBDashBoardNotificationListViewControllerDelegate> _delegate;
    id <SBDashBoardNotificationDispatcher> _dispatcher;
    NSMutableDictionary *_staticContentProviders;
    NSMutableDictionary *_hiddenPreviewContentProviders;
    NSMutableSet *_phoneCoalescingContentProviders;
    NCNotificationRequest *_activeRaiseToListenNotificationRequest;
}

@property(retain, nonatomic) NCNotificationRequest *activeRaiseToListenNotificationRequest; // @synthesize activeRaiseToListenNotificationRequest=_activeRaiseToListenNotificationRequest;
@property(retain, nonatomic) NSMutableSet *phoneCoalescingContentProviders; // @synthesize phoneCoalescingContentProviders=_phoneCoalescingContentProviders;
@property(retain, nonatomic) NSMutableDictionary *hiddenPreviewContentProviders; // @synthesize hiddenPreviewContentProviders=_hiddenPreviewContentProviders;
@property(retain, nonatomic) NSMutableDictionary *staticContentProviders; // @synthesize staticContentProviders=_staticContentProviders;
@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) __weak id <SBDashBoardNotificationListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasContent; // @synthesize hasContent=_listPresentingContent;
- (void).cxx_destruct;
- (id)notificationListScrollView;
- (void)_hideOrShowRequestsForParentNotificationSectionSettings:(id)arg1;
- (void)_hideOrShowRequestsForNotificationSectionSettings:(id)arg1;
- (_Bool)_notificationSectionSettingsHidesSection:(id)arg1;
- (void)_didPresentNotificationCenter;
- (void)_invalidateTimerIfSnoozeAlarmNotificationStaticContentProvider:(id)arg1;
- (id)_snoozeAlarmNotificationStaticContentProviderForNotificationRequest:(id)arg1 viewController:(id)arg2;
- (void)_coalesceNotificationRequestIfPossible:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)_coalesceHiddenPreviewNotificationRequestIfPossible:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)_phoneCoalescingContentProviderWithSameContactAsNotificationRequest:(id)arg1;
- (id)_threadIdentifierForNotificationRequest:(id)arg1;
- (id)_identifierForNotificationRequest:(id)arg1;
- (struct UIEdgeInsets)_scrollIndicatorInsetsForContentInset:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_listViewContentInset;
- (struct CGRect)_suggestedListViewFrame;
- (void)_coalesceHiddenPreviewNotifications;
- (void)_expandHiddenPreviewNotifications;
- (void)_updateHiddenPreviewContentProvidersForAuthenticationStateChange;
- (_Bool)_isContentSuppressedForNotificationRequest:(id)arg1;
- (_Bool)_isDeviceAuthenticated;
- (void)_clearContentIncludingPersistent:(_Bool)arg1;
- (void)_layoutListView;
- (void)_updatePresentation;
- (void)_performSelfCorrectingListViewAction:(CDUnknownBlockType)arg1;
- (void)_setListHasContent:(_Bool)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (long long)presentationTransition;
- (long long)presentationPriority;
- (long long)presentationType;
- (void)didReceiveRaiseGesture;
- (id)materialSettingsForNotificationListViewController:(id)arg1;
- (void)notificationListViewController:(id)arg1 setRaiseGestureDetectionEnabled:(_Bool)arg2 forNotificationRequest:(id)arg3;
- (void)notificationListViewController:(id)arg1 willDismissRemainingContentWithTransitionCoordinator:(id)arg2;
- (void)notificationListViewControllerIsUpdatingContent:(id)arg1;
- (void)notificationListViewController:(id)arg1 willPresentInitialContentWithTransitionCoordinator:(id)arg2;
- (_Bool)notificationListViewController:(id)arg1 showSupplementaryActionsForNotificationRequest:(id)arg2;
- (_Bool)notificationListViewController:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2;
- (void)notificationListViewController:(id)arg1 didEndDisplayingCellForNotificationRequest:(id)arg2;
- (id)notificationListViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2 viewController:(id)arg3;
- (void)notificationListViewController:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (void)notificationListViewController:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)notificationListViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)notificationListViewController:(id)arg1 shouldFinishLongLookTransitionForNotification:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)notificationListViewController:(id)arg1 convertRect:(struct CGRect)arg2 toLocalWindowSpaceFromView:(id)arg3;
- (id)notificationListViewController:(id)arg1 preferredViewControllerForPresentingFromViewController:(id)arg2;
- (void)notificationListViewControllerDidEndScrolling:(id)arg1;
- (void)notificationListViewControllerDidScroll:(id)arg1;
- (void)notificationListViewControllerDidSignificantUserInteraction:(id)arg1;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)updateNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)performCustomTransitionToVisible:(_Bool)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)rebuildEverythingForReason:(id)arg1;
- (void)updateForPresentation:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long participantState;
@property(readonly) Class superclass;

@end

