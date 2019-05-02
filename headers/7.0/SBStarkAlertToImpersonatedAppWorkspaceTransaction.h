/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBStarkAlertToAppWorkspaceTransaction.h"

@class SBUIAnimationController, SBAlert, SBApplication;

__attribute__((visibility("hidden")))
@interface SBStarkAlertToImpersonatedAppWorkspaceTransaction : SBStarkAlertToAppWorkspaceTransaction {
	SBAlert* _fromAlert;
	SBAlert* _toAlert;
	SBApplication* _toApplication;
	SBUIAnimationController* _animation;
}
-(void)_activateAlert;
-(BOOL)selfStarkAlertDidActivate:(id)selfStarkAlert overAlerts:(id)alerts;
-(BOOL)selfStarkAlertWillActivate:(id)selfStarkAlert overAlerts:(id)alerts;
-(BOOL)selfStarkAlertDidDeactivate:(id)selfStarkAlert;
-(int)_setupMilestonesFrom:(id)from to:(id)to;
-(id)_newAnimationControllerFrom:(id)from to:(id)to;
-(void)_beginAnimation;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithWorkspace:(id)workspace mainScreenAlertManager:(id)manager starkScreenController:(id)controller alert:(id)alert toApplication:(id)application;
@end

