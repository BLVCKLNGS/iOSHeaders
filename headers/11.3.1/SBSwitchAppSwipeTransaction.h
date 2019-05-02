//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSystemGestureWorkspaceTransaction.h"

#import "SBSceneLayoutWorkspaceTransactionDelegate.h"
#import "SBUIAnimationControllerObserver.h"
#import "SBWorkspaceApplicationSceneTransitionContextDelegate.h"

@class NSString, NSTimer, SBAutoPiPWorkspaceTransaction, SBLayoutElement, SBSceneLayoutWorkspaceTransaction, SBUISwitchAppSwipeAnimationController, SBWorkspaceApplicationSceneTransitionContext;

@interface SBSwitchAppSwipeTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver, SBSceneLayoutWorkspaceTransactionDelegate, SBWorkspaceApplicationSceneTransitionContextDelegate>
{
    id <SBSwitchAppSwipeTransactionDelegate> _delegate;
    SBUISwitchAppSwipeAnimationController *_animationController;
    SBSceneLayoutWorkspaceTransaction *_sceneLayoutTransaction;
    CDUnknownBlockType _layoutCompletion;
    CDUnknownBlockType _layoutContinuation;
    NSTimer *_delayedAppLaunchTimer;
    _Bool _trackingGesture;
    _Bool _endLayoutTransition;
    _Bool _completingAnimation;
    double _basePercentage;
    SBWorkspaceApplicationSceneTransitionContext *_originalTransitionContext;
    SBWorkspaceApplicationSceneTransitionContext *_startingTransitionContext;
    SBWorkspaceApplicationSceneTransitionContext *_nextTransitionContext;
    SBWorkspaceApplicationSceneTransitionContext *_previousTransitionContext;
    SBWorkspaceApplicationSceneTransitionContext *_endingTransitionContext;
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
    SBLayoutElement *_floatingLayoutElement;
}

- (void).cxx_destruct;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (void)_cancelPendingAppLaunch;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_continueLayoutTransitionToCompletion:(_Bool)arg1 startAutoPiP:(_Bool)arg2 updateScenes:(_Bool)arg3;
- (void)_continueLayoutTransitionWithContext:(id)arg1 toCompletion:(_Bool)arg2 startAutoPiP:(_Bool)arg3 updateScenes:(_Bool)arg4;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)_gestureCancelled;
- (void)_gestureChanged:(double)arg1;
- (void)_gestureEndedWithCompletionType:(long long)arg1;
- (void)_pendingAppLaunchTimerFired;
- (void)_schedulePendingAppLaunch;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (id)createSceneEntityForHandle:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SBSwitchAppSwipeTransactionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SBWorkspaceApplicationSceneTransitionContext *endingTransitionContext; // @synthesize endingTransitionContext=_endingTransitionContext;
- (id)initWithTransitionRequest:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 originalTransitionContext:(id)arg2;
@property(readonly, nonatomic, getter=isFinishedAnimating) _Bool finishedAnimating;
@property(readonly, nonatomic, getter=isTrackingGesture) _Bool trackingGesture; // @synthesize trackingGesture=_trackingGesture;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
@property(retain, nonatomic) SBWorkspaceApplicationSceneTransitionContext *nextTransitionContext; // @synthesize nextTransitionContext=_nextTransitionContext;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
@property(retain, nonatomic) SBWorkspaceApplicationSceneTransitionContext *previousTransitionContext; // @synthesize previousTransitionContext=_previousTransitionContext;
- (void)programmaticallySwipeToNext;
- (void)programmaticallySwipeToPrevious;
- (void)startTrackingGesture:(id)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(CDUnknownBlockType)arg2;
- (void)transaction:(id)arg1 performTransitionWithCompletion:(CDUnknownBlockType)arg2;
- (void)transactionWillBeginLayoutTransition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

