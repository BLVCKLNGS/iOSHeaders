//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBLayoutState.h"

#import "SBMainDisplayLayoutContext-Protocol.h"

@class NSString, SBBreadcrumbState, SBMainDisplaySceneManager, SBMainWorkspace, SBSideAppState;
@protocol SBFLockOutStatusProvider;

@interface SBMainDisplayLayoutState : SBLayoutState <SBMainDisplayLayoutContext>
{
    SBMainDisplaySceneManager *_sceneManager;
    SBMainWorkspace *_workspace;
    SBSideAppState *_sideAppState;
    SBSideAppState *_externallyManagedSideAppState;
    CDUnknownBlockType _appEntityGenerator;
    id <SBFLockOutStatusProvider> _lockOutController;
    SBBreadcrumbState *_breadcrumbState;
}

+ (long long)_defaultOrientation;
@property(readonly, nonatomic) SBSideAppState *externallyManagedSideAppState; // @synthesize externallyManagedSideAppState=_externallyManagedSideAppState;
@property(readonly, nonatomic) SBSideAppState *sideAppState; // @synthesize sideAppState=_sideAppState;
@property(readonly, nonatomic) SBBreadcrumbState *breadcrumbState; // @synthesize breadcrumbState=_breadcrumbState;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)includesStatusBarForLayoutRole:(long long)arg1;
- (long long)wallpaperModeForLayoutRole:(long long)arg1;
- (long long)wallpaperMode;
@property(readonly, nonatomic) long long externallyManagedSideAppWidth;
@property(readonly, nonatomic) long long externallyManagedSideAppPresentationStyle;
@property(readonly, nonatomic) long long sideAppWidth;
@property(readonly, nonatomic) long long sideAppPresentationStyle;
- (id)_layoutStateForTransitionContext:(id)arg1;
- (_Bool)isEqualToLayoutState:(id)arg1;
- (id)_stateWithElements:(id)arg1 andBreadcrumbState:(id)arg2 andSideAppState:(id)arg3 andExternallyManagedSideAppState:(id)arg4 interfaceOrientation:(long long)arg5;
- (id)_initWithElements:(id)arg1 andBreadcrumbState:(id)arg2 andSideAppState:(id)arg3 andExternallyManagedSideAppState:(id)arg4 interfaceOrientation:(long long)arg5 sceneManager:(id)arg6 appEntityGenerator:(CDUnknownBlockType)arg7 workspace:(id)arg8 lockOutController:(id)arg9;
- (id)_initWithElements:(id)arg1 andBreadcrumbState:(id)arg2 andSideAppState:(id)arg3 andExternallyManagedSideAppState:(id)arg4 interfaceOrientation:(long long)arg5;
- (id)_initWithElements:(id)arg1;
- (id)transitionContextForResizingSideAppToWidth:(long long)arg1;
- (id)transitionContextForSettingSideAppPinned:(_Bool)arg1;
- (id)transitionContextForSuspendingPrimaryApp;
- (id)transitionContextForSuspendingSideApp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long interfaceOrientation;
@property(readonly) Class superclass;

@end

