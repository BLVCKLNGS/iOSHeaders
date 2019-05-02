//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertToAppsWorkspaceTransaction.h"

@class SBFAuthenticationAssertion, SBLockScreenViewControllerBase;

@interface SBLockScreenToAppsWorkspaceTransaction : SBAlertToAppsWorkspaceTransaction
{
    SBFAuthenticationAssertion *_siriAuthenticationAssertion;
    SBLockScreenViewControllerBase *_lockScreenViewController;
    _Bool _hidKeyboardForTransition;
    _Bool _updateStatusBarForLockTeardown;
    _Bool _disabledAutorotationForUnlockToApp;
}

- (void).cxx_destruct;
- (id)_animationToApplications;
- (id)_animationToSpringBoard;
- (_Bool)_shouldAnimateTransition;
- (void)_prepareApplicationsForActivationAnimated:(_Bool)arg1;
- (_Bool)_shouldUpdateUnderLockStateForForegroundScenes;
- (void)_performPreAnimationTasksWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_hasPreAnimationTasks;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_beginTransition;
- (void)_didComplete;
- (void)_begin;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

@end

