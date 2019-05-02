//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/FBApplicationUpdateScenesTransaction.h>

@class FBSDisplay, FBSSceneClientSettings, NSString, SBWorkspaceApplication, SBWorkspaceApplicationTransitionContext, UIApplicationSceneTransitionContext, UIMutableApplicationSceneSettings;
@protocol UIApplicationSceneClientSettings;

@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction
{
    SBWorkspaceApplication *_appContext;
    SBWorkspaceApplicationTransitionContext *_transitionContext;
    FBSDisplay *_display;
    NSString *_sceneIdentifier;
    UIMutableApplicationSceneSettings *_settings;
    UIApplicationSceneTransitionContext *_sceneTransitionContext;
    FBSSceneClientSettings<UIApplicationSceneClientSettings> *_clientSettings;
    _Bool _suspendedActivation;
    _Bool _shouldSendActivationResult;
}

@property(nonatomic) _Bool shouldSendActivationResult; // @synthesize shouldSendActivationResult=_shouldSendActivationResult;
@property(readonly, nonatomic) UIMutableApplicationSceneSettings *sceneSettings; // @synthesize sceneSettings=_settings;
@property(readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(readonly, nonatomic) SBWorkspaceApplication *application; // @synthesize application=_appContext;
- (void).cxx_destruct;
- (void)_sendActivationResultWithSuccess:(_Bool)arg1;
- (void)_clearApplicationActivationState;
- (void)_noteDidCommitUpdateForScene:(id)arg1;
- (void)_noteWillCommitUpdateForScene:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_performSynchronizedCommit:(id)arg1;
- (void)_didComplete;
- (id)initWithApplication:(id)arg1 transitionRequest:(id)arg2;

@end
