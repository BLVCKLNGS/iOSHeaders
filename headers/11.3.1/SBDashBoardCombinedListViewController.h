//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "NCNotificationListContentObserver.h"
#import "NCNotificationListViewControllerDestinationDelegate.h"
#import "NCNotificationListViewControllerUserInteractionDelegate.h"
#import "SBDashBoardAppearanceProviding.h"
#import "SBDashBoardDateViewScrolling.h"
#import "SBDashBoardNotificationAdjunctListViewControllerDelegate.h"
#import "SBDashBoardNotificationDestination.h"
#import "SBDashBoardStatusBarBackgroundIntersecting.h"
#import "SBMotionGestureObserver.h"
#import "SBNotificationHomeAffordanceControllerClient.h"
#import "_UISettingsKeyObserver.h"

@class BSTimer, CARAutomaticDNDStatus, MTMaterialView, NCNotificationCombinedListViewController, NCNotificationRequest, NSHashTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, SBDashBoardComponent, SBDashBoardLayoutStrategy, SBDashBoardNotificationAdjunctListViewController, SBFTouchPassThroughView, SBLockScreenSettings, UIColor, _UILegibilitySettings;

@interface SBDashBoardCombinedListViewController : SBDashBoardViewControllerBase <NCNotificationListViewControllerUserInteractionDelegate, NCNotificationListViewControllerDestinationDelegate, SBDashBoardNotificationAdjunctListViewControllerDelegate, SBMotionGestureObserver, NCNotificationListContentObserver, SBDashBoardStatusBarBackgroundIntersecting, _UISettingsKeyObserver, SBNotificationHomeAffordanceControllerClient, SBDashBoardNotificationDestination, SBDashBoardDateViewScrolling, SBDashBoardAppearanceProviding>
{
    NCNotificationCombinedListViewController *_listViewController;
    MTMaterialView *_captureOnlyMaterialView;
    SBFTouchPassThroughView *_clippingView;
    double _footerOffset;
    _Bool _listPresentingContent;
    _Bool _listDismissingContent;
    _Bool _listBeingLaidOut;
    NSHashTable *_notificationEffectViews;
    BSTimer *_significantUserInteractionTimer;
    _Bool _listSuppressLongLookDismissal;
    SBDashBoardComponent *_dateViewComponent;
    SBDashBoardComponent *_statusBarBackgroundComponent;
    SBDashBoardComponent *_proudLockComponent;
    SBDashBoardComponent *_homeAffordanceComponent;
    _Bool _hasUserInteraction;
    SBDashBoardComponent *_statusBarComponent;
    NSMutableSet *_quickActionsHiddenReasons;
    SBDashBoardComponent *_quickActionsComponent;
    _Bool _carModeDNDStatusActive;
    _Bool _disableScrolling;
    _Bool _disableBackgroundAnimation;
    _Bool _notificationContentHidden;
    _Bool _presentationDirtiedAppearance;
    _Bool _deviceAuthenticated;
    _Bool _dismissGestureEnabled;
    id <SBDashBoardCombinedListViewControllerDelegate> _delegate;
    id <SBDashBoardNotificationDispatcher> _dispatcher;
    SBDashBoardLayoutStrategy *_layoutStrategy;
    id <SBDashBoardPageViewControllerProtocol> _page;
    SBDashBoardNotificationAdjunctListViewController *_adjunctListViewController;
    NSMutableDictionary *_staticContentProviders;
    NSMutableDictionary *_hiddenPreviewContentProviders;
    NSMutableDictionary *_recentsSectionHiddenPreviewContentProviders;
    NSMutableSet *_phoneCoalescingContentProviders;
    NSMutableSet *_recentsSectionPhoneCoalescingContentProviders;
    NCNotificationRequest *_activeRaiseToListenNotificationRequest;
    CARAutomaticDNDStatus *_carModeDNDStatus;
    NSMutableOrderedSet *_filteredNotificationRequests;
    NSMutableSet *_storedPersistentNotificationRequests;
    SBLockScreenSettings *_lockScreenSettings;
    SBFTouchPassThroughView *_debugViewLeft;
    SBFTouchPassThroughView *_debugViewRight;
}

