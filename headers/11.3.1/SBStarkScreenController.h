//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVExternalDeviceDelegate.h"
#import "FBSceneLayerManagerObserver.h"
#import "SBAlertManagerDelegate.h"
#import "SBAlertManagerObserver.h"
#import "SBAlertObserver.h"
#import "SBCarDisplaySceneManagerDelegate.h"
#import "SBStarkIconControllerDelegate.h"
#import "SBStarkStatusBarViewControllerDelegate.h"
#import "SBStarkWindowDelegate.h"
#import "UIStatusBarStyleDelegate.h"
#import "_UISettingsKeyObserver.h"

@class AVExternalDevice, FBDisplayLayoutElement, FBSDisplayIdentity, FBScene, NSHashTable, NSMapTable, NSMutableOrderedSet, NSMutableSet, NSString, SBAlertManager, SBAssistantWindow, SBCarDisplaySceneManager, SBCarDisplaySettings, SBSceneManager, SBStarkAnimationWindow, SBStarkFakeIconOperationController, SBStarkFocusMovementManager, SBStarkIconController, SBStarkIconWindow, SBStarkLockOutViewController, SBStarkLockOutWindow, SBStarkNotificationViewController, SBStarkNotificationWindow, SBStarkNowPlayingController, SBStarkNowPlayingWindow, SBStarkScreenFocusController, SBStarkSessionConfiguration, SBStarkStatusBarViewController, SBStarkStatusBarWindow, SBStarkSystemGestureManager, SBWindow, UIScreen, UIWindow;

@interface SBStarkScreenController : NSObject <SBAlertManagerDelegate, SBAlertManagerObserver, SBAlertObserver, UIStatusBarStyleDelegate, _UISettingsKeyObserver, AVExternalDeviceDelegate, FBSceneLayerManagerObserver, SBStarkIconControllerDelegate, SBStarkWindowDelegate, SBStarkStatusBarViewControllerDelegate, SBCarDisplaySceneManagerDelegate>
{
    SBStarkSessionConfiguration *_configuration;
    long long _pairingOverride;
    UIScreen *_screen;
    SBCarDisplaySceneManager *_sceneManager;
    SBCarDisplaySettings *_settings;
    id <SBDisplay> _actualTopDisplay;
    id <SBDisplay> _effectiveTopDisplay;
    NSMutableOrderedSet *_alertSheets;
    NSMapTable *_alertSheetsToWindowMap;
    NSHashTable *_observers;
    long long _screenState;
    long long _lockOutMode;
    _Bool _delayUpdatingLockOutMode;
    SBStarkLockOutViewController *_lockOutViewController;
    SBStarkLockOutWindow *_lockOutWindow;
    FBDisplayLayoutElement *_lockOutLayoutElement;
    SBStarkAnimationWindow *_animationWindow;
    FBScene *_nowPlayingScene;
    SBStarkNowPlayingController *_nowPlayingController;
    SBStarkNowPlayingWindow *_nowPlayingWindow;
    _Bool _showingNowPlaying;
    SBStarkIconController *_iconController;
    SBStarkIconWindow *_iconWindow;
    SBStarkStatusBarViewController *_statusBarViewController;
    SBStarkStatusBarWindow *_statusBarWindow;
    SBStarkNotificationWindow *_notificationWindow;
    SBAssistantWindow *_siriWindow;
    long long _siriState;
    SBAlertManager *_alertManager;
    SBStarkSystemGestureManager *_systemGestureManager;
    id _alertBorrowScreenToken;
    id _siriBorrowScreenToken;
    SBStarkScreenFocusController *_focusController;
    SBStarkFakeIconOperationController *_fakeIconOperationController;
    AVExternalDevice *_externalDevice;
    _Bool _externalDeviceScreenAvailable;
    FBDisplayLayoutElement *_oemScreenLayoutElement;
    NSMutableSet *_acBackDisabledReasons;
    FBScene *_previouslyFocusedScene;
    SBStarkFocusMovementManager *_focusMovementManager;
    id <SBStarkScreenControllerDelegate> _delegate;
}

