//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSMutableSet, SBAppStatusBarSettingsAssertion, SBFloatingDockBehaviorAssertion, SBIconController;

@interface SBHomeScreenViewController : UIViewController
{
    NSMutableSet *_iconRotationPreventionReasons;
    _Bool _disableAnimationForNextIconRotation;
    _Bool _useExtraLargeHammerForNextPossibleIconRotation;
    SBFloatingDockBehaviorAssertion *_homeScreenFloatingDockAssertion;
    SBAppStatusBarSettingsAssertion *_childOrPresentedStatusBarAssertion;
    _Bool _homeScreenAutorotatesEvenWhenIconIsDragging;
    SBIconController *_iconController;
}

- (void).cxx_destruct;
- (void)_animateTransitionToSize:(struct CGSize)arg1 andInterfaceOrientation:(long long)arg2 withTransitionContext:(id)arg3;
- (id)_autorotationPreventionReasons;
- (void)_cleanupAfterTransitionToSize:(struct CGSize)arg1 fromInterfaceOrientation:(long long)arg2 withTransitionContext:(id)arg3;
- (void)_prepareForTransitionToSize:(struct CGSize)arg1 andInterfaceOrientation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)disableAnimationForNextIconRotation;
@property(nonatomic) _Bool homeScreenAutorotatesEvenWhenIconIsDragging; // @synthesize homeScreenAutorotatesEvenWhenIconIsDragging=_homeScreenAutorotatesEvenWhenIconIsDragging;
@property(retain, nonatomic) SBIconController *iconController; // @synthesize iconController=_iconController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)nudgeIconInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setAllowIconRotation:(_Bool)arg1 forReason:(id)arg2;
- (void)setNeedsStatusBarAppearanceUpdate;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)useExtraLargeHammerForNextPossibleIconRotation;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

