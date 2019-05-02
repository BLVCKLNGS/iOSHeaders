//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBCoordinatedPresenting.h"
#import "SBPresentingDelegate.h"
#import "SBUIPasscodeLockViewDelegate.h"

@class BBObserver, LSBestAppSuggestion, NSMutableArray, NSSet, NSString, NSURL, SBApplication, SBBounceSettings, SBDisableAppStatusBarAlphaChangesAssertion, SBLockScreenBounceAnimator, SBLockScreenView, SBPasscodeLockDisableAssertion, SBUIPasscodeViewWithLockScreenStyle, UIImage, UIView, _UIDynamicValueAnimation;

@interface SBLockScreenSlideUpToAppController : NSObject <SBPresentingDelegate, SBUIPasscodeLockViewDelegate, SBCoordinatedPresenting>
{
    _Bool _isInScreenOffMode;
    UIView *_slidingStatusBarView;
    SBLockScreenView *_lockScreenView;
    _Bool _currentlySliding;
    SBLockScreenBounceAnimator *_bounceAnimator;
    _UIDynamicValueAnimation *_dynamicAnimation;
    id <SBPresentingDelegate> _presentingDelegate;
    SBBounceSettings *_bounceSettings;
    SBApplication *_targetApp;
    LSBestAppSuggestion *_targetAppInfo;
    _Bool _targetAppIsSiri;
    _Bool _targetAppIsInCallService;
    _Bool _deactivatingForInCallService;
    NSURL *_targetURL;
    UIImage *_grabberImage;
    BBObserver *_bulletinObserver;
    _Bool _attemptingUnlock;
    _Bool _showingPasscodeView;
    _Bool _dismissingPasscodeView;
    _Bool _defaultImagesNeedUpdateUponPasscodeExit;
    NSMutableArray *_deferredAppUpdateBlocks;
    _Bool _executingDeferredAppUpdateBlocks;
    _Bool _waitingToDeactivateForActivityLaunch;
    CDUnknownBlockType _preUIUnlockActions;
    SBPasscodeLockDisableAssertion *_passcodeDisableAssertionForContinuityUnlock;
    UIView *_clippingView;
    UIView *_appPortraitDefaultImageView;
    UIView *_appLandscapeDefaultImageView;
    UIView *_appBackgroundView;
    SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
    UIView *_passcodeOverscrollView;
    UIView *_appContextHostView;
    _Bool _disableGracePeriodForCamera;
    SBPasscodeLockDisableAssertion *_disableGracePeriodForCameraAssertion;
    _Bool _disablingOcclusionsForTargetApp;
    _Bool _launchingAppFromNonOccludedState;
    id <SBLockScreenSlideUpToAppControllerDelegate> _delegate;
    _Bool _didAbortBounce;
    SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAssertion;
    double _boundaryTranslationInY;
}

@property(nonatomic) double boundaryTranslationInY; // @synthesize boundaryTranslationInY=_boundaryTranslationInY;
@property(nonatomic) _Bool didAbortBounce; // @synthesize didAbortBounce=_didAbortBounce;
@property(retain, nonatomic) SBDisableAppStatusBarAlphaChangesAssertion *disableStatusBarAssertion; // @synthesize disableStatusBarAssertion=_disableStatusBarAssertion;
@property(nonatomic) id <SBLockScreenSlideUpToAppControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)bounceAnimator;
- (id)_newDynamicAnimationForTargetValue:(double)arg1 withInitialVelocity:(double)arg2;
- (id)_newBounceAnimatorWithGrabberView:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (void)presentingControllerDidFinishPresentation:(id)arg1;
- (void)presentingController:(id)arg1 willHandleGesture:(id)arg2;
- (_Bool)presentingController:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
- (_Bool)presentingController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (void)treatCurrentPositionAsBoundaryforGesture:(id)arg1;
- (void)reenableGestureRecognizer:(id)arg1;
- (void)cancelGestureRecognizer:(id)arg1;
- (void)abortAnimatedTransition;
- (void)endTransitionWithVelocity:(struct CGPoint)arg1 wasCancelled:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (double)_foregroundTranslationForLocation:(struct CGPoint)arg1;
- (void)updateTransitionWithTouchLocation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)beginPresentationWithTouchLocation:(struct CGPoint)arg1;
- (_Bool)isPresentingControllerTransitioning;
@property(readonly, nonatomic) unsigned long long hintEdge;
@property(readonly, nonatomic) double hintDisplacement;
@property(readonly, nonatomic) long long coordinatedPresentingControllerIdentifier;
@property(readonly, nonatomic) NSSet *tapExcludedViews;
@property(readonly, nonatomic) NSSet *gestures;
@property(nonatomic) id <SBPresentingDelegate> presentingDelegate;
- (void)setDisableGracePeriodForCamera:(_Bool)arg1;
- (void)_deviceBlockedStateChanged:(id)arg1;
- (_Bool)isShowingPasscodeView;
- (_Bool)hasActiveUnlockActionContext;
- (_Bool)wantsToShowStatusBar;
- (void)_reloadAppDefaultImages;
- (void)_clearAppDefaultImagesAndRemoveFromSuperview:(_Bool)arg1;
- (void)_passcodeLockStateChanged;
- (void)_addOrRemovePasscodeViewIfNecessary;
- (void)setTargetURL:(id)arg1;
- (void)setTargetApp:(id)arg1 withLSInfo:(id)arg2;
- (void)presentTargetAppAnimated:(_Bool)arg1;
- (void)activateTargetApp;
- (void)_activateApp:(id)arg1 withAppInfo:(id)arg2 andURL:(id)arg3 animated:(_Bool)arg4;
- (void)hideSlidingStatusBar;
- (void)abortDynamicAnimationForScreenOff;
- (void)_executeDeferredAppUpdateBlocks;
- (void)_commonGestureCleanup;
- (void)finalizeGesture;
- (void)_animateSlideUpWithVelocity:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateSlideDownWithVelocity:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_finishSlideDownWithCompletion:(CDUnknownBlockType)arg1;
- (void)translateSlidingViewByY:(double)arg1;
- (void)performGeneralCleanupForUserAction:(_Bool)arg1;
- (void)_cleanupFromDismissal;
- (void)_cleanupBackgroundLaunchAndContextHostingNonsense;
- (void)_handleAppLaunchedUnderLockScreenWithResult:(long long)arg1;
- (void)prepareForSlideUpAnimation;
- (id)_lockScreenViewFakeStatusBar;
- (void)deactivate;
- (void)activate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setInScreenOffMode:(_Bool)arg1;
- (void)setGrabberViewImage:(id)arg1;
- (void)setGrabberOnLockScreen:(id)arg1;
- (id)_newGrabberView;
- (void)_setupBounceAnimatorAndGrabberView;
- (void)setLockScreenView:(id)arg1 force:(_Bool)arg2;
- (id)lockScreenView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSSet *conflictingGestures;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
