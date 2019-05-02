//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CCUIControlCenterObserver.h"
#import "SBPresentingDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSDate, NSMapTable, NSMutableSet, NSString, SBLockScreenHintLongPressGestureRecognizer, SBLockScreenHintPanGestureRecognizer, SBLockScreenHintTapGestureRecognizer, SBLockScreenView;

@interface SBLockScreenHintManager : NSObject <UIGestureRecognizerDelegate, SBPresentingDelegate, CCUIControlCenterObserver>
{
    _Bool _gestureHandlingEnabled;
    _Bool _guestGestureActive;
    _Bool _didEvaluatePressDelay;
    _Bool _fingerOnMesa;
    SBLockScreenView *_lockScreenView;
    SBLockScreenHintTapGestureRecognizer *_tapGesture;
    SBLockScreenHintLongPressGestureRecognizer *_longPressGesture;
    SBLockScreenHintPanGestureRecognizer *_panGesture;
    NSMutableSet *_gestures;
    NSMapTable *_controllersToGuestGestures;
    NSMapTable *_controllersToConflictingGuestGestures;
    long long _gestureState;
    id <SBCoordinatedPresenting> _previousActiveController;
    id <SBCoordinatedPresenting> _activeController;
    unsigned long long _activeHintEdge;
    NSDate *_initialTouchTimeStamp;
    struct CGPoint _initialPanLocationInViewSpace;
}

@property(nonatomic, getter=isFingerOnMesa) _Bool fingerOnMesa; // @synthesize fingerOnMesa=_fingerOnMesa;
@property(nonatomic) _Bool didEvaluatePressDelay; // @synthesize didEvaluatePressDelay=_didEvaluatePressDelay;
@property(nonatomic, getter=isGuestGestureActive) _Bool guestGestureActive; // @synthesize guestGestureActive=_guestGestureActive;
@property(retain, nonatomic) NSDate *initialTouchTimeStamp; // @synthesize initialTouchTimeStamp=_initialTouchTimeStamp;
@property(nonatomic) unsigned long long activeHintEdge; // @synthesize activeHintEdge=_activeHintEdge;
@property(retain, nonatomic) id <SBCoordinatedPresenting> activeController; // @synthesize activeController=_activeController;
@property(retain, nonatomic) id <SBCoordinatedPresenting> previousActiveController; // @synthesize previousActiveController=_previousActiveController;
@property(nonatomic) long long gestureState; // @synthesize gestureState=_gestureState;
@property(retain, nonatomic) NSMapTable *controllersToConflictingGuestGestures; // @synthesize controllersToConflictingGuestGestures=_controllersToConflictingGuestGestures;
@property(retain, nonatomic) NSMapTable *controllersToGuestGestures; // @synthesize controllersToGuestGestures=_controllersToGuestGestures;
@property(retain, nonatomic) NSMutableSet *gestures; // @synthesize gestures=_gestures;
@property(nonatomic) struct CGPoint initialPanLocationInViewSpace; // @synthesize initialPanLocationInViewSpace=_initialPanLocationInViewSpace;
@property(retain, nonatomic) SBLockScreenHintPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) SBLockScreenHintLongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) SBLockScreenHintTapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic, getter=isGestureHandlingEnabled) _Bool gestureHandlingEnabled; // @synthesize gestureHandlingEnabled=_gestureHandlingEnabled;
@property(retain, nonatomic) SBLockScreenView *lockScreenView; // @synthesize lockScreenView=_lockScreenView;
- (void).cxx_destruct;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)notificationCenterDidDismiss:(id)arg1;
- (void)presentingController:(id)arg1 conflictingGestureDidEnd:(id)arg2;
- (void)presentingController:(id)arg1 conflictingGestureDidBegin:(id)arg2;
- (void)presentingControllerDidFinishPresentation:(id)arg1;
- (void)presentingController:(id)arg1 willHandleGesture:(id)arg2;
- (void)_presentingController:(id)arg1 willHandlePan:(id)arg2;
- (void)_presentingController:(id)arg1 willHandleTap:(id)arg2;
- (_Bool)presentingController:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
- (_Bool)presentingController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_handlePan:(id)arg1;
- (void)_updateGrabberStateForControllerIfNecessary:(id)arg1;
- (void)_endControllerPresentationForPanInState:(long long)arg1;
- (void)_updateControllerPresentationForPan;
- (void)_beginControllerPresentationForPan;
- (void)_tapPeriodElapsed;
- (void)_resetGesture:(id)arg1 forController:(id)arg2;
- (void)_handlePress:(id)arg1;
- (void)_dismissControllerForPress:(id)arg1 abortingCurrentAnimation:(_Bool)arg2;
- (void)_updateActiveControllerPresentationForPress:(_Bool)arg1;
- (void)_handleTap:(id)arg1;
- (id)_tapGestureForActiveController;
- (void)_resetGesture:(id)arg1;
- (_Bool)_hasTapPeriodElapsed;
- (void)_updateControllerPresentationForTap;
- (double)_elapsedTapPeriod;
- (void)_updateControllerPresentationForTapOrPress:(id)arg1 withAnimation:(CDUnknownBlockType)arg2 abortingCurrentAnimation:(_Bool)arg3;
- (void)_abortCurrentAnimationForController:(id)arg1;
- (_Bool)_hintGestureShouldBegin:(id)arg1;
- (long long)_compareControllerWithIdentifier:(long long)arg1 withControllerWithIdentifier:(long long)arg2;
- (_Bool)_isPresentationEnabledForController:(id)arg1 locationInWindow:(struct CGPoint)arg2;
- (_Bool)_isBounceEnabledForController:(id)arg1 locationInWindow:(struct CGPoint)arg2;
- (_Bool)_isController:(id)arg1 excludingViewsUnderGesture:(id)arg2;
- (void)_cancelGuestGesturesExcludingController:(id)arg1;
- (void)_initializeInitialTouchTimeStamp;
- (void)_resetGestureSequenceAndReenableGestures;
- (void)_reenableGestures;
- (void)_resetGestureSequence;
- (void)_resetInitialPanLocation;
- (unsigned long long)_hintEdgeForController:(id)arg1;
- (_Bool)_didActiveControllerChange;
- (id)_controllerForGesture:(id)arg1;
- (_Bool)_canControllerWithIdentifier:(long long)arg1 becomeActiveWithTouchAtLocation:(struct CGPoint)arg2;
- (id)_coordinatedPresentingControllerWithIdentifier:(long long)arg1;
- (id)_lockScreenNotificationListView;
- (id)_lockScreenNotificationListController;
- (id)_lockScreenBottomLeftController;
- (id)_lockScreenCameraController;
- (id)_lockScreenViewController;
- (struct CGRect)_bottomGrabberZone;
- (struct CGRect)_bottomLeftGrabberZone;
- (struct CGRect)_cameraGrabberZone;
- (struct CGRect)_topGrabberZone;
- (id)_viewForGestures;
- (void)_setLocalGesture:(id)arg1 enabled:(_Bool)arg2;
- (_Bool)_doesController:(id)arg1 manageGestureLikeGesture:(id)arg2;
- (id)_controller:(id)arg1 managedGestureLikeGesture:(id)arg2;
- (void)removeCoordinatedPresentingController:(id)arg1;
- (void)resetCoordinatedPresentingController:(id)arg1;
- (void)addCoordinatedPresentingController:(id)arg1;
- (_Bool)_hasCoordinatedPresentingController:(id)arg1;
- (void)_removeTapGestureFailureRequirementFromGuestGestures:(id)arg1;
- (void)_removeAllGestures;
- (void)_installLocalGestures;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

