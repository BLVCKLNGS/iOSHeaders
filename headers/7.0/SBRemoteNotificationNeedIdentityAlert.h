/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBApplication;

__attribute__((visibility("hidden")))
@interface SBRemoteNotificationNeedIdentityAlert : XXUnknownSuperclass {
	SBApplication* _app;
}
-(BOOL)dismissOnModalDisplayActivation;
-(BOOL)dismissOnLock;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)dealloc;
-(id)initWithApplication:(id)application;
@end

