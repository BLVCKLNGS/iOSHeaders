//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBBulletinWindowClient.h"
#import "SBCoordinatedPresenting.h"
#import "SBLockScreenActionProvider.h"
#import "SBNotificationCenterViewControllerDelegate.h"
#import "SBReachabilityObserver.h"
#import "SBSystemGestureRecognizerDelegate.h"
#import "SBViewControllerInteractiveAnimatedTransitioning.h"
#import "SBViewControllerTransitionContextDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "_UISettingsKeyObserver.h"

@class FBDisplayLayoutElement, FBUIApplicationSceneDeactivationAssertion, NSMutableSet, NSSet, NSString, SBLockScreenActionContext, SBNotificationCenterBounceAnimator, SBNotificationCenterDefaults, SBNotificationCenterSettings, SBNotificationCenterTransitionContext, SBNotificationCenterViewController, SBScreenEdgePanGestureRecognizer, SBUIChevronView, SBWindow, UIImpactFeedbackGenerator, UILongPressGestureRecognizer, UIScreenEdgePanGestureRecognizer, UIView, _UIFeedbackEdgeBehavior;

@interface SBNotificationCenterController : NSObject <SBBulletinWindowClient, SBNotificationCenterViewControllerDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate, SBReachabilityObserver, SBSystemGestureRecognizerDelegate, SBViewControllerInteractiveAnimatedTransitioning, SBViewControllerTransitionContextDelegate, SBCoordinatedPresenting, SBLockScreenActionProvider>
{
    SBNotificationCenterViewController *_viewController;
    UIView *_coveredContentSnapshot;
    SBUIChevronView *_borrowedGrabberView;
    CDUnknownBlockType _borrowedGrabberWillPresentBlock;
    CDUnknownBlockType _borrowedGrabberHideBlock;
    CDUnknownBlockType _borrowedGrabberCompletionBlock;
    UILongPressGestureRecognizer *_grabberPressGesture;
    SBLockScreenActionContext *_lockScreenActionContext;
    long long _transitionState;
    SBNotificationCenterSettings *_settings;
    _Bool _grabberEnabled;
    _Bool _didCoalesceWidgetsConnections;
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    FBDisplayLayoutElement *_displayLayoutElement;
    SBScreenEdgePanGestureRecognizer *_showSystemGestureRecognizer;
    UIScreenEdgePanGestureRecognizer *_dismissGestureRecognizer;
    SBNotificationCenterBounceAnimator *_currentBounceAnimator;
    NSMutableSet *_bulletinWindowClients;
    SBNotificationCenterTransitionContext *_activeTransitionContext;
    SBNotificationCenterDefaults *_ncDefaults;
    _UIFeedbackEdgeBehavior *_feedbackBehavior;
    UIImpactFeedbackGenerator *_partialPulldownFeedbackBehavior;
    long long _presentedState;
}

