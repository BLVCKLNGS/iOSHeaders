//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDisplay, MCProfileConnection, SBDemoDefaults, SBFDeviceLockOutController, SBFUserAuthenticationController, SBLockScreenDefaults, SBRestartManager, SBSetupManager, SBUserSessionController;

@interface SBPolicyAggregator : NSObject
{
    FBSDisplay *_display;
    SBUserSessionController *_lazy_userSessionController;
    MCProfileConnection *_lazy_profileConnection;
    SBSetupManager *_lazy_setupManager;
    SBFUserAuthenticationController *_lazy_authenticationController;
    SBFDeviceLockOutController *_lazy_deviceLockOutController;
    SBLockScreenDefaults *_lazy_lockScreenDefaults;
    struct __CFBoolean *_hasCameraCapability;
    SBRestartManager *_restartManager;
    SBDemoDefaults *_demoDefaults;
    _Bool _storeDemoAppLockEnabled;
}

@property(retain, nonatomic, getter=_lockScreenDefaults, setter=_setLockScreenDefaults:) SBLockScreenDefaults *lockScreenDefaults; // @synthesize lockScreenDefaults=_lazy_lockScreenDefaults;
@property(retain, nonatomic, getter=_deviceLockOutController, setter=_setDeviceLockOutController:) SBFDeviceLockOutController *deviceLockOutController; // @synthesize deviceLockOutController=_lazy_deviceLockOutController;
@property(retain, nonatomic, getter=_authenticationController, setter=_setAuthenticationController:) SBFUserAuthenticationController *authenticationController; // @synthesize authenticationController=_lazy_authenticationController;
@property(retain, nonatomic, getter=_setupManager, setter=_setSetupManager:) SBSetupManager *setupManager; // @synthesize setupManager=_lazy_setupManager;
@property(retain, nonatomic, getter=_profileConnection, setter=_setProfileConnection:) MCProfileConnection *profileConnection; // @synthesize profileConnection=_lazy_profileConnection;
@property(retain, nonatomic, getter=_userSessionController, setter=_setUserSessionController:) SBUserSessionController *userSessionController; // @synthesize userSessionController=_lazy_userSessionController;
- (void).cxx_destruct;
- (_Bool)_allowsCapabilityLiftToWakeWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityTodayViewWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLockScreenTodayViewWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLockScreenNotificationCenterWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLockScreenControlCenterWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityCommandTabWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityScreenshotWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityHomeScreenEditingWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLoginWindowWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLogoutWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityControlCenterWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityNotificationCenterWithExplanation:(id *)arg1;
- (_Bool)_allowsNotificationOrControlCenterWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLockScreenCameraWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLockScreenCameraSupportedWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilitySpotlightWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityVoiceControlWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilitySystemGestureWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilitySendMediaCommandWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityAssistantWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityAssistantEnabledWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityUnlockToPluginSpecifiedApplicationWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilityLockScreenBulletinWithExplanation:(id *)arg1;
- (_Bool)_allowsCapabilitySuggestedApplicationWithExplanation:(id *)arg1;
- (_Bool)_hasFullySetUpUserWithExplanation:(id *)arg1;
- (void)reloadDemoDefaults;
- (_Bool)allowsTransitionRequest:(id)arg1;
- (_Bool)allowsCapability:(long long)arg1 explanation:(id *)arg2;
- (_Bool)allowsCapability:(long long)arg1;
- (id)initWithDisplay:(id)arg1;
- (id)_initWithDisplay:(id)arg1 demoDefaults:(id)arg2 restartManager:(id)arg3;

@end
