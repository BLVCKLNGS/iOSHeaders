/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBApplicationPlaceholderLifecycleObserver.h"
#import "SBIconObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBApplicationController, NSString, NSMutableDictionary, NSMutableSet, SBApplicationLibraryObserver;

__attribute__((visibility("hidden")))
@interface SBApplicationPlaceholderController : XXUnknownSuperclass <SBIconObserver, SBApplicationPlaceholderLifecycleObserver> {
	SBApplicationController* _appController;
	SBApplicationLibraryObserver* _lsWorkspaceObserver;
	NSMutableDictionary* _placeholdersByBundleID;
	NSMutableSet* _pendingAdded;
	NSMutableSet* _pendingInstalled;
	NSMutableSet* _pendingCancelled;
	NSMutableSet* _removingPlaceholderProxies;
	BOOL _hasDownloadedFromStore;
	BOOL _usingNetwork;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)sharedInstance;
-(void)iconAccessoriesDidUpdate:(id)iconAccessories;
-(void)_postPlaceholdersDidChangeForAdded:(id)_postPlaceholders modified:(id)modified removed:(id)removed;
-(void)_downloadsEnded;
-(void)_finishPlaceholder:(id)placeholder;
-(void)_dropGrabbedIconIfNecessary:(id)necessary completion:(id)completion;
-(void)_removeDownloadingIcons:(id)icons saveState:(BOOL)state;
-(void)_swapDownloadingIcon:(id)icon forApplicationIcon:(id)applicationIcon placeholderProxy:(id)proxy;
-(void)_removePlaceholders:(id)placeholders forInstall:(BOOL)install;
-(void)_addPlaceholders:(id)placeholders;
-(void)_processPendingProxies;
-(void)applicationPlaceholdersNetworkUsageChanged:(BOOL)changed;
-(void)applicationPlaceholdersCancelled:(id)cancelled;
-(void)applicationPlaceholdersInstalled:(id)installed;
-(void)applicationPlaceholdersAdded:(id)added;
-(BOOL)isUsingNetwork;
-(BOOL)hasDownloadedStoreApplication;
-(id)placeholderForDisplayID:(id)displayID;
-(id)placeholdersByDisplayID;
-(void)dealloc;
-(id)init;
@end

