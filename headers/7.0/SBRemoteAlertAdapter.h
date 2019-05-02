/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertAdapter.h"
#import "_SBRemoteAlertHostViewControllerDelegate.h"

@class NSString, _SBRemoteAlertHostViewController;

__attribute__((visibility("hidden")))
@interface SBRemoteAlertAdapter : SBAlertAdapter <_SBRemoteAlertHostViewControllerDelegate> {
	_SBRemoteAlertHostViewController* _remoteAlertHostViewController;
	NSString* _impersonatedApplicationBundleID;
	BOOL _activated;
	BOOL _dismissWithHomeButton;
}
+(void)requestRemoteViewService:(id)service options:(id)options completion:(id)completion;
-(BOOL)isRemote;
-(BOOL)matchesRemoteAlertService:(id)service options:(id)options;
-(void)remoteAlertDidTerminateWithError:(id)remoteAlert;
-(void)_setImpersonatedApplicationBundleID:(id)anId;
-(void)_setDismissWithHomeButton:(BOOL)homeButton;
-(BOOL)handleMenuButtonTap;
-(void)deactivate;
-(void)activate;
-(id)_impersonatesApplicationWithBundleID;
-(void)dealloc;
-(id)initWithViewController:(id)viewController;
-(id)_initWithRemoteAlertHostViewController:(id)remoteAlertHostViewController;
@end

