//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface SBPushStore : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    NSObject<OS_dispatch_queue> *_settingsQueue;
    NSMutableDictionary *_observersByBundleID;
}

+ (id)uniqueIdentifierForNotification:(id)arg1;
+ (void)migratePushStore;
+ (id)sharedInstance;
+ (void)initialize;
- (void)setDesiredSystemNotificationTypes:(unsigned long long)arg1 forBundleID:(id)arg2;
- (unsigned long long)desiredSystemNotificationTypesForBundleID:(id)arg1;
- (_Bool)userDeniedNotificationsForBundleID:(id)arg1;
- (void)setUserDeniedNotifications:(_Bool)arg1 forBundeID:(id)arg2;
- (void)setUserNotificationSettings:(id)arg1 forBundeID:(id)arg2;
- (_Bool)_setUserNotificationSettings:(id)arg1 forBundeID:(id)arg2;
- (id)effectiveUserNotificationSettingsForBundleID:(id)arg1;
- (id)_effectiveUserNotificationSettingsForBundleID:(id)arg1;
- (void)setEffectiveNotificationTypes:(unsigned long long)arg1 forBundleID:(id)arg2;
- (unsigned long long)effectiveNotificationTypesForBundleID:(id)arg1;
- (unsigned long long)_effectiveNotificationTypesForBundleID:(id)arg1;
- (void)setSupportedNotificationTypes:(unsigned long long)arg1 forBundleID:(id)arg2;
- (unsigned long long)supportedNotificationTypesForBundleID:(id)arg1;
- (unsigned long long)_supportedNotificationTypesForBundleID:(id)arg1;
- (void)notePushSettingsChangedForBundleID:(id)arg1;
- (void)notePushDeclinedForBundleID:(id)arg1;
- (void)notePushAcceptedForBundleID:(id)arg1;
- (id)lastUpdateDateForBundleID:(id)arg1;
- (id)bundleIDsWithUpdatesSince:(id)arg1;
- (id)savedNotificationsForBundleID:(id)arg1;
- (id)savedNotificationDataForBundleID:(id)arg1;
- (void)makeTestNotificationStores;
- (id)removeNotificationsPassingTest:(CDUnknownBlockType)arg1 forBundleID:(id)arg2;
- (void)removeAllNotificationsForBundleID:(id)arg1;
- (void)removeAllLocalNotificationsForBundleID:(id)arg1;
- (void)removeLocalNotification:(id)arg1 forBundleID:(id)arg2;
- (void)saveLocalNotification:(id)arg1 forBundleID:(id)arg2;
- (void)saveRemoteNotificationWithTitle:(id)arg1 message:(id)arg2 soundName:(id)arg3 actionText:(id)arg4 badge:(id)arg5 userInfo:(id)arg6 launchImage:(id)arg7 category:(id)arg8 forBundleID:(id)arg9;
- (void)_saveNotificationWithTitle:(id)arg1 message:(id)arg2 soundName:(id)arg3 actionText:(id)arg4 badge:(id)arg5 userInfo:(id)arg6 launchImage:(id)arg7 fullDetails:(id)arg8 soundIsRingtone:(_Bool)arg9 isRemoteNotification:(_Bool)arg10 category:(id)arg11 forBundleID:(id)arg12;
- (id)pathForSoundName:(id)arg1 inApp:(id)arg2;
- (void)clearNotificationsForBundleID:(id)arg1;
- (void)unregisterAppForNotificationsWithBundleID:(id)arg1;
- (_Bool)_removeNotificationsForBundleID:(id)arg1;
- (void)registerAppForNotificationsWithBundleID:(id)arg1;
- (_Bool)_saveNotificationList:(id)arg1 toPath:(id)arg2;
- (id)_allNotificationsFromPath:(id)arg1;
- (id)_allNotificationDataFromPath:(id)arg1;
- (_Bool)_notificationDataExistsAtPath:(id)arg1;
- (id)_notificationStoreFilenameForBundleID:(id)arg1;
- (void)_notifyObserversNotificationsDidChangeForBundleID:(id)arg1;
- (void)_enumerateObserversForBundleID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeObserver:(id)arg1 forBundleID:(id)arg2;
- (void)addObserver:(id)arg1 forBundleID:(id)arg2;
- (id)_observersForBundleID:(id)arg1;
- (void)dealloc;
- (id)init;

@end

