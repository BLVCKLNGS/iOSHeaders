//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCUIControlCenterObserver-Protocol.h"
#import "SBAlertManagerObserver-Protocol.h"

@class NSString, SBAlertManager;

@interface SBScreenTimeTrackingController : NSObject <CCUIControlCenterObserver, SBAlertManagerObserver>
{
    unsigned long long _thisCategoryStartTime;
    double _lastCategoryChangeTime;
    int _activeCategory;
    int _previousCategory;
    SBAlertManager *_alertManager;
    _Bool _lastCameraActivationWasForBottomCorner;
}

- (void).cxx_destruct;
- (void)_setActiveCategory:(int)arg1;
- (void)_noteSignificantTimeChanged:(id)arg1;
- (void)_noteLockScreenPasscodeDidDisappear;
- (void)_noteLockScreenPasscodeDidAppear;
- (void)_noteLockScreenCameraDidDisappear;
- (void)_noteLockScreenCameraDidAppear;
- (void)_noteNotificationCenterAllWillAppear;
- (void)_noteNotificationCenterTodayWillAppear;
- (void)_noteNotificationCenterWillDismiss;
- (void)_noteControlCenterControlDidDeactivate:(id)arg1;
- (void)_noteControlCenterControlDidActivate:(id)arg1;
- (void)_noteSearchVisibilityDidChange:(id)arg1;
- (void)_noteAppSwitcherDidAppear;
- (void)_noteSiriVisibilityChanged;
- (void)_noteAppDidBecomeFrontmost:(id)arg1;
- (void)_noteAppWillBecomeFrontmost:(id)arg1;
- (void)_noteMediaControlsDidDisappear;
- (void)_noteMediaControlsDidAppear;
- (void)_noteBacklightDidTurnOn:(id)arg1;
- (_Bool)_isLockScreenNavigationActive;
- (void)_noteLockScreenUndimmed;
- (void)_noteLocked;
- (void)_noteHomeScreen;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)alertManager:(id)arg1 didActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (void)_resetCategoryForContext:(int)arg1;
- (id)_nameForCurrentContext;
- (int)_activeContext;
- (void)dealloc;
- (id)initWithAlertManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

