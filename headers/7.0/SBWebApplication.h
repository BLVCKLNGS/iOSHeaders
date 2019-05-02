/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBApplication.h"

@class UIWebClip;

__attribute__((visibility("hidden")))
@interface SBWebApplication : SBApplication {
	UIWebClip* _webClip;
	BOOL _isLastWebApplication;
}
@property(retain) UIWebClip* webClip;
+(id)displayIdentifierForWebClipIdentifier:(id)webClipIdentifier;
+(id)displayIdentifierForWebClip:(id)webClip;
-(BOOL)iconAllowsUninstall:(id)uninstall;
-(id)icon:(id)icon imageWithFormat:(int)format;
-(BOOL)windowContextHostManager:(id)manager shouldEnableContextHostingForRequester:(id)requester priority:(int)priority;
-(id)windowContextHostManager:(id)manager overrideRequester:(id)requester;
-(void)_removeContextHostManager:(id)manager;
-(void)_removeContextHostManagerWithoutLooping:(id)looping;
-(void)_addContextHostManager:(id)manager;
-(void)_addContextHostManagerWithoutLooping:(id)looping;
-(void)willActivateOtherWebApplication:(id)application;
-(void)_setActivationState:(int)state;
-(void)didExitWithInfo:(id)info type:(int)type;
-(void)setRunning:(BOOL)running;
-(void)setProcessInfo:(id)info;
-(id)_defaultImageInfoForScreen:(id)screen launchingOrientation:(int)orientation;
-(BOOL)isSnapshotPresentForLaunchingInterfaceOrientation:(int)launchingInterfaceOrientation;
-(id)_customStartupImageForScreen:(id)screen launchingOrientation:(int)orientation;
-(BOOL)isWebApplication;
-(id)activationSettings;
-(id)_urlForLaunch;
-(void)dealloc;
-(id)initWithBundleIdentifier:(id)bundleIdentifier webClip:(id)clip path:(id)path bundle:(id)bundle infoDictionary:(id)dictionary isSystemApplication:(BOOL)application signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated entitlements:(id)entitlements;
@end

