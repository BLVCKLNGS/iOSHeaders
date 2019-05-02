//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIAnimationControllerAnimator.h"

#import "SBViewControllerInteractiveAnimatedTransitioning.h"

@class NSString, SBAnimationStepper;

@interface SBUIAnimationControllerSteppedAnimator : SBUIAnimationControllerAnimator <SBViewControllerInteractiveAnimatedTransitioning>
{
    SBAnimationStepper *_stepper;
}

- (void).cxx_destruct;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (id)initWithAnimationController:(id)arg1;
- (id)initWithAnimationController:(id)arg1 stepper:(id)arg2;
- (double)percentComplete;
@property(readonly, nonatomic) SBAnimationStepper *stepper; // @synthesize stepper=_stepper;
- (void)updateTransition:(id)arg1 withPercentComplete:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

