//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBSceneHostManagerObserver.h"
#import "SBMultiplexedHostingDelegate.h"
#import "_SBMultiplexedHostViewScreenRectObserver.h"

@class BKSTouchDeliveryPolicyAssertion, FBSceneHostManager, NSHashTable, NSMapTable, NSMutableSet, NSString, SBIsolationTankWindow, UIScrollView;

@interface SBIsolationTankController : UIViewController <FBSceneHostManagerObserver, _SBMultiplexedHostViewScreenRectObserver, SBMultiplexedHostingDelegate>
{
    SBIsolationTankWindow *_isolationWindow;
    UIViewController *_isolatedViewController;
    FBSceneHostManager *_hostManager;
    NSMutableSet *_visibleRequesters;
    NSString *_activeRequester;
    UIScrollView *_containingScrollView;
    _Bool _scrollingWasEnabled;
    NSMapTable *_identifiersToObservers;
    NSMapTable *_identifiersToHostViews;
    NSMapTable *_identifiersToDeferralProperties;
    NSHashTable *_presentedViewControllers;
    BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion;
    BKSTouchDeliveryPolicyAssertion *_cancelTouchesInHostingViewAssertion;
    BKSTouchDeliveryPolicyAssertion *_cancelTouchesInIsolatedViewAssertion;
}

@property(readonly, nonatomic) UIScrollView *containingScrollView; // @synthesize containingScrollView=_containingScrollView;
@property(readonly, nonatomic) UIViewController *isolatedViewController; // @synthesize isolatedViewController=_isolatedViewController;
- (void).cxx_destruct;
- (void)_removeHIDEventDeferralForRequester:(id)arg1;
- (void)_addHIDEventDeferralForRequester:(id)arg1;
- (void)_hostView:(id)arg1 screenRectDidChange:(struct CGRect)arg2;
- (void)sceneHostManager:(id)arg1 willDeactivateRequester:(id)arg2;
- (void)sceneHostManager:(id)arg1 willActivateRequester:(id)arg2;
- (id)debugName;
- (void)_prepareForHostingIfNeeded;
- (void)_displayLaunched:(id)arg1;
- (void)_stopWatchingForDisplayLaunchNotifications;
- (void)_startWatchingForDisplayLaunchNotifications;
- (void)_resignAnyFirstResponderInIsolatedWindow;
- (id)nextResponder;
- (void)_dismissPresentedViewControllersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentationControllerDidEndDismissing:(id)arg1;
- (void)_presentationControllerWillBeginDismissing:(id)arg1;
- (void)_presentationControllerDidEndPresenting:(id)arg1;
- (void)_presentationControllerWillBeginPresenting:(id)arg1;
- (void)_stopWatchingForPresentationControllerNotifications;
- (void)_startWatchingForPresentationControllerNotifications;
- (void)_textSelectionInteractionDidEnd:(id)arg1;
- (void)_textSelectionInteractionWillBegin:(id)arg1;
- (void)_stopWatchingForTextSelectionInteractionNotifications;
- (void)_startWatchingForTextSelectionInteractionNotifications;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)_stopWatchingForScrollViewNotifications;
- (void)_startWatchingForScrollViewNotifications;
- (_Bool)isCancelingTouchesInHostingContext;
- (void)endCancelingTouchesInHostingContextForCurrentEventForRequester:(id)arg1;
- (void)cancelTouchesForCurrentEventInHostingContextForRequester:(id)arg1;
- (_Bool)isCancelingTouchesInIsolatedView;
- (void)endCancelingTouchesInIsolatedViewForCurrentEventForRequester:(id)arg1;
- (void)cancelTouchesInIsolatedViewForCurrentEventForRequester:(id)arg1;
- (_Bool)shouldSupressTouchesForIsolatedView;
- (_Bool)isSharingTouchesWithIsolatedView;
- (void)endSharingTouchesWithIsolatedViewForRequester:(id)arg1;
- (_Bool)shareTouchesWithIsolatedViewIfNeededForRequester:(id)arg1;
- (void)shareTouchesWithIsolatedViewForRequester:(id)arg1;
- (unsigned int)_hostContextIdForRequester:(id)arg1;
- (id)_hostViewForRequester:(id)arg1;
- (id)_touchViewForRequester:(id)arg1;
- (void)_disableHostingForRequester:(id)arg1;
- (void)explicitlyDisableHostingForRequester:(id)arg1;
- (void)disableClipping:(_Bool)arg1 forRequester:(id)arg2;
- (id)activePresentationController;
- (_Bool)canForwardEventsToRealViewControllerForRequester:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2 forRequester:(id)arg3;
- (void)viewDidMoveToWindow:(id)arg1 forRequester:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1 forRequester:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1 forRequester:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1 forRequester:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1 forRequester:(id)arg2;
- (void)_updateAppearStateForRequester:(id)arg1 animated:(_Bool)arg2;
- (id)multiplexedHostingViewForRequester:(id)arg1;
- (void)removeHostingObserver:(id)arg1 forRequester:(id)arg2;
- (void)addHostingObserver:(id)arg1 forRequester:(id)arg2;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)loadView;
- (void)invalidate;
- (void)dealloc;
- (id)initWithIsolatedViewController:(id)arg1;
- (id)hostWindowForActiveRequester;
- (id)hostWindowForFirstResponderInIsolation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

