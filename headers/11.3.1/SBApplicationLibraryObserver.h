//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XBApplicationController.h"

#import "MCProfileConnectionObserver.h"

@class FBApplicationLibrary, NSArray, NSHashTable, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface SBApplicationLibraryObserver : XBApplicationController <MCProfileConnectionObserver>
{
    FBApplicationLibrary *_appLibrary;
    NSMutableSet *_suspendCalloutsAssertionReasons;
    NSObject<OS_dispatch_queue> *_mainQueueProxy;
    NSMutableDictionary *_placeholdersByBundleID;
    NSHashTable *_applicationObservers;
    NSHashTable *_placeholderObservers;
}

- (void).cxx_destruct;
- (void)_addObserver:(id)arg1 table:(id)arg2;
- (id)_allApplicationsFilteredBySystem:(_Bool)arg1 bySplashBoard:(_Bool)arg2;
- (void)_removeObserver:(id)arg1 table:(id)arg2;
- (void)_waitForLaunchImageGenerationForApplications:(id)arg1;
- (void)addApplicationLifecycleObserver:(id)arg1;
- (void)addPlaceholderLifecycleObserver:(id)arg1;
@property(readonly, nonatomic) FBApplicationLibrary *appLibrary; // @synthesize appLibrary=_appLibrary;
- (id)init;
- (id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *placeholders;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)removeApplicationLifecycleObserver:(id)arg1;
- (void)removePlaceholderLifecycleObserver:(id)arg1;
- (id)suspendCalloutsAssertionWithReason:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