+ (void)_launchNowPlaying;
- (void).cxx_destruct;
- (void)_alertSheetDismissed:(id)arg1;
- (void)_alertSheetPresented:(id)arg1;
- (void)_createFakeIconOperationController;
- (struct CGRect)_defaultScreenFrameOffsetForStatusBar:(id)arg1;
- (void)_didChangeFromState:(long long)arg1;
- (void)_dismissSiriWithFactory:(id)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_externalDeviceScreenBecameAvailable:(id)arg1;
- (void)_externalDeviceScreenBecameUnavailable:(id)arg1;
- (void)_handleMenuEventAndTakeScreen:(_Bool)arg1;
- (void)_handleSuspendTopMost;
- (void)_hideWindowsForSetup:(_Bool)arg1;
- (_Bool)_isACBackEnabled;
- (_Bool)_isStatusBarScene:(id)arg1;
- (id)_newNowPlayingScene;
- (void)_noteConnectSetupCompletedWithTopEntity:(id)arg1;
- (void)_noteInitializationCompleted;
- (_Bool)_scrollToFirstIconPageIfPossible;
- (void)_setACBackDisabled:(_Bool)arg1 forRequester:(id)arg2;
- (void)_setSiriState:(long long)arg1;
- (void)_takeScreenIfNecessaryForTopDisplayActivation;
- (void)_tearDownAndInvalidate:(_Bool)arg1;
- (void)_toggleNotificationSuspendedState;
- (void)_toggleNowPlayingVisible:(_Bool)arg1;
- (void)_updateAlertSheetFocus;
- (void)_updateDock;
- (void)_updateDockIconVisibilityDelegate;
- (void)_updateLockOutMode;
- (void)_updateVehicleInfo;
- (void)_viewController:(id)arg1 animateAppearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 animateDisappearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 willAnimateAppearanceWithContext:(id)arg2;
- (void)_viewController:(id)arg1 willAnimateDisappearanceWithContext:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)alertBannerSuppressionChanged:(id)arg1;
@property(readonly, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
- (void)alertManager:(id)arg1 didCreateAlertWindow:(id)arg2;
- (void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(_Bool)arg3;
- (id)alertManager:(id)arg1 newAlertWindowForScene:(id)arg2;
- (_Bool)alertManager:(id)arg1 shouldDeactivateDismissedAlert:(id)arg2;
- (void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3;
@property(readonly, nonatomic) SBWindow *animationWindow; // @synthesize animationWindow=_animationWindow;
- (id)animationWindowForIconController:(id)arg1;
- (void)cleanupForTopDisplayIfNecessaryWithAnimationFactory:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SBStarkScreenControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissSiriWithAnimation:(long long)arg1 factory:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property(readonly, nonatomic) UIWindow *focusWindow;
- (void)handleACHomeUp;
- (_Bool)handleAction:(id)arg1 fromScene:(id)arg2 forCarDisplaySceneManager:(id)arg3;
- (void)handleBackPress;
- (void)handleEndCallButtonPress;
- (void)handleFocusMovementAction:(id)arg1 fromScene:(id)arg2;
- (void)handleLongBackPress;
- (void)handleStatusBarBackPress;
- (void)handleUncompletedAppLaunchWithStarkTrigger:(_Bool)arg1;
- (void)handleUnhandledBack;
- (void)iOSUIRequestedForApplicationURL:(id)arg1;
@property(readonly, nonatomic) SBStarkIconController *iconController; // @synthesize iconController=_iconController;
- (_Bool)iconControllerShouldPersistIconsForFakeApps:(id)arg1;
- (void)iconModelDidLayout;
- (void)iconModelDidLoad;
@property(readonly, nonatomic) SBWindow *iconWindow; // @synthesize iconWindow=_iconWindow;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)invalidate;
@property(readonly, nonatomic, getter=isShowingNowPlaying) _Bool showNowPlaying; // @synthesize showNowPlaying=_showingNowPlaying;
@property(readonly, nonatomic) SBWindow *lockoutWindow; // @synthesize lockoutWindow=_lockOutWindow;
- (id)newLayoutControllerForCarDisplaySceneManager:(id)arg1;
@property(readonly, nonatomic) SBStarkNotificationViewController *notificationController;
- (void)notifyWhenNowPlayingIsActive:(CDUnknownBlockType)arg1 withTimeout:(double)arg2;
- (id)nowPlayingSceneHostManager;
- (id)nowPlayingSnapshot;
- (_Bool)presentSiri:(_Bool)arg1 viewController:(id)arg2 forBundleIdentifer:(id)arg3;
- (void)removeObserver:(id)arg1;
- (struct CGRect)sceneFrameForAlerts:(id)arg1;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)arg1;
- (void)sceneLayerManagerWillStartTrackingLayers:(id)arg1;
- (double)sceneLevelForAlerts;
@property(readonly, nonatomic) SBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
- (id)sceneWindowLayoutStrategyForCarDisplaySceneManager:(id)arg1;
@property(readonly, nonatomic) id <SBStarkSessionConfiguring> sessionConfiguration; // @synthesize sessionConfiguration=_configuration;
- (void)setNowPlayingForCarApplicationSceneEntity:(id)arg1;
- (void)setTopEntity:(id)arg1 forStarkTrigger:(_Bool)arg2 withAnimationFactory:(id)arg3;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)siriRequestedWithAction:(long long)arg1;
- (void)starkWindowDidTriggerUnhandledBack:(id)arg1;
@property(readonly, nonatomic) long long state;
- (void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;
- (void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3 context:(id)arg4;
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3;
- (void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;
@property(readonly, nonatomic) SBStarkStatusBarViewController *statusBarController; // @synthesize statusBarController=_statusBarViewController;
@property(readonly, nonatomic) SBStarkSystemGestureManager *systemGestureManager; // @synthesize systemGestureManager=_systemGestureManager;
- (id)topEntity;
- (void)updateStatusBarStateForDisplay:(id)arg1 withAnimationFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

