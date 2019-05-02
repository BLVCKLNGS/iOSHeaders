/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, PCPersistentTimer, SBPasscodeLockAssertionManager, SBPasscodeLockDisableAssertion, SecureBackup;

__attribute__((visibility("hidden")))
@interface SBDeviceLockController : XXUnknownSuperclass {
	int _lockState;
	double _lastLockDate;
	BOOL _isPermanentlyBlocked;
	BOOL _isBlockedForThermalCondition;
	double _deviceLockUnblockTime;
	PCPersistentTimer* _deviceLockUnblockTimer;
	SBPasscodeLockAssertionManager* _assertionManager;
	SBPasscodeLockDisableAssertion* _transientPasscodeCheckingAssertion;
	BOOL _okToSendNotifications;
	SecureBackup* _secureBackupHelper;
	NSString* _lastIncorrectPasscodeAttempt;
}
+(id)_sharedControllerIfExists;
+(id)sharedController;
+(id)_sharedControllerCreateIfNecessary:(BOOL)necessary;
-(id)description;
-(void)_uncachePasscodeIfNecessary;
-(void)_cachePassword:(id)password;
-(BOOL)shouldAllowUnlockToApplication:(id)application;
-(void)_removeDeviceLockDisableAssertion:(id)assertion;
-(void)_addDeviceLockDisableAssertion:(id)assertion;
-(BOOL)attemptDeviceUnlockWithPassword:(id)password appRequested:(BOOL)requested;
-(void)_notifyOfFirstUnlock;
-(void)_setLockState:(int)state;
-(void)_enablePasscodeLockImmediately:(BOOL)immediately;
-(void)enablePasscodeLockImmediately;
-(void)_updateDeviceLockedState;
-(BOOL)_shouldLockDeviceNow;
-(BOOL)isPasscodeLockedOrBlocked;
-(BOOL)isPasscodeLocked;
-(BOOL)isPasscodeLockedCached;
-(BOOL)deviceHasPasscodeSet;
-(void)_setDeviceLockUnblockTime:(double)time;
-(void)_unblockTimerFired;
-(void)_scheduleUnblockTimer;
-(void)_clearUnblockTimer;
-(void)_clearBlockedState;
-(BOOL)isPermanentlyBlocked:(double*)blocked;
-(BOOL)isBlocked;
-(BOOL)_temporarilyBlocked;
-(void)setBlockedForThermalCondition:(BOOL)thermalCondition;
-(void)_sendBlockStateChangeNotification;
-(BOOL)isBlockedForThermalCondition;
-(id)lastLockDate;
-(void)dealloc;
-(id)init;
@end