- (void).cxx_destruct;
- (struct CGSize)_adjunctListViewSize;
- (struct CGSize)_adjunctListViewSizeIncludingSpacing;
- (_Bool)_allowNotificationsRevealPolicy;
- (_Bool)_allowsDateViewOrProudLockScroll;
- (void)_coalesceHiddenPreviewNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 inContentProviders:(id)arg3 removeBlock:(CDUnknownBlockType)arg4;
- (void)_coalesceHiddenPreviewNotifications;
- (void)_coalesceHiddenPreviewNotificationsForSectionIdentifier:(id)arg1;
- (void)_coalesceIncomingSectionHiddenPreviewNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)_coalesceIncomingSectionHiddenPreviewNotificationsForSectionIdentifier:(id)arg1;
- (void)_coalescePhoneCoalescingNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)_coalesceRecentsSectionHiddenPreviewNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)_coalesceRecentsSectionHiddenPreviewNotificationsForSectionIdentifier:(id)arg1;
- (unsigned long long)_contentPreviewSettingForNotificationRequest:(id)arg1;
- (struct CGPoint)_determineMaxContentOffsetForContentInset:(struct UIEdgeInsets)arg1;
@property(nonatomic, getter=_disableBackgroundAnimation, setter=_setDisableBackgroundAnimation:) _Bool disableBackgroundAnimation; // @synthesize disableBackgroundAnimation=_disableBackgroundAnimation;
@property(nonatomic, getter=_disableScrolling, setter=_setDisableScrolling:) _Bool disableScrolling; // @synthesize disableScrolling=_disableScrolling;
@property(nonatomic, getter=_dismissGestureEnabled, setter=_setDismissGestureEnabled:) _Bool dismissGestureEnabled; // @synthesize dismissGestureEnabled=_dismissGestureEnabled;
- (void)_expandHiddenPreviewNotifications;
- (void)_expandHiddenPreviewNotificationsForSectionIdentifier:(id)arg1;
- (void)_expandIncomingSectionHiddenPreviewNotificationsForSectionIdentifier:(id)arg1;
- (void)_expandRecentsSectionHiddenPreviewNotificationsForSectionIdentifier:(id)arg1;
- (void)_filterNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)_getCarModeDNDActiveState;
- (void)_handleCarModeDNDStateChange:(_Bool)arg1;
@property(nonatomic, getter=_hasUserInteraction, setter=_setHasUserInteraction:) _Bool hasUserInteraction; // @synthesize hasUserInteraction=_hasUserInteraction;
- (id)_hiddenPreviewContentProvidersToRevealContentFromProviders:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)_hideOrShowNotificationSectionForAuthenticationChange;
- (void)_hideOrShowRequestsForNotificationSectionSettings:(id)arg1;
- (void)_hideOrShowRequestsForParentNotificationSectionSettings:(id)arg1;
- (void)_hideRequestsFromIncomingSectionListIfNecessaryForSectionSettings:(id)arg1;
- (id)_identifierForNotificationRequest:(id)arg1;
- (void)_invalidateTimerIfSnoozeAlarmNotificationStaticContentProvider:(id)arg1;
- (_Bool)_isContentSuppressedForNotificationRequest:(id)arg1;
- (_Bool)_isNotificationRequest:(id)arg1 coalescedInHiddenPreviewContentProviders:(id)arg2;
- (_Bool)_isNotificationRequestForRecentsSection:(id)arg1;
- (_Bool)_isNotificationRequestInFilteredList:(id)arg1;
- (void)_layoutListView;
- (struct UIEdgeInsets)_listViewDefaultContentInsets;
- (unsigned long long)_matchingIndexInFilteredListForNotificationRequest:(id)arg1;
- (double)_minInsetsToPushDateOffScreen;
- (double)_minListHeightForPadding;
- (void)_moveHiddenPreviewContentProvidersToRecentsSection;
- (void)_moveHiddenPreviewContentProvidersToRecentsSectionForNotificationRequestsPassingTest:(CDUnknownBlockType)arg1;
- (void)_movePhoneCoalescingContentProvidersToRecentsSection;
- (void)_movePhoneCoalescingContentProvidersToRecentsSectionForNotificationRequestsPassingTest:(CDUnknownBlockType)arg1;
- (id)_notificationSectionSettingsForSectionIdentifier:(id)arg1;
- (_Bool)_notificationSectionSettingsHidesSection:(id)arg1;
- (void)_performClearActionForNotificationsCoalescedWithNotificationRequest:(id)arg1;
- (void)_performClearActionForNotificationsCoalescedWithNotificationRequest:(id)arg1 inCoalescingContentProvider:(id)arg2;
- (void)_performSelfCorrectingListViewAction:(CDUnknownBlockType)arg1;
- (id)_phoneCoalescingContentProviderWithSameContactAsNotificationRequest:(id)arg1 inContentProviders:(id)arg2;
- (void)_recoalesceHiddenPreviewNotificationRequests:(id)arg1 intoHiddenPreviewContentProviders:(id)arg2 requestsToReload:(id)arg3 requestsToRemove:(id)arg4;
- (void)_removeFilteredNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)_removeStoredPersistentNotificationRequestIfNecessary:(id)arg1;
- (void)_repostFilteredNotificationRequests;
- (void)_repostStoredPersistentNotificationRequests;
- (void)_requestClearingNotificationsCoalescedWithNotificationRequest:(id)arg1 inHiddenPreviewContentProviders:(id)arg2;
- (void)_setListHasContent:(_Bool)arg1;
- (void)_setQuickActionsHidden:(_Bool)arg1 forReason:(id)arg2;
- (void)_setupCarModeDNDStatus;
- (_Bool)_shouldFilterNotificationRequest:(id)arg1;
- (_Bool)_shouldPadBottomSpacing;
- (id)_snoozeAlarmNotificationStaticContentProviderForNotificationRequest:(id)arg1 viewController:(id)arg2;
- (double)_statusBarHeight;
- (void)_storePersistentNotificationRequests;
- (id)_storedPersistentNotificationRequestMatchingRequest:(id)arg1;
- (struct CGRect)_suggestedListViewFrame;
- (void)_swapNotificationRequest:(id)arg1 withNewRequest:(id)arg2 inRecentsSection:(_Bool)arg3;
- (id)_threadIdentifierForNotificationRequest:(id)arg1;
- (void)_updateCaptureOnlyMaterialView;
- (void)_updateHiddenPreviewContentProviderOnModifyingNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 inContentProviders:(id)arg3;
- (void)_updateHiddenPreviewContentProviderOnRemovingNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 inRecentsSection:(_Bool)arg3;
- (void)_updateHiddenPreviewContentProvidersForAuthenticationStateChange:(id)arg1;
- (void)_updateListViewContentInset;
- (void)_updateNotificationListOnDeviceReauthentication;
- (void)_updateNotificationListWhenCarModeDNDIsActive;
- (void)_updateNotificationListWhenCarModeDNDIsDeactive;
- (void)_updatePhoneCoalescingContentProviderOnRemovingNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 inRecentsSection:(_Bool)arg3;
- (void)_updatePresentation;
- (void)_updateRaiseGestureDetectionForNotificationRequest:(id)arg1;
- (void)_updateStoredPersistentNotificationRequestIfNecessary:(id)arg1;
- (void)_updateTouchDebugColoredRegions;
@property(retain, nonatomic) NCNotificationRequest *activeRaiseToListenNotificationRequest; // @synthesize activeRaiseToListenNotificationRequest=_activeRaiseToListenNotificationRequest;
@property(retain, nonatomic) SBDashBoardNotificationAdjunctListViewController *adjunctListViewController; // @synthesize adjunctListViewController=_adjunctListViewController;
- (void)adjunctListViewController:(id)arg1 didUpdateWithSize:(struct CGSize)arg2;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
@property(retain, nonatomic) CARAutomaticDNDStatus *carModeDNDStatus; // @synthesize carModeDNDStatus=_carModeDNDStatus;
- (void)clearAll;
@property(readonly, nonatomic) double clippingOffset;
- (void)contentChanged:(_Bool)arg1;
- (void)dealloc;
@property(retain, nonatomic) SBFTouchPassThroughView *debugViewLeft; // @synthesize debugViewLeft=_debugViewLeft;
@property(retain, nonatomic) SBFTouchPassThroughView *debugViewRight; // @synthesize debugViewRight=_debugViewRight;
- (double)defaultRestingOffsetExcludingAdjunct;
@property(nonatomic) __weak id <SBDashBoardCombinedListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveRaiseGesture;
- (_Bool)dismissNotificationInLongLookAnimated:(_Bool)arg1;
@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) double distanceFromBarToContent;
- (struct CGSize)effectiveContentSizeForScrollView:(id)arg1;
@property(retain, nonatomic) NSMutableOrderedSet *filteredNotificationRequests; // @synthesize filteredNotificationRequests=_filteredNotificationRequests;
- (_Bool)handleEvent:(id)arg1;
@property(readonly, nonatomic) _Bool hasContent; // @synthesize hasContent=_listPresentingContent;
@property(nonatomic, getter=hasPresentationDirtiedAppearance) _Bool presentationDirtiedAppearance; // @synthesize presentationDirtiedAppearance=_presentationDirtiedAppearance;
@property(retain, nonatomic) NSMutableDictionary *hiddenPreviewContentProviders; // @synthesize hiddenPreviewContentProviders=_hiddenPreviewContentProviders;
- (id)hideHomeAffordanceAnimationSettingsForNotificationListViewController:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct UIEdgeInsets)insetMarginsToMimicForAdjunctListViewController:(id)arg1;
- (double)interItemSpacingToMimicForAdjunctListViewController:(id)arg1;
@property(nonatomic, getter=isCarModeDNDStatusActive) _Bool carModeDNDStatusActive; // @synthesize carModeDNDStatusActive=_carModeDNDStatusActive;
@property(nonatomic, getter=isDeviceAuthenticated) _Bool deviceAuthenticated; // @synthesize deviceAuthenticated=_deviceAuthenticated;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
@property(nonatomic, getter=isNotificationContentHidden) _Bool notificationContentHidden; // @synthesize notificationContentHidden=_notificationContentHidden;
- (_Bool)isPresentingNotificationInLongLook;
@property(readonly, nonatomic, getter=isShowingMediaControls) _Bool showingMediaControls;
@property(retain, nonatomic) SBDashBoardLayoutStrategy *layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
@property(retain, nonatomic) SBLockScreenSettings *lockScreenSettings; // @synthesize lockScreenSettings=_lockScreenSettings;
- (id)notificationListScrollView;
- (struct CGRect)notificationListViewController:(id)arg1 convertRect:(struct CGRect)arg2 toLocalWindowSpaceFromView:(id)arg3;
- (void)notificationListViewController:(id)arg1 didEndDisplayingCellForNotificationRequest:(id)arg2;
- (void)notificationListViewController:(id)arg1 didEndUserInteractionWithNotificationViewController:(id)arg2;
- (void)notificationListViewController:(id)arg1 didRemoveNotificationRequestInLongLook:(id)arg2;
- (void)notificationListViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)notificationListViewController:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (void)notificationListViewController:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)notificationListViewController:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)notificationListViewController:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(_Bool)arg4 withParameters:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)notificationListViewController:(id)arg1 setRaiseGestureDetectionEnabled:(_Bool)arg2 forNotificationRequest:(id)arg3;
- (_Bool)notificationListViewController:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2;
- (void)notificationListViewController:(id)arg1 shouldFinishLongLookTransitionForNotification:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (_Bool)notificationListViewController:(id)arg1 shouldHorizontallyPanNotificationCell:(id)arg2 withTouch:(id)arg3;
- (_Bool)notificationListViewController:(id)arg1 shouldSuppressContentForNotificationRequest:(id)arg2;
- (id)notificationListViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2 viewController:(id)arg3;
- (void)notificationListViewController:(id)arg1 willBeginUserInteractionWithNotificationViewController:(id)arg2;
- (void)notificationListViewController:(id)arg1 willDismissLongLookForNotificationViewController:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)notificationListViewController:(id)arg1 willDismissRemainingContentWithTransitionCoordinator:(id)arg2;
- (void)notificationListViewController:(id)arg1 willPresentInitialContentWithTransitionCoordinator:(id)arg2;
- (void)notificationListViewController:(id)arg1 willPresentLongLookForNotificationViewController:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)notificationListViewControllerDidEndScrolling:(id)arg1;
- (void)notificationListViewControllerDidScroll:(id)arg1;
- (void)notificationListViewControllerDidSignificantUserInteraction:(id)arg1;
- (void)notificationListViewControllerIsUpdatingContent:(id)arg1;
- (_Bool)notificationListViewControllerShouldAllowRecentNotificationsReveal:(id)arg1;
- (id)notificationUsageTrackingStateForNotificationListViewController:(id)arg1;
@property(nonatomic) __weak id <SBDashBoardPageViewControllerProtocol> page; // @synthesize page=_page;
- (void)performCustomTransitionToVisible:(_Bool)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSMutableSet *phoneCoalescingContentProviders; // @synthesize phoneCoalescingContentProviders=_phoneCoalescingContentProviders;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (long long)presentationPriority;
- (long long)presentationTransition;
- (long long)presentationType;
- (void)rebuildEverythingForReason:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *recentsSectionHiddenPreviewContentProviders; // @synthesize recentsSectionHiddenPreviewContentProviders=_recentsSectionHiddenPreviewContentProviders;
@property(retain, nonatomic) NSMutableSet *recentsSectionPhoneCoalescingContentProviders; // @synthesize recentsSectionPhoneCoalescingContentProviders=_recentsSectionPhoneCoalescingContentProviders;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
@property(retain, nonatomic) NSMutableDictionary *staticContentProviders; // @synthesize staticContentProviders=_staticContentProviders;
@property(retain, nonatomic) NSMutableSet *storedPersistentNotificationRequests; // @synthesize storedPersistentNotificationRequests=_storedPersistentNotificationRequests;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationListViewController:(id)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (struct CGSize)sizeToMimicForAdjunctListViewController:(id)arg1;
@property(readonly, nonatomic) double topContentInset;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationListViewController:(id)arg1;
- (void)updateAppearanceForHidden:(_Bool)arg1 offset:(struct CGPoint)arg2;
- (void)updateAppearanceForStatusBarBackgroundHidden:(_Bool)arg1;
- (void)updateNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)updateNotificationSectionSettings:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)wouldHandleButtonEvent:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) long long participantState;
@property(readonly) Class superclass;

@end

