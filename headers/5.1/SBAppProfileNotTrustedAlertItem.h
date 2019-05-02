/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBApplicationIcon;

@interface SBAppProfileNotTrustedAlertItem : XXUnknownSuperclass <UIAlertViewDelegate> {
	SBApplicationIcon* _icon;
	BOOL _launchApp;
}
-(id)initWithIcon:(id)icon;
-(void)dealloc;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)didDeactivateForReason:(int)reason;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(BOOL)shouldShowInLockScreen;
-(BOOL)dismissOnLock;
@end

