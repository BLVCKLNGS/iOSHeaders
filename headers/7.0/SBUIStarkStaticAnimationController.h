/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIStarkScreenAnimationController.h"

@class UIView, SBApplication;

__attribute__((visibility("hidden")))
@interface SBUIStarkStaticAnimationController : SBUIStarkScreenAnimationController {
	BOOL _relaunchExpected;
	BOOL _awaitingKeybagRefetch;
	BOOL _appWasActivating;
	UIView* _staticAppView;
}
@property(readonly, assign, nonatomic) SBApplication* app;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(BOOL)_shouldDismissBanner;
-(void)_prepareAnimation;
-(BOOL)_animationShouldStart;
-(BOOL)_willAnimate;
-(void)dealloc;
-(id)initWithApp:(id)app starkScreenController:(id)controller;
@end

