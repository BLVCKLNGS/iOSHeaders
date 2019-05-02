//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSceneManager.h"

#import "SBApplicationRestrictionObserver.h"

@class FBSSceneClientSettingsDiffInspector, NSString, SBFaceContactExpectationManager, SBMainDisplaySceneLayoutViewController, SBSideAppState, UIApplicationSceneClientSettingsDiffInspector, UISystemNavigationAction;

@interface SBMainDisplaySceneManager : SBSceneManager <SBApplicationRestrictionObserver>
{
    UIApplicationSceneClientSettingsDiffInspector *_internalClientSettingsDiffInspector;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    FBSSceneClientSettingsDiffInspector *_externalClientSettingsDiffInspector;
    long long _validInterfaceOrientation;
    unsigned long long _validInterfaceOrientationChangeCount;
    unsigned long long _processedValidInterfaceOrientationChangeCount;
    SBSideAppState *_sideAppState;
    SBFaceContactExpectationManager *_faceContactExpectationManager;
    UISystemNavigationAction *_currentBreadcrumbNavigationAction;
}

@property(retain, nonatomic) UISystemNavigationAction *currentBreadcrumbNavigationAction; // @synthesize currentBreadcrumbNavigationAction=_currentBreadcrumbNavigationAction;
- (void).cxx_destruct;
- (void)_updateLevelForScene:(id)arg1 transitionContext:(id)arg2;
- (double)_effectiveKeyboardSceneLevelForClientSettings:(id)arg1;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)_appKilledInAppSwitcher:(id)arg1;
- (_Bool)_animateGeometryChangesForExternalForegroundApplicationScenes;
- (void)_updateExternalForegroundApplicationScenesToInterfaceOrientation:(long long)arg1 force:(_Bool)arg2;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_application:(id)arg1 initiatedChangefromInterfaceOrientation:(long long)arg2 toInterfaceOrientation:(long long)arg3 scene:(id)arg4 sceneSettings:(id)arg5 transitionContext:(id)arg6;
- (id)_rotationAnimationSettingsForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 medusaSettings:(id)arg3;
- (id)_externalClientSettingsDiffInspector;
- (id)_appClientSettingsDiffInspector;
- (id)_internalClientSettingsDiffInspector;
- (void)applicationRestrictionController:(id)arg1 didUpdateVisibleTags:(id)arg2 hiddenTags:(id)arg3;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 success:(_Bool)arg4;
- (id)_newLayoutControllerForDisplay:(id)arg1;
- (_Bool)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (id)_snapshotRequestsForApplication:(id)arg1 scene:(id)arg2 settings:(id)arg3;
- (_Bool)_handleAction:(id)arg1 forScene:(id)arg2;
- (long long)_hostingPolicyForScene:(id)arg1;
- (id)additionalActionsForApplication:(id)arg1 withTransitionContext:(id)arg2;
- (_Bool)_isActivatingPinnedBreadcrumbApp:(id)arg1 withTransitionContext:(id)arg2;
- (id)_breadcrumbNavigationActionForApplication:(id)arg1 withTransitionContext:(id)arg2;
- (void)_activateAppLink:(id)arg1 withAppLinkState:(id)arg2 transitionContext:(id)arg3 wasFromSpotlight:(_Bool)arg4 previousBreadcrumb:(id)arg5;
- (void)_activateBreadcrumbApplication:(id)arg1;
- (long long)_openStrategyForAppLinkState:(id)arg1;
- (void)_presentSpotlightFromSource:(unsigned long long)arg1 fromBreadcrumb:(_Bool)arg2;
- (id)_destinationContextsForApplication:(id)arg1 withTransitionContext:(id)arg2;
- (id)_breadcrumbBundleIdForApplication:(id)arg1 withTransitionContext:(id)arg2;
- (_Bool)_shouldBreadcrumbApplication:(id)arg1 withTransitionContext:(id)arg2;
@property(retain, nonatomic) SBSideAppState *sideAppState;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SBMainDisplaySceneLayoutViewController *layoutController; // @dynamic layoutController;
@property(readonly) Class superclass;

@end

