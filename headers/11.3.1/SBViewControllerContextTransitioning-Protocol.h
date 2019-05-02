//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBViewControllerPercentCompletionReporting.h"
#import "SBViewControllerReversibleTransitioning.h"
#import "SBViewControllerTransitionRestartedReporting.h"
#import "UIViewControllerContextTransitioning.h"

@protocol SBViewControllerContextTransitioning <UIViewControllerContextTransitioning, SBViewControllerReversibleTransitioning, SBViewControllerPercentCompletionReporting, SBViewControllerTransitionRestartedReporting>
- (_Bool)initiallyInteractive;
- (_Bool)isTransitioning;
- (void)restartTransition;
- (_Bool)supportsCancelling;
- (_Bool)supportsRestarting;
- (_Bool)wasPreviousPhaseInteractive;
@end

