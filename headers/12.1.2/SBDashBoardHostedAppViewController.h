//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewExternalControllerBase.h"

#import "BSInvalidatable.h"
#import "SBAppViewControllerDelegate.h"
#import "SBApplicationHosting.h"
#import "SBSceneHandleObserver.h"

@class FBUIApplicationSceneDeactivationAssertion, NSSet, NSString, SBAppViewController, SBApplicationSceneHandle, SBApplicationSceneView, SBFAuthenticationAssertion, UIApplicationSceneClientSettingsDiffInspector;

@interface SBDashBoardHostedAppViewController : SBDashBoardViewExternalControllerBase <SBAppViewControllerDelegate, SBSceneHandleObserver, SBApplicationHosting, BSInvalidatable>
{
    id <SBDashBoardHostedAppViewControllerDelegate> _delegate;
    SBAppViewController *_appViewController;
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBFAuthenticationAssertion *_authenticationAssertion;
    NSString *_cachedBasicPublicDescription;
    _Bool _invalidated;
    _Bool _wantsIdleTimerDisabled;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    _Bool _intentToTransitionFromSecureAppToFull;
    _Bool _interfaceOrientationLocked;
}

@property(nonatomic) _Bool interfaceOrientationLocked; // @synthesize interfaceOrientationLocked=_interfaceOrientationLocked;
@property(nonatomic) _Bool intentToTransitionFromSecureAppToFull; // @synthesize intentToTransitionFromSecureAppToFull=_intentToTransitionFromSecureAppToFull;
@property(nonatomic) __weak id <SBDashBoardHostedAppViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_appClientSettingsDiffInspector;
- (void)_setResignActiveAssertionEnabled:(_Bool)arg1;
- (void)_setMode:(long long)arg1 fromClient:(_Bool)arg2 forReason:(id)arg3;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (_Bool)appViewControllerShouldBackgroundApplicationOnDeactivate:(id)arg1;
- (void)appViewController:(id)arg1 didTransitionFromMode:(long long)arg2 toMode:(long long)arg3;
- (void)appViewControllerDidBecomeReady:(id)arg1;
- (void)appViewControllerDidDeactivateApplication:(id)arg1;
- (void)appViewControllerWillActivateApplication:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)hostedApp;
- (_Bool)isHostingAnApp;
- (_Bool)canHostAnApp;
- (long long)presentationPriority;
- (long long)presentationType;
- (long long)presentationStyle;
- (id)appearanceIdentifier;
- (void)configureDisplayLayoutElement:(id)arg1;
- (id)displayLayoutElementIdentifier;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)invalidate;
- (void)setSupplementalActivationSettings:(id)arg1;
@property(nonatomic) _Bool placeholderContentEnabled;
@property(retain, nonatomic) NSSet *actionsToDeliver;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property(readonly, nonatomic) SBApplicationSceneView *appView;
@property(nonatomic) long long mode;
@property(readonly, nonatomic) SBApplicationSceneHandle *applicationSceneHandle;
- (void)dealloc;
- (id)initWithApplicationSceneEntity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
