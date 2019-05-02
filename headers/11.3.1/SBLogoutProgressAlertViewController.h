//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

#import "SBDashBoardExternalBehaviorProviding.h"

@class NSString, SBLogoutDebugBlockingViewController, SBLogoutProgressAlertView, SBMultiUserDefaults, SBPlatformController, UMUser;

@interface SBLogoutProgressAlertViewController : SBAlert <SBDashBoardExternalBehaviorProviding>
{
    SBPlatformController *_platformController;
    SBMultiUserDefaults *_multiUserDefaults;
    id <SBLogoutProgressDataSource> _dataSource;
    UMUser *_user;
    SBLogoutProgressAlertView *_progressView;
    SBLogoutDebugBlockingViewController *_debugTasksViewController;
}

- (void).cxx_destruct;
- (id)_legibilitySettings;
- (_Bool)_supportsDebugUI;
- (void)_updateData;
- (void)_updateDebugTasksViewControllerSizeFromSize:(struct CGSize)arg1;
- (void)_updateLegibility;
- (void)activate;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (long long)customBackgroundStyle;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(nonatomic) __weak id <SBLogoutProgressDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)deactivate;
- (_Bool)hasTranslucentBackground;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleWarnMode;
- (id)initWithUserAccount:(id)arg1;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long participantState;
- (void)prepareForRestart;
@property(readonly, nonatomic) long long proximityDetectionMode;
- (void)refreshData;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long scrollingStrategy;
- (long long)statusBarStyle;
@property(readonly, nonatomic) UMUser *user; // @synthesize user=_user;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)wantsCustomBackgroundStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

