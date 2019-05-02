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

@property(retain, nonatomic) SBUIAnimationController *animation; // @synthesize animation=_animation;
@property(nonatomic) _Bool activation; // @synthesize activation=_activation;
@property(retain, nonatomic) SBWorkspaceAlert *deactivatingAlert; // @synthesize deactivatingAlert=_deactivatingAlert;
@property(retain, nonatomic) SBWorkspaceAlert *activatingAlert; // @synthesize activatingAlert=_activatingAlert;
- (void).cxx_destruct;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_updateSceneLayout;
- (_Bool)_isFromMainSwitcher;
- (void)_deactivateAlertIfNecessary;
- (void)_alertAnimationComplete:(id)arg1;
- (void)_doAlertTransition;
- (void)_didComplete;
- (void)_cleanUpAnimation;
- (void)_begin;
- (void)_willBegin;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

