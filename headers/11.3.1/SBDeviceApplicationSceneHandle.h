//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplicationSceneHandle.h"

#import "FBApplicationProcessObserver.h"
#import "SBIdleTimerProviding.h"

@class NSDictionary, NSMutableSet, NSString, SBModalAlertPresenter;

@interface SBDeviceApplicationSceneHandle : SBApplicationSceneHandle <FBApplicationProcessObserver, SBIdleTimerProviding>
{
    long long _lastActivationSource;
    SBModalAlertPresenter *_modalAlertPresenter;
    int _statusBarStyleOverridesToSuppress;
    long long _whitePointAdaptivityStyle;
    NSMutableSet *_statusBarForcedHiddenReasons;
    _Bool _hasMainSceneBeenForegroundAtLeastOnce;
    _Bool _isEffectivelyForeground;
    unsigned long long _keyboardLayerMaskStyle;
    NSDictionary *_alertSuppressionContextsBySectionIdentifier;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
}

- (void).cxx_destruct;
- (void)_commonInit;
- (_Bool)_currentClassicModeAllowsLaunchingToAnySupportedOrientation;
- (void)_didCreateScene:(id)arg1;
- (void)_didDestroyScene:(id)arg1;
- (void)_didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2;
- (id)_generateIdleTimerDescriptor;
@property(nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) __weak id <SBIdleTimerCoordinating> idleTimerCoordinator; // @synthesize idleTimerCoordinator=_idleTimerCoordinator;
- (long long)_initialMainSceneCompabilityMode:(id)arg1;
- (_Bool)_isEffectivelyForegroundWithApplicationSceneSettings:(id)arg1;
- (long long)_launchingInterfaceOrientationForOrientation:(long long)arg1;
- (unsigned long long)_mainSceneSupportedInterfaceOrientations;
- (_Bool)_mainSceneSupportsInterfaceOrientation:(long long)arg1;
- (void)_modifyApplicationSceneClientSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 initialSceneSettings:(id)arg4;
- (void)_modifyApplicationSceneSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (void)_modifyApplicationTransitionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (void)_modifyProcessExecutionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3;
- (void)_noteMainSceneBackgroundStyleChanged;
- (_Bool)_overriddenStatusBarStyleForApp:(id)arg1 style:(out long long *)arg2;
- (long long)_resumingInterfaceOrientationForOrientation:(long long)arg1;
- (id)_sceneDataStoreCreatingIfNecessary:(_Bool)arg1;
- (long long)_statusBarStyleWithActivationSettings:(id)arg1;
- (void)_updateIdleTimerForReason:(id)arg1;
- (long long)activationInterfaceOrientationForCurrentOrientation;
- (long long)activationInterfaceOrientationForOrientation:(long long)arg1;
- (void)addObserver:(id)arg1;
- (void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2;
@property(readonly, nonatomic) long long backgroundStyle;
- (id)coordinatorRequestedIdleTimerDescriptor:(id)arg1;
- (id)currentEffectiveStatusBarStyleRequest;
- (long long)currentInterfaceOrientation;
- (long long)currentStatusBarStyle;
- (void)decrementModalAlertCount;
- (_Bool)defaultStatusBarHiddenForOrientation:(long long)arg1;
- (long long)defaultStatusBarStyle;
- (id)effectiveStatusBarStyleRequestForActivation:(id)arg1;
@property(nonatomic) _Bool hasMainSceneBeenForegroundAtLeastOnce; // @synthesize hasMainSceneBeenForegroundAtLeastOnce=_hasMainSceneBeenForegroundAtLeastOnce;
- (void)incrementModalAlertCount;
- (_Bool)isCurrentStatusBarHiddenForOrientation:(long long)arg1;
- (_Bool)isDeviceApplicationSceneHandle;
@property(readonly, nonatomic, getter=isEffectivelyForeground) _Bool effectivelyForeground; // @synthesize effectivelyForeground=_isEffectivelyForeground;
@property(readonly, nonatomic, getter=isReachabilitySupported) _Bool reachabilitySupported;
@property(readonly, nonatomic, getter=isShowingModalAlert) _Bool showingModalAlert;
- (_Bool)isStatusBarForceHidden;
- (_Bool)isStatusBarHiddenForActivation:(id)arg1 forOrientation:(long long)arg2;
@property(readonly, nonatomic, getter=isTranslucent) _Bool translucent;
@property(nonatomic) long long lastActivationSource; // @synthesize lastActivationSource=_lastActivationSource;
- (id)mostRecentSceneSnapshotsForScale:(double)arg1 launchingOrientation:(long long)arg2;
- (id)newScenePlaceholderContentContextWithActivationSettings:(id)arg1;
- (id)newSceneViewController;
- (id)newSceneViewWithReferenceSize:(struct CGSize)arg1 orientation:(long long)arg2 hostRequester:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)saveSuspendSnapshot:(id)arg1;
@property(readonly, nonatomic) unsigned long long screenEdgesDeferringSystemGestures;
- (void)setAlertSuppressionContextsBySectionIdentifier:(id)arg1;
- (void)setKeyboardContextMaskStyle:(unsigned long long)arg1;
- (void)setStatusBarForceHidden:(_Bool)arg1 forReason:(id)arg2 animationSettings:(id)arg3;
@property(nonatomic) int statusBarStyleOverridesToSuppress; // @synthesize statusBarStyleOverridesToSuppress=_statusBarStyleOverridesToSuppress;
@property(nonatomic) long long whitePointAdaptivityStyle; // @synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle;
- (_Bool)shouldSuppressAlertForSuppressionContexts:(id)arg1 sectionIdentifier:(id)arg2;
- (id)statusBarEffectiveStyleRequestWithStyle:(long long)arg1;
- (long long)statusBarOrientation;
@property(readonly, nonatomic) long long wallpaperStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

