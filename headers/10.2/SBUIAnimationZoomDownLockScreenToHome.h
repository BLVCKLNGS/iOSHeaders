//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationZoomApp.h"

@class SBAlert, SBIconAnimator, SBLockToAppStatusBarAnimator, SBWindowSelfHostWrapper, SBWorkspaceTransitionRequest, UIView;

@interface SBUIAnimationZoomDownLockScreenToHome : SBUIAnimationZoomApp
{
    SBAlert *_dismissingAlert;
    SBLockToAppStatusBarAnimator *_statusBarAnimator;
    SBIconAnimator *_iconAnimator;
    SBWindowSelfHostWrapper *_alertWindowHostWrapper;
    UIView *_viewToAnimate;
    SBWorkspaceTransitionRequest *_transitionRequest;
}

- (void).cxx_destruct;
- (id)animationSettings;
- (void)_startAnimation;
- (void)_cleanupAnimation;
- (_Bool)_shouldDismissBanner;
- (void)_prepareAnimation;
- (id)initWithTransitionContextProvider:(id)arg1 zoomDirection:(unsigned long long)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

