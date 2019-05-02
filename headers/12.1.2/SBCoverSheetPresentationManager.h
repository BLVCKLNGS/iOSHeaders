//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBAssistantObserver.h"
#import "SBCoverSheetGrabberDelegate.h"
#import "SBCoverSheetSecureAppEnvironmentViewControllerDelegate.h"
#import "SBCoverSheetSlidingViewControllerDelegate.h"
#import "SBDashBoardExternalAppearanceProviding.h"
#import "SBDashBoardExternalBehaviorProviding.h"
#import "SBDashBoardViewControllerObserver.h"
#import "SBHomeGestureParticipantDelegate.h"
#import "SBPearlMatchingStateProviderDelegate.h"
#import "SBSecureAppObserver.h"
#import "SBSecureAppViewControllerDelegate.h"
#import "SBWallpaperOrientationProvider.h"
#import "_UISettingsKeyObserver.h"

@class BSEventQueue, NSMutableSet, NSObject<OS_dispatch_group>, NSSet, NSString, SBApplication, SBAsynchronousRenderingAssertion, SBCoverSheetFlyInSettings, SBCoverSheetIconFlyInAnimator, SBCoverSheetSceneManager, SBCoverSheetSecureAppEnvironmentViewController, SBCoverSheetSlidingViewController, SBCoverSheetTransitionSettings, SBDashBoardHostedAppViewController, SBDashBoardLayoutStrategy, SBDisableActiveInterfaceOrientationChangeAssertion, SBHomeGestureParticipant, SBLockScreenSettings, SBLockScreenViewControllerBase, SBMainWorkspace, SBWindow, UIColor, UIImpactFeedbackGenerator, _UILegibilitySettings;

