//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkAppToAppWorkspaceTransaction.h"

#import "SBSceneHandleObserver.h"

@class NSString, SBApplicationSceneEntity, SBApplicationSceneHandle, SBWorkspaceAlert;

@interface SBStarkAppToImpersonatedAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction <SBSceneHandleObserver>
{
    SBWorkspaceAlert *_activatingAlert;
    SBApplicationSceneEntity *_mainScreenAppThatWillBeActivated;
    SBApplicationSceneHandle *_mainSceneAppHandle;
    id _mainScreenAppProcessStateObserver;
}

- (void).cxx_destruct;
- (_Bool)_canBeInterrupted;
- (void)_doCommit;
- (id)_effectiveTopEntity;
- (void)_finishCommit;
- (id)_newAnimationFromAppToApp;
- (id)_newAnimationFromAppToNowPlaying;
- (id)_newAnimationFromLauncherToApp;
- (id)_newAnimationFromNowPlayingToApp;
- (void)_noteWillActivateApplicationOnMainScreen:(id)arg1 underLock:(_Bool)arg2;
- (void)_stopWaitingForApplicationSceneContentWithSuccess:(_Bool)arg1;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

