//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlert, SBLockToAppStatusBarAnimator;

@interface SBUIAnimationFadeAlertToSpringBoard : SBUIMainScreenAnimationController
{
    SBAlert *_fromAlert;
    SBLockToAppStatusBarAnimator *_statusBarAnimator;
    _Bool _needsAnimatedFade;
}

- (void).cxx_destruct;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (id)animationSettings;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

