//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBToAppsWorkspaceTransaction.h"

@class NSObject<OS_dispatch_group>, SBAutoPiPWorkspaceTransaction, SBUIAnimationController;

@interface SBAppToAppWorkspaceTransaction : SBToAppsWorkspaceTransaction
{
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
    SBUIAnimationController *_animation;
    unsigned long long _autoPIPTransitionOrder;
    NSObject<OS_dispatch_group> *_pipDuringSwitchTransitionTasksGroup;
    _Bool _preventWhitePointAdaptationStrengthUpdateOnComplete;
}

- (void).cxx_destruct;
- (void)_animationDidRevealApplication;
- (void)_animationWillBegin:(_Bool)arg1;
- (void)_begin;
- (void)_beginTransition;
- (_Bool)_canBeInterrupted;
- (void)_cleanUpAfterAnimation;
- (void)_clearAnimation;
- (void)_didComplete;
- (_Bool)_fromAppWantsLiveContentForDosido;
- (void)_handleApplicationDidNotChange:(id)arg1;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (_Bool)_hasPostAnimationTasks;
- (_Bool)_hasPreAnimationTasks;
- (void)_performPostAnimationTasksWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performPreAnimationTasksWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (id)_setupAnimation;
- (id)_setupAnimationFrom:(id)arg1 to:(id)arg2;
- (_Bool)_shouldResignActiveForAnimation;
- (_Bool)_transitionWasCancelled;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithTransitionRequest:(id)arg1;
@property(nonatomic) _Bool preventWhitePointAdaptationStrengthUpdateOnComplete; // @synthesize preventWhitePointAdaptationStrengthUpdateOnComplete=_preventWhitePointAdaptationStrengthUpdateOnComplete;
- (_Bool)shouldAnimateOrientationChangeOnCompletion;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;

@end

