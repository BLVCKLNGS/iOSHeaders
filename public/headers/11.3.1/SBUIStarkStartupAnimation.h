//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIStarkScreenAnimationController.h"

@class UIView;

@interface SBUIStarkStartupAnimation : SBUIStarkScreenAnimationController
{
    UIView *_fromLockoutView;
}

- (void).cxx_destruct;
- (void)_abortAnimation;
- (void)_begin;
- (void)_cleanupAnimation;
- (id)_getTransitionWindow;
@property(readonly, nonatomic) UIView *fromLockoutView; // @synthesize fromLockoutView=_fromLockoutView;
- (id)initFromLockoutView:(id)arg1 starkScreenController:(id)arg2;
- (id)initWithApplicationSceneEntity:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3;

@end
