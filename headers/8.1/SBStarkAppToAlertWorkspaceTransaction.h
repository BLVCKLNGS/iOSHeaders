/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationControllerObserver.h"
#import "SBStarkWorkspaceTransaction.h"

@class NSString, SBUIAnimationController, SBAlert, SBApplication;

__attribute__((visibility("hidden")))
@interface SBStarkAppToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction <SBUIAnimationControllerObserver> {
	SBAlert* _activatingAlert;
	SBApplication* _topApplication;
	SBUIAnimationController* _animation;
	BOOL _animatedAppDeactivation;
	BOOL _fromStarkLauncher;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) SBAlert* alert;
-(void)animationControllerDidFinishAnimation:(id)animationController;
-(void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
-(void)_didComplete;
-(void)_begin;
-(void)dealloc;
-(id)initWithMainScreenAlertManager:(id)mainScreenAlertManager starkScreenController:(id)controller alert:(id)alert overTopApplication:(id)application;
@end

