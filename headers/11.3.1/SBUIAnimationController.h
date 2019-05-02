//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBTransaction.h"

#import "SBSceneHandleObserver.h"
#import "SBUIAnimationControllerCoordinating.h"
#import "SBUIAnimationStepping.h"
#import "SBViewControllerTransitionContextDelegate.h"
#import "UIViewControllerInteractiveTransitioning.h"

@class BSAnimationSettings, BSBlockTransaction, BSTransaction, NSMutableSet, NSSet, NSString, SBAnimationStepper, SBApplicationSceneEntity, SBViewControllerTransitionContext, UIView, UIWindow;

@interface SBUIAnimationController : SBTransaction <SBSceneHandleObserver, UIViewControllerInteractiveTransitioning, SBViewControllerTransitionContextDelegate, SBUIAnimationStepping, SBUIAnimationControllerCoordinating>
{
    id <SBUIAnimationControllerTransitionContextProvider> _transitionContextProvider;
    BSBlockTransaction *_animationTransaction;
    BSBlockTransaction *_notifyObserversTransaction;
    BSBlockTransaction *_cleanupTransaction;
    NSSet *_sceneHandlesBeingObserved;
    NSSet *_entitiesToObserve;
    NSSet *_startTransactionDependencies;
    NSMutableSet *_coordinatingChildRelationships;
    NSMutableSet *_steppedCoordinatingChildAnimations;
    SBAnimationStepper *_stepper;
    UIWindow *_transitionWindow;
    UIView *_transitionContainer;
    int _animationState;
    _Bool _didPostBeginAnimationNotification;
    _Bool _didNotifyObserversOfCompletion;
    _Bool _needsCATransactionActivate;
    SBViewControllerTransitionContext *_transition;
    CDUnknownBlockType _animationTransactionCompletion;
}

- (void).cxx_destruct;
- (void)__abortAnimation;
- (id)__alertItemsController;
- (_Bool)__animationShouldStart;
- (void)__cleanupAnimation;
- (void)__noteAnimationDidTerminate;
- (void)__reportAnimationCompletion;
- (void)__startAnimation;
- (id)__startTransactionDependencyForEntity:(id)arg1;
- (_Bool)__wantsInitialProgressStateChange;
- (void)_abortAnimation;
- (void)_addDebugLogCategory:(id)arg1;
- (id)_animationIdentifier;
- (int)_animationState;
- (void)_application:(id)arg1 processStateDidChange:(id)arg2;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (void)_cleanupAnimation;
- (void)_cleanupEntityObservers;
- (void)_didInterruptWithReason:(id)arg1;
- (id)_displayIdentity;
- (void)_entityObserverProgressDidChange:(CDUnknownBlockType)arg1 waitForSceneContentAvailableTransactionBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateCoordinatingAnimationsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateCoordinatingAnimationsWithSchedulingPolicy:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)_enumerateCoordinatingChildRelationshipsWithBlock:(CDUnknownBlockType)arg1;
- (id)_getTransitionWindow;
- (_Bool)_isNullAnimation;
- (void)_noteAnimationDidFail;
- (void)_noteAnimationDidFinish;
- (void)_noteAnimationDidRevealApplication;
- (void)_notifyObserversOfAnimationCompletion;
- (void)_prepareAnimation;
- (void)_processStateDidChange:(id)arg1;
- (id)_progressDependencies;
- (void)_registerEntityObserversIfNecessary;
- (void)_sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)_setAnimationState:(int)arg1;
- (void)_setHidden:(_Bool)arg1;
- (_Bool)_shouldDismissBanner;
- (void)_startAnimation;
- (id)_transitionAnimator;
- (id)_viewsForAnimationStepping;
- (_Bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (_Bool)_willAnimate;
- (void)_willBeginWaitingForStartDependencies;
- (void)_willComplete;
- (void)_willSetupStartDependencies;
- (void)addCoordinatingChildTransaction:(id)arg1 withSchedulingPolicy:(unsigned long long)arg2;
- (void)addObserver:(id)arg1;
- (void)addSteppedCoordinatingChildAnimation:(id)arg1;
- (_Bool)animating;
@property(readonly, nonatomic) BSAnimationSettings *animationSettings;
@property(readonly, nonatomic) BSTransaction *animationTransaction; // @synthesize animationTransaction=_animationTransaction;
@property(copy, nonatomic) CDUnknownBlockType animationTransactionCompletion; // @synthesize animationTransactionCompletion=_animationTransactionCompletion;
- (void)cancelTransition;
@property(readonly, nonatomic) BSTransaction *cleanupTransaction; // @synthesize cleanupTransaction=_cleanupTransaction;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_transitionContainer;
- (id)coordinatingAnimationControllers;
- (void)dealloc;
- (void)delayAnimationUntilTransactionFinishes:(id)arg1;
- (void)delayCleanupUntilTransactionFinishes:(id)arg1;
- (void)enableSteppingWithAnimationSettings:(id)arg1;
- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
@property(readonly, copy, nonatomic) NSSet *fromApplicationSceneEntities;
@property(readonly, nonatomic) SBApplicationSceneEntity *fromApplicationSceneEntity;
- (id)init;
- (id)initWithTransitionContextProvider:(id)arg1;
- (_Bool)isFinishedAnimating;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
- (_Bool)isReasonableMomentToInterrupt;
@property(readonly, nonatomic, getter=isStepped) _Bool stepped;
@property(nonatomic) _Bool needsCATransactionActivate; // @synthesize needsCATransactionActivate=_needsCATransactionActivate;
@property(readonly, nonatomic) BSTransaction *notifyObserversTransaction; // @synthesize notifyObserversTransaction=_notifyObserversTransaction;
- (void)removeObserver:(id)arg1;
- (void)restartTransition;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
@property(nonatomic) double stepPercentage;
@property(retain, nonatomic) SBViewControllerTransitionContext *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) id <SBUIAnimationControllerTransitionContextProvider> transitionContextProvider; // @synthesize transitionContextProvider=_transitionContextProvider;
- (void)startInteractiveTransition:(id)arg1;
- (void)stopDelayingAnimationForTransaction:(id)arg1;
- (void)stopDelayingCleanupForTransaction:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *toApplicationSceneEntities;
@property(readonly, nonatomic) SBApplicationSceneEntity *toApplicationSceneEntity;
@property(readonly, nonatomic) id <SBViewControllerTransitionCoordinator> transitionCoordinator;
- (void)transitionDidFinish:(id)arg1;
@property(readonly, nonatomic) _Bool transitionSupportsCancelling;
@property(readonly, nonatomic) _Bool transitionSupportsRestarting;
@property(readonly, nonatomic) _Bool transitionWasCancelled;
@property(readonly, nonatomic) _Bool transitionWasRestarted;
- (_Bool)waitingToStart;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