@interface SBCoverSheetPresentationManager : NSObject <SBCoverSheetSlidingViewControllerDelegate, SBCoverSheetGrabberDelegate, SBDashBoardExternalAppearanceProviding, SBDashBoardExternalBehaviorProviding, SBDashBoardViewControllerObserver, SBSecureAppViewControllerDelegate, SBSecureAppObserver, SBAssistantObserver, _UISettingsKeyObserver, SBHomeGestureParticipantDelegate, SBCoverSheetSecureAppEnvironmentViewControllerDelegate, SBWallpaperOrientationProvider, SBPearlMatchingStateProviderDelegate>
{
    _Bool _isCoverSheetHostingUnlockedEnvironmentWindows;
    _Bool _hasBeenDismissedSinceKeybagLock;
    _Bool _hasBeenDismissedSinceBoot;
    _Bool _activeInterfaceOrientationLocked;
    _Bool _shouldDisplayFakeStatusBar;
    _Bool _dismissingCoverSheet;
    _Bool _centerFollowsFinger;
    _Bool _animateIconsOnPresentationToo;
    _Bool _iconAnimatorNeedsAnimating;
    SBWindow *_coverSheetWindow;
    SBDashBoardLayoutStrategy *_layoutStrategy;
    SBWindow *_secureAppWindow;
    SBCoverSheetSlidingViewController *_secureAppSlidingViewController;
    long long _participantState;
    long long _scrollingStrategy;
    id <SBCoverSheetPresentationDelegate> _delegate;
    id <SBUILockStateProvider> _uiLockStateProvider;
    id <SBPearlMatchingStateProvider> _pearlMatchingStateProvider;
    SBLockScreenViewControllerBase *_lockScreenViewController;
    SBDashBoardHostedAppViewController *_secureAppViewController;
    SBMainWorkspace *_mainWorkspace;
    NSMutableSet *_coverSheetWindowVisibleReasons;
    NSMutableSet *_secureAppWindowVisibleReasons;
    SBCoverSheetSecureAppEnvironmentViewController *_secureAppEnvironmentViewController;
    CDUnknownBlockType _secureAppCleanupHandler;
    SBCoverSheetSceneManager *_sceneManager;
    BSEventQueue *_lockUnlockQueue;
    SBLockScreenSettings *_lockScreenSettings;
    UIImpactFeedbackGenerator *_rubberBandFeedbackGenerator;
    unsigned long long _transitionType;
    SBCoverSheetTransitionSettings *_transitionSettings;
    unsigned long long _transitionOverrideOptions;
    SBAsynchronousRenderingAssertion *_asynchronousRenderingAssertion;
    SBDisableActiveInterfaceOrientationChangeAssertion *_activeInterfaceOrientationChangeAssertion;
    SBCoverSheetIconFlyInAnimator *_iconAnimator;
    NSObject<OS_dispatch_group> *_iconAnimatorCompletionGroup;
    CDUnknownBlockType _iconAnimatorCompletionBlock;
    SBCoverSheetFlyInSettings *_flyInSettings;
    double _iconFlyInInteractiveResponseMin;
    double _iconFlyInInteractiveResponseMax;
    double _iconFlyInInteractiveDampingRatioMin;
    double _iconFlyInInteractiveDampingRatioMax;
    double _iconFlyInTension;
    double _iconFlyInFriction;
    SBHomeGestureParticipant *_homeGestureParticipant;
    CDUnknownBlockType _ppt_transitionBeginsCallback;
    CDUnknownBlockType _ppt_transitionEndsCallback;
    SBCoverSheetSlidingViewController *_coverSheetSlidingViewController;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SBCoverSheetSlidingViewController *coverSheetSlidingViewController; // @synthesize coverSheetSlidingViewController=_coverSheetSlidingViewController;
@property(copy, nonatomic) CDUnknownBlockType ppt_transitionEndsCallback; // @synthesize ppt_transitionEndsCallback=_ppt_transitionEndsCallback;
@property(copy, nonatomic) CDUnknownBlockType ppt_transitionBeginsCallback; // @synthesize ppt_transitionBeginsCallback=_ppt_transitionBeginsCallback;
@property(retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // @synthesize homeGestureParticipant=_homeGestureParticipant;
@property(nonatomic) _Bool iconAnimatorNeedsAnimating; // @synthesize iconAnimatorNeedsAnimating=_iconAnimatorNeedsAnimating;
@property(nonatomic) double iconFlyInFriction; // @synthesize iconFlyInFriction=_iconFlyInFriction;
@property(nonatomic) double iconFlyInTension; // @synthesize iconFlyInTension=_iconFlyInTension;
@property(nonatomic) double iconFlyInInteractiveDampingRatioMax; // @synthesize iconFlyInInteractiveDampingRatioMax=_iconFlyInInteractiveDampingRatioMax;
@property(nonatomic) double iconFlyInInteractiveDampingRatioMin; // @synthesize iconFlyInInteractiveDampingRatioMin=_iconFlyInInteractiveDampingRatioMin;
@property(nonatomic) double iconFlyInInteractiveResponseMax; // @synthesize iconFlyInInteractiveResponseMax=_iconFlyInInteractiveResponseMax;
@property(nonatomic) double iconFlyInInteractiveResponseMin; // @synthesize iconFlyInInteractiveResponseMin=_iconFlyInInteractiveResponseMin;
@property(nonatomic) _Bool animateIconsOnPresentationToo; // @synthesize animateIconsOnPresentationToo=_animateIconsOnPresentationToo;
@property(nonatomic) _Bool centerFollowsFinger; // @synthesize centerFollowsFinger=_centerFollowsFinger;
@property(retain, nonatomic) SBCoverSheetFlyInSettings *flyInSettings; // @synthesize flyInSettings=_flyInSettings;
@property(copy, nonatomic) CDUnknownBlockType iconAnimatorCompletionBlock; // @synthesize iconAnimatorCompletionBlock=_iconAnimatorCompletionBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *iconAnimatorCompletionGroup; // @synthesize iconAnimatorCompletionGroup=_iconAnimatorCompletionGroup;
@property(nonatomic) _Bool dismissingCoverSheet; // @synthesize dismissingCoverSheet=_dismissingCoverSheet;
@property(retain, nonatomic) SBCoverSheetIconFlyInAnimator *iconAnimator; // @synthesize iconAnimator=_iconAnimator;
@property(retain, nonatomic) SBDisableActiveInterfaceOrientationChangeAssertion *activeInterfaceOrientationChangeAssertion; // @synthesize activeInterfaceOrientationChangeAssertion=_activeInterfaceOrientationChangeAssertion;
@property(retain, nonatomic) SBAsynchronousRenderingAssertion *asynchronousRenderingAssertion; // @synthesize asynchronousRenderingAssertion=_asynchronousRenderingAssertion;
@property(nonatomic) _Bool shouldDisplayFakeStatusBar; // @synthesize shouldDisplayFakeStatusBar=_shouldDisplayFakeStatusBar;
@property(nonatomic) unsigned long long transitionOverrideOptions; // @synthesize transitionOverrideOptions=_transitionOverrideOptions;
@property(nonatomic) __weak SBCoverSheetTransitionSettings *transitionSettings; // @synthesize transitionSettings=_transitionSettings;
@property(nonatomic) unsigned long long transitionType; // @synthesize transitionType=_transitionType;
@property(retain, nonatomic) UIImpactFeedbackGenerator *rubberBandFeedbackGenerator; // @synthesize rubberBandFeedbackGenerator=_rubberBandFeedbackGenerator;
@property(retain, nonatomic) SBLockScreenSettings *lockScreenSettings; // @synthesize lockScreenSettings=_lockScreenSettings;
@property(retain, nonatomic) BSEventQueue *lockUnlockQueue; // @synthesize lockUnlockQueue=_lockUnlockQueue;
@property(retain, nonatomic) SBCoverSheetSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(copy, nonatomic) CDUnknownBlockType secureAppCleanupHandler; // @synthesize secureAppCleanupHandler=_secureAppCleanupHandler;
@property(retain, nonatomic) SBCoverSheetSecureAppEnvironmentViewController *secureAppEnvironmentViewController; // @synthesize secureAppEnvironmentViewController=_secureAppEnvironmentViewController;
@property(retain, nonatomic) NSMutableSet *secureAppWindowVisibleReasons; // @synthesize secureAppWindowVisibleReasons=_secureAppWindowVisibleReasons;
@property(retain, nonatomic) NSMutableSet *coverSheetWindowVisibleReasons; // @synthesize coverSheetWindowVisibleReasons=_coverSheetWindowVisibleReasons;
@property(nonatomic, getter=activeInterfaceOrientationLocked) _Bool activeInterfaceOrientationLocked; // @synthesize activeInterfaceOrientationLocked=_activeInterfaceOrientationLocked;
@property(nonatomic) _Bool hasBeenDismissedSinceBoot; // @synthesize hasBeenDismissedSinceBoot=_hasBeenDismissedSinceBoot;
@property(nonatomic) _Bool hasBeenDismissedSinceKeybagLock; // @synthesize hasBeenDismissedSinceKeybagLock=_hasBeenDismissedSinceKeybagLock;
@property(retain, nonatomic) SBMainWorkspace *mainWorkspace; // @synthesize mainWorkspace=_mainWorkspace;
@property(readonly, nonatomic) _Bool isCoverSheetHostingUnlockedEnvironmentWindows; // @synthesize isCoverSheetHostingUnlockedEnvironmentWindows=_isCoverSheetHostingUnlockedEnvironmentWindows;
@property(retain, nonatomic) SBDashBoardHostedAppViewController *secureAppViewController; // @synthesize secureAppViewController=_secureAppViewController;
@property(retain, nonatomic) SBLockScreenViewControllerBase *lockScreenViewController; // @synthesize lockScreenViewController=_lockScreenViewController;
@property(nonatomic) __weak id <SBPearlMatchingStateProvider> pearlMatchingStateProvider; // @synthesize pearlMatchingStateProvider=_pearlMatchingStateProvider;
@property(retain, nonatomic, setter=setUILockStateProvider:) id <SBUILockStateProvider> uiLockStateProvider; // @synthesize uiLockStateProvider=_uiLockStateProvider;
@property(nonatomic) __weak id <SBCoverSheetPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long scrollingStrategy; // @synthesize scrollingStrategy=_scrollingStrategy;
@property(nonatomic) long long participantState; // @synthesize participantState=_participantState;
@property(retain, nonatomic) SBDashBoardLayoutStrategy *layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
- (void).cxx_destruct;
- (void)_cleanupIconAnimator;
- (void)_setTransitionProgress:(double)arg1 animated:(_Bool)arg2 gestureActive:(_Bool)arg3 coverSheetProgress:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_animateForProgress:(double)arg1;
- (void)_prepareIconAnimatorForPresenting:(_Bool)arg1;
- (_Bool)_isEffectivelyLocked;
- (void)_updateDeactivationReasonsForPresented:(_Bool)arg1;
- (void)_authenticationChanged:(id)arg1;
- (void)_relinquishAsynchronousRenderingAssertion;
- (void)_acquireAsynchronousRenderingAssertion;
- (void)_tellDashBoardOurBehaviorChanged;
- (void)_tellDashBoardOurAppearanceChanged;
- (void)_tellDashBoardOurAppearanceAndBehaviorChanged;
- (void)_updateSceneManagerForLockedMode;
- (void)_updateSceneClientSettings;
- (void)_prepareSecureAppWindowForDisplay;
- (void)_prepareCoverSheetWindowForDisplay;
- (void)_updateVisibilityOfWindow:(id)arg1 forReasons:(id)arg2;
- (void)_setCoverSheet:(_Bool)arg1 windowVisible:(_Bool)arg2 forReason:(id)arg3;
- (void)_setSecureAppWindowVisible:(_Bool)arg1 forReason:(id)arg2;
- (void)_setCoverSheetWindowVisible:(_Bool)arg1 forReason:(id)arg2;
- (void)_relinquishHomeGesture;
- (void)_requestHomeGestureOwnership;
- (void)_enqueueBlock:(CDUnknownBlockType)arg1 withName:(id)arg2;
- (void)_notifyDelegateRequestsUnlock;
- (void)_notifyDelegateDidDismiss;
- (void)_notifyDelegateWillDismiss;
- (void)_notifyDelegateDidPresent;
- (void)_notifyDelegateWillPresent;
- (void)noteScreenDidTurnOff;
- (void)_cleanupATransition;
- (void)_prepareForATransition;
- (void)_prepareForTransitionToSecureApp;
- (void)_cleanupDismissalTransition;
- (void)_prepareForDismissalTransition;
- (void)_cleanupInterstitialTransitionForSlidingViewController:(id)arg1;
- (void)_updateInterstitialTransitionForSlidingViewController:(id)arg1 withProgress:(double)arg2;
- (void)_prepareInterstitialTransitionForSlidingViewController:(id)arg1;
- (void)_cleanupRubberBandDismissalTransitionForSlidingViewController:(id)arg1;
- (void)_prepareForRubberBandDismissalTransitionForSlidingViewController:(id)arg1;
- (void)_cleanupRubberBandPresentationTransitionForSlidingViewController:(id)arg1;
- (void)_prepareForRubberBandPresentationTransitionForSlidingViewController:(id)arg1;
- (void)_cleanupARubberBandTransitionForSlidingViewController:(id)arg1;
- (void)_prepareForARubberBandTransitionForSlidingViewController:(id)arg1;
- (void)_cleanupPresentationTransition;
- (void)_prepareForPresentationTransitionForUserGesture:(_Bool)arg1;
- (long long)interfaceOrientationForWallpaperController:(id)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)_updateIconsFlyInWithSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)assistant:(id)arg1 viewDidDisappear:(long long)arg2;
- (void)secureAppOfTypeDidEnd:(unsigned long long)arg1;
- (void)secureAppViewControllerDidAuthenticate:(id)arg1;
- (void)updateVisibilityForGrabberVisible:(_Bool)arg1;
- (unsigned long long)screenEdgesDeferringSystemGestures;
- (_Bool)hasFirstSwipeShowGrabberOverride;
- (void)coverSheetSlidingViewControllerCleanupInterstitialTransition:(id)arg1;
- (void)coverSheetSlidingViewController:(id)arg1 dismissGestureChangedWithProgress:(double)arg2;
- (void)coverSheetSlidingViewController:(id)arg1 animateForGestureActive:(_Bool)arg2 withProgress:(double)arg3 beginBlock:(CDUnknownBlockType)arg4 endBlock:(CDUnknownBlockType)arg5;
- (void)coverSheetSlidingViewController:(id)arg1 animationTickedWithProgress:(double)arg2 coverSheetFrame:(struct CGRect)arg3 gestureActive:(_Bool)arg4 forPresentationValue:(_Bool)arg5;
- (_Bool)hasContentUnderCoverSheetSlidingViewController:(id)arg1;
- (void)coverSheetSlidingViewControllerDidPassRubberBandThreshold:(id)arg1;
- (void)coverSheetSlidingViewControllerCleanupDismissalTransition:(id)arg1;
- (void)coverSheetSlidingViewController:(id)arg1 committingToEndPresented:(_Bool)arg2;
- (void)coverSheetSlidingViewControllerUserPresentGestureBegan:(id)arg1;
- (void)coverSheetSlidingViewController:(id)arg1 prepareForDismissalTransitionForReversingTransition:(_Bool)arg2 forUserGesture:(_Bool)arg3;
- (void)coverSheetSlidingViewControllerCleanupRubberBandedPresentationTransition:(id)arg1;
- (void)coverSheetSlidingViewControllerPrepareForRubberBandedPresentationTransition:(id)arg1;
- (void)coverSheetSlidingViewControllerCleanupPresentationTransition:(id)arg1;
- (void)coverSheetSlidingViewController:(id)arg1 prepareForPresentationTransitionForUserGesture:(_Bool)arg2;
- (void)pearlMatchingStateProviderStateChangedForMatchFailure:(id)arg1;
- (void)dashBoardControllerExternalLockProviderStateDidChange:(id)arg1;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (void)secureAppEnvironmentViewControllerOwnsHomeGestureDidChange;
- (void)_transitionFromSecureAppToFullAppAndDismiss:(_Bool)arg1 preservingBanners:(_Bool)arg2;
- (void)_noteEffectiveLockStatusMayHaveChangedForUserNotification:(_Bool)arg1 canDismiss:(_Bool)arg2;
- (void)_performAfterSecureAppCleanup:(CDUnknownBlockType)arg1;
- (void)_clearSecureAppViewControllersIncludingWindow:(_Bool)arg1;
- (void)_prepareSecureAppViewController;
@property(retain, nonatomic) SBCoverSheetSlidingViewController *secureAppSlidingViewController; // @synthesize secureAppSlidingViewController=_secureAppSlidingViewController;
- (id)secureAppSlidingViewControllerIfLoaded;
@property(retain, nonatomic) SBWindow *secureAppWindow; // @synthesize secureAppWindow=_secureAppWindow;
- (_Bool)isActiveInterfaceOrientationLocked;
@property(readonly, nonatomic) SBApplication *coverSheetHostedApp;
@property(readonly, nonatomic, getter=isCoverSheetHostingAnApp) _Bool coverSheetHostingAnApp;
- (id)coverSheetSlidingViewControllerIfLoaded;
- (id)dashBoardViewController;
@property(retain, nonatomic) SBWindow *coverSheetWindow; // @synthesize coverSheetWindow=_coverSheetWindow;
- (void)noteDeviceDidLock;
- (void)loadViewsIfNeeded;
- (void)didAuthenticateWithoutUIUnlockingForSource:(int)arg1;
- (void)willUIUnlockWithPendingUnlockRequest:(_Bool)arg1;
- (_Bool)isDismissGestureActive;
- (_Bool)isPresented;
- (_Bool)isTransitioning;
- (_Bool)isVisible;
- (void)updateInterfaceOrientationToMatchOrientation:(long long)arg1;
- (void)updateBecauseSecureAppChanged;
- (_Bool)isInSecureApp;
- (void)setCoverSheetPresented:(_Bool)arg1 animated:(_Bool)arg2 options:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)setCoverSheetPresented:(_Bool)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) double customIdleExpirationTimeout;
@property(readonly, nonatomic) double customIdleWarningTimeout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

