/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class UIView, SBWindowSelfHostWrapper, SBDosidoAnimator, SBAppStatusBarSettingsAssertion;

@interface SBUIAnimationDosidoTransitionController : SBUIMainScreenAnimationController {

	UIView* _fromView;
	UIView* _toView;
	SBWindowSelfHostWrapper* _homeScreenHostWrapper;
	SBDosidoAnimator* _dosidoAnimator;
	long long _fromOrientation;
	BOOL _requiresHostView;
	BOOL _fromAppWantsLiveContent;
	BOOL _dosidoDidComplete;
	BOOL _crossfadeDidComplete;
	BOOL _activationFailed;
	BOOL _finishedActivating;
	unsigned long long _direction;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;

}

@property (assign,nonatomic) unsigned long long direction;              //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) BOOL fromAppWantsLiveContent;              //@synthesize fromAppWantsLiveContent=_fromAppWantsLiveContent - In the implementation block
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(id)_animationProgressDependencies;
-(void)_prepareAnimation;
-(id)_animationFactory;
-(void)enableSteppingWithAnimationSettings:(id)arg1 ;
-(void)_applicationDependencyStateChanged;
-(void)_maybeStartCrossfade;
-(void)_maybeReportAnimationFinished;
-(BOOL)isReasonableMomentToInterrupt;
-(void)captureFlagsForActivatingApp:(id)arg1 ;
-(long long)orientationAtLaunch;
-(BOOL)_isTransitionToSpotlight;
-(void)_setupDisplayModeForAppView:(id)arg1 displayMode:(long long)arg2 ;
-(void)_setupDisplayModeForActivatingAppView:(id)arg1 ;
-(void)_evaluateTransparency;
-(void)_kickOffAnimation;
-(void)_invalidateWrapperView:(id)arg1 ;
-(void)_performDosido;
-(id)_mainScreenSnapshot;
-(BOOL)_isTransitionFromSpotlight;
-(void)_setupDisplayModeForDeactivatingAppView:(id)arg1 ;
-(void)_performCrossfadeIfNeeded;
-(BOOL)fromAppWantsLiveContent;
-(void)setFromAppWantsLiveContent:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDirection:(unsigned long long)arg1 ;
-(unsigned long long)direction;
-(void)_setFromView:(id)arg1 ;
-(void)_setHidden:(BOOL)arg1 ;
-(void)setToView:(id)arg1 ;
-(void)_startAnimation;
@end

