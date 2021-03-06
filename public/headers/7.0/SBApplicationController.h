/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBApplicationRestrictionDataSource.h"
#import "SBLSApplicationLifecycleObserver.h"

@class SBLSApplicationWorkspaceObserver, SBApplicationRestrictionController, NSMutableDictionary, NSMutableSet, SBApplication, NSOperationQueue, BKSApplicationStateMonitor, NSDictionary, NSCountedSet, NSLock;

__attribute__((visibility("hidden")))
@interface SBApplicationController : XXUnknownSuperclass <SBApplicationRestrictionDataSource, SBLSApplicationLifecycleObserver> {
	NSMutableDictionary* _applications;
	NSMutableDictionary* _applicationsByBundleIdentifer;
	NSMutableSet* _applicationsPlayingMutedAudioSinceLastLock;
	SBApplication* _applicationCurrentlyRecordingAudio;
	int _locationStatusBarIconType;
	NSDictionary* _backgroundDisplayDict;
	NSOperationQueue* _backgroundOperationQueue;
	NSLock* _applicationsLock;
	NSMutableDictionary* _systemAppsVisibilityOverrides;
	BOOL _visibilityOverridesAreDirty;
	BKSApplicationStateMonitor* _appStateMonitor;
	BOOL _booting;
	NSMutableSet* _appsToAutoLaunchAfterBoot;
	SBApplicationRestrictionController* _restrictionController;
	SBLSApplicationWorkspaceObserver* _lsWorkspaceObserver;
	NSCountedSet* _pendingRequestedUninstallsBundleID;
}
+(id)sharedInstanceIfExists;
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
-(void)applicationsUninstalled:(id)uninstalled;
-(void)applicationsInstalled:(id)installed;
-(id)restrictionController;
-(void)_removePendingRequestedUninstalledBundleID:(id)anId;
-(BOOL)updateAppIconVisibilityOverridesShowing:(id*)showing hiding:(id*)hiding;
-(void)_setVisibilityOverridesAreDirty:(BOOL)dirty;
-(int)appVisibilityOverrideForBundleIdentifier:(id)bundleIdentifier;
-(void)_reloadBackgroundIDsDict;
-(void)loadApplicationsWithBundle:(id)bundle bundlePath:(id)path isSystemApplication:(BOOL)application defaultTags:(id)tags signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated seatbeltEnvironmentVariables:(id)variables entitlements:(id)entitlements;
-(Class)applicationClassForInfoDictionary:(id)infoDictionary;
-(void)loadWebclipAndIcon:(id)icon;
-(void)loadApplicationsAndIcons:(id)icons reveal:(BOOL)reveal popIn:(BOOL)anIn;
-(void)_loadApplicationsAndIcons:(id)icons removed:(id)removed applicationProxies:(id)proxies reveal:(BOOL)reveal popIn:(BOOL)anIn reloadAllIcons:(BOOL)icons6;
-(void)_updateIconControllerAndModelForLoadedApplications:(id)loadedApplications reveal:(BOOL)reveal popIn:(BOOL)anIn reloadAllIcons:(BOOL)icons;
-(void)waitForOperationsToComplete;
-(void)uninstallApplication:(id)application;
-(void)removeApplicationsFromModelWithBundleIdentifier:(id)bundleIdentifier;
-(BOOL)loadApplication:(id)application;
-(id)loadApplications;
-(id)_loadApplications:(id)applications removed:(id)removed applicationProxies:(id)proxies;
-(void)_calculateApplicationDiff:(id*)diff removed:(id*)removed applicationProxies:(id)proxies;
-(id)_modifiedApplications:(id)applications applicationProxies:(id)proxies;
-(BOOL)_applicationHasBeenModified:(id)modified applicationProxy:(id)proxy;
-(void)_loadApplication:(id)application proxy:(id)proxy;
-(void)_sendInstalledAppsDidChangeNotification:(id)_sendInstalledApps removed:(id)removed modified:(id)modified;
-(void)_preLoadApplications;
-(id)_getLSApplicationProxies;
-(id)newsstandApps;
-(id)webApplications;
-(id)clockApplication;
-(id)faceTimeApp;
-(id)mobilePhone;
-(id)setupApplication;
-(id)dataActivation;
-(id)applicationCurrentlyRecordingAudio;
-(id)iPod;
-(id)applicationWithPid:(int)pid;
-(id)applicationWithDisplayIdentifier:(id)displayIdentifier;
-(id)applicationsWithPid:(int)pid;
-(id)applicationsWithBundleIdentifier:(id)bundleIdentifier;
-(id)allApplications;
-(id)allDisplayIdentifiers;
-(void)autoLaunchAppsIfNecessaryAfterBoot;
-(void)_deviceFirstUnlocked;
-(int)locationStatusBarIconType;
-(void)buildLocationState;
-(void)_updateLocationState;
-(void)_memoryWarningReceived;
-(void)_lockStateChanged:(id)changed;
-(void)_unusuallyMutedAudioPlaying:(id)playing;
-(void)_recordingStateChanged:(id)changed;
-(void)_mediaServerConnectionDied:(id)died;
-(void)_registerForAVSystemControllerNotifications;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)dealloc;
-(id)init;
@end

