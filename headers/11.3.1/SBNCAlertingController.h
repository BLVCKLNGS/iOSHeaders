//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NCAlertingController.h"

@class NCNotificationRequest, NSMutableSet, NSString, SBLockScreenManager, SBNCScreenController, SBNCSoundController;

@interface SBNCAlertingController : NSObject <NCAlertingController>
{
    SBNCSoundController *_soundController;
    SBNCScreenController *_screenController;
    SBLockScreenManager *_lockScreenManager;
    NCNotificationRequest *_activeRequestWithRealerts;
    NSMutableSet *_realertTimers;
}

- (void).cxx_destruct;
- (_Bool)_activeAlertDestinationsInRequestDestinations:(id)arg1;
- (void)_alertNowForNotificationRequest:(id)arg1;
- (void)_hardwareButtonPressed:(id)arg1;
- (void)_killRealertsForNotificationRequest:(id)arg1;
- (void)_lockStateChanged;
- (void)_notificationCenterDidPresent;
- (void)_realertTimerFired:(id)arg1;
- (void)_scheduleRealertsForNotificationRequest:(id)arg1;
- (_Bool)_shouldRealert;
@property(retain, nonatomic) NCNotificationRequest *activeRequestWithRealerts; // @synthesize activeRequestWithRealerts=_activeRequestWithRealerts;
- (void)alertOnPostForNotificationRequest:(id)arg1 forRequestDestinations:(id)arg2;
- (void)alertOnPresentationForNotificationRequest:(id)arg1;
- (id)init;
- (id)initWithSoundController:(id)arg1 screenController:(id)arg2 lockScreenManager:(id)arg3;
- (void)killAlertsForNotificationRequest:(id)arg1;
- (void)killRealerts;
@property(retain, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
@property(retain, nonatomic) NSMutableSet *realertTimers; // @synthesize realertTimers=_realertTimers;
- (void)resetAutomaticLockStateForNotificationRequest:(id)arg1;
@property(retain, nonatomic) SBNCScreenController *screenController; // @synthesize screenController=_screenController;
@property(retain, nonatomic) SBNCSoundController *soundController; // @synthesize soundController=_soundController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