+ (double)transitionAnimationDuration;
+ (id)newDynamicAnimationForShow:(_Bool)arg1 targetValue:(double)arg2 withInitialValue:(double)arg3 velocity:(double)arg4 extraPull:(_Bool)arg5;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
@property(nonatomic) long long presentedState; // @synthesize presentedState=_presentedState;
@property(retain, nonatomic) UIImpactFeedbackGenerator *partialPulldownFeedbackBehavior; // @synthesize partialPulldownFeedbackBehavior=_partialPulldownFeedbackBehavior;
@property(retain, nonatomic) _UIFeedbackEdgeBehavior *feedbackBehavior; // @synthesize feedbackBehavior=_feedbackBehavior;
@property(nonatomic, getter=isGrabberEnabled) _Bool grabberEnabled; // @synthesize grabberEnabled=_grabberEnabled;
@property(readonly, nonatomic) SBNotificationCenterSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) SBLockScreenActionContext *lockScreenActionContext; // @synthesize lockScreenActionContext=_lockScreenActionContext;
@property(readonly, nonatomic) SBNotificationCenterViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityModeActivated;
- (void)finishedScrollTest;
- (void)performScrollTest:(id)arg1 iterations:(long long)arg2 delta:(long long)arg3;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_handleUIDidLock:(id)arg1;
- (void)_handleBacklightFadeFinished:(id)arg1;
- (void)dismissPartialPulldownSpotlightAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldPinViewsForPartialPulldown;
- (_Bool)shouldAllowPartialPulldownForCurrentTransition;
- (_Bool)shouldClipContentView;
- (void)invalidateLockScreenActionContext;
- (_Bool)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)abortAnimatedTransition;
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 wasCancelled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateTransitionWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)beginPresentationWithTouchLocation:(struct CGPoint)arg1 presentationBegunHandler:(CDUnknownBlockType)arg2;
- (_Bool)isPresentingControllerTransitioning;
@property(readonly, nonatomic) unsigned long long hintEdge;
@property(readonly, nonatomic) double hintDisplacement;
@property(readonly, nonatomic) long long coordinatedPresentingControllerIdentifier;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)_lockScreenViewController;
- (void)_handleActionContextRequiringAuthentication:(id)arg1;
- (_Bool)_requiresAuthenticationForActionContext:(id)arg1;
- (void)_handleActionContextRequiringUIUnlock:(id)arg1;
- (_Bool)_requiresUIUnlockForActionContext:(id)arg1;
- (_Bool)_handleActionOrRequestWithDefaultAction:(CDUnknownBlockType)arg1 lockedAction:(CDUnknownBlockType)arg2;
- (void)biometricEventMonitorDidAuthenticate:(id)arg1;
- (void)_updateForChangeInLockedState;
- (void)handleGrabberPress:(id)arg1;
@property(readonly, nonatomic, getter=isGrabberVisible) _Bool grabberVisible;
- (void)_hideGrabberForSystemGesture;
- (void)hideGrabberAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canShowHideGrabberView;
- (void)_setGrabberEnabled:(_Bool)arg1;
- (void)unregisterSharedGrabberView;
- (void)registerSharedGrabberView:(id)arg1 withWillPresentBlock:(CDUnknownBlockType)arg2 hideBlock:(CDUnknownBlockType)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (void)_updateShouldShowGrabberOnFirstSwipe;
- (_Bool)_shouldShowGrabberOnFirstSwipe;
- (double)percentComplete;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)transitionDidFinish:(id)arg1;
- (void)transitionDidBegin:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (id)_newViewControllerTransitionContextForPresentation:(_Bool)arg1 interactive:(_Bool)arg2;
- (void)_dismissPartialPulldownAnimated:(_Bool)arg1 fromCurrentState:(_Bool)arg2 withStepper:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissAnimated:(_Bool)arg1 fromCurrentState:(_Bool)arg2 withStepper:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)_transitionNonInteractivelyForPresentation:(_Bool)arg1 stepper:(CDUnknownBlockType)arg2;
- (void)_transitionNonInteractively;
- (void)presentAnimated:(_Bool)arg1 presentationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentAnimated:(_Bool)arg1;
- (void)_cancelTransition;
- (void)_endTransitionWithVelocity:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_cancelInteractiveTransitionIfAppropriateForVelocity:(struct CGPoint)arg1;
- (_Bool)_shouldPresentSpotlightForCurrentTransitionStateAndVelocity:(struct CGPoint)arg1;
- (void)_beginDismissalWithTouchLocation:(struct CGPoint)arg1;
- (void)_beginPresentationWithTouchLocation:(struct CGPoint)arg1 presentationBegunHandler:(CDUnknownBlockType)arg2;
- (void)prepareLayoutForPresentationFromBanner;
- (void)_cleanupAfterTransition:(_Bool)arg1;
- (void)_setupForDismissal;
- (void)_setupForPresentationWithTouchLocation:(struct CGPoint)arg1;
- (void)_setupForViewPresentation;
- (void)_setViewUserInteractionEnabled:(_Bool)arg1;
- (void)_removeCoveredContentSnapshot;
- (void)_insertCoveredContentSnapshotIfNecessary:(id)arg1;
- (void)_invalidateCoveredContentSnapshot;
- (void)_updateCoveredContentSnapshot;
- (_Bool)_shouldSelectViewControllerAtTouchLocation;
- (void)_handleDismissGesture:(id)arg1;
- (void)_showNotificationCenterGestureCancelled;
- (void)_showNotificationCenterGestureFailed;
- (void)_showNotificationCenterGestureEndedWithGestureRecognizer:(id)arg1;
- (void)_showNotificationCenterGestureChangedWithGestureRecognizer:(id)arg1 duration:(double)arg2;
- (void)_showNotificationCenterGestureBeganWithGestureRecognizer:(id)arg1;
- (void)_handleShowNotificationCenterGesture:(id)arg1;
- (void)_unregisterNotificationCenterBulletinWindowClient:(id)arg1;
- (void)_registerNotificationCenterBulletinWindowClient:(id)arg1;
- (_Bool)handleMenuButtonTap;
- (_Bool)requiresKeyWindow;
@property(nonatomic) _Bool blursBackground;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
@property(readonly, nonatomic) __weak SBWindow *window;
@property(readonly, nonatomic) long long layoutMode;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSSet *conflictingGestures;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSSet *gestures;
@property(readonly) unsigned long long hash;
@property(nonatomic) id <SBPresentingDelegate> presentingDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSSet *tapExcludedViews;

@end

