//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBIconAnimator, SBRemoteAlertAdapter;

@interface SBUIAnimationZoomUpInCallAlertFromHome : SBUIMainScreenAnimationController
{
    SBRemoteAlertAdapter *_alert;
    SBAlertManager *_alertManager;
    SBIconAnimator *_iconAnimator;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)dealloc;
- (id)initWithTransitionContextProvider:(id)arg1;

@end

