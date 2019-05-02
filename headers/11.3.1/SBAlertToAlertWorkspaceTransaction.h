//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMainWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class FBDisplayLayoutTransition, NSString, SBUIAnimationController, SBWorkspaceAlert;

@interface SBAlertToAlertWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    _Bool _animatingAlertDeactivation;
    FBDisplayLayoutTransition *_layoutTransition;
    _Bool _activation;
    SBWorkspaceAlert *_activatingAlert;
    SBWorkspaceAlert *_deactivatingAlert;
    SBUIAnimationController *_animation;
}

- (void).cxx_destruct;
- (void)_alertAnimationComplete:(id)arg1;
- (void)_begin;
- (void)_cleanUpAnimation;
- (void)_deactivateAlertIfNecessary;
- (void)_didComplete;
- (void)_doAlertTransition;
- (_Bool)_isFromMainSwitcher;
- (void)_updateSceneLayout;
- (void)_willBegin;
@property(retain, nonatomic) SBWorkspaceAlert *activatingAlert; // @synthesize activatingAlert=_activatingAlert;
@property(nonatomic) _Bool activation; // @synthesize activation=_activation;
@property(retain, nonatomic) SBUIAnimationController *animation; // @synthesize animation=_animation;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)animationControllerDidFinishAnimation:(id)arg1;
@property(retain, nonatomic) SBWorkspaceAlert *deactivatingAlert; // @synthesize deactivatingAlert=_deactivatingAlert;
- (void)dealloc;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

