/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:30 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>
#import <SpringBoard/SBUIAnimationStepping.h>

@protocol SBUIAnimationControllerTransitionContextProvider;
@class UIWindow, UIView, NSMutableArray, NSSet, SBAnimationStepper, SBWorkspaceApplication, NSString;

@interface SBUIAnimationController : BSTransaction <SBUIAnimationControllerObserver, SBUIAnimationStepping> {

	UIWindow* _transitionWindow;
	UIView* _transitionContainer;
	/*^block*/id _commitBlock;
	int _animationState;
	BOOL _didPostBeginAnimationNotification;
	BOOL _didNotifyObserversOfCompletion;
	BOOL _needsCATransactionActivate;
	id<SBUIAnimationControllerTransitionContextProvider> _transitionContextProvider;
	NSMutableArray* _startDependencies;
	BOOL _settingUpInitialStartDependencies;
	NSSet* _progressDependencies;
	NSSet* _waitForActivationDependencies;
	SBAnimationStepper* _stepper;

}

@property (nonatomic,readonly) UIView * containerView;                                                                    //@synthesize transitionContainer=_transitionContainer - In the implementation block
@property (nonatomic,retain) id<SBUIAnimationControllerTransitionContextProvider> transitionContextProvider;              //@synthesize transitionContextProvider=_transitionContextProvider - In the implementation block
@property (nonatomic,copy,readonly) NSSet * activatingApps; 
@property (nonatomic,copy,readonly) NSSet * deactivatingApps; 
@property (nonatomic,readonly) SBWorkspaceApplication * activatingApp; 
@property (nonatomic,readonly) SBWorkspaceApplication * deactivatingApp; 
@property (nonatomic,copy) id commitBlock;                                                                                //@synthesize commitBlock=_commitBlock - In the implementation block
@property (assign,nonatomic) BOOL needsCATransactionActivate;                                                             //@synthesize needsCATransactionActivate=_needsCATransactionActivate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isStepped,nonatomic,readonly) BOOL stepped; 
@property (assign,nonatomic) double stepPercentage; 
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(id)_getTransitionWindow;
-(NSSet *)activatingApps;
-(void)_noteAnimationDidCommit:(BOOL)arg1 withSettings:(id)arg2 ;
-(void)_cleanupAnimation;
-(void)_noteAnimationDidFinish;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(id)_animationProgressDependencies;
-(void)_prepareAnimation;
-(double)stepPercentage;
-(void)setStepPercentage:(double)arg1 ;
-(void)finishSteppingForwardToEnd;
-(void)finishSteppingBackwardToStart;
-(BOOL)isStepped;
-(void)_setInteractiveApplicationTransitionAnimationPercentage:(double)arg1 ;
-(void)_animateInteractiveApplicationTransitionFromPercentage:(double)arg1 toPercentage:(double)arg2 withSettings:(id)arg3 ;
-(void)enableSteppingWithAnimationSettings:(id)arg1 ;
-(void)_noteAnimationDidFail;
-(id<SBUIAnimationControllerTransitionContextProvider>)transitionContextProvider;
-(SBWorkspaceApplication *)activatingApp;
-(int)_animationState;
-(void)_addStartTransactionDependency:(id)arg1 ;
-(void)_cancelAnimation;
-(void)_setupStartDependencies;
-(void)_applicationDependencyStateChanged;
-(NSSet *)deactivatingApps;
-(SBWorkspaceApplication *)deactivatingApp;
-(void)_noteAnimationDidRevealApplication;
-(BOOL)_shouldDismissBanner;
-(void)_willSetupStartDependencies;
-(BOOL)isReasonableMomentToInterrupt;
-(void)_setAnimationState:(int)arg1 ;
-(BOOL)__animationShouldStart;
-(void)__startAnimation;
-(BOOL)_willAnimate;
-(id)_viewsForAnimationStepping;
-(id)__waitForAppActivationTransactionForApplication:(id)arg1 ;
-(BOOL)__wantsInitialProgressStateChange;
-(void)_willBeginWaitingForStartDependencies;
-(void)_startMonitoringStartDependency:(id)arg1 ;
-(void)__evaluateStartDependencies;
-(void)_applicationActivationStateDidChange;
-(void)__cancelAnimation;
-(void)_notifyObserversOfAnimationCompletion;
-(void)__cleanupAnimation;
-(BOOL)_hasAnimationStartDependency;
-(void)_recursivelyEnumerateStartAnimationDependenciesWithBlock:(/*^block*/id)arg1 ;
-(id)_startTransactionDependencies;
-(BOOL)_isNullAnimation;
-(void)__noteAnimationDidTerminateWithSuccess:(BOOL)arg1 ;
-(void)_stopMonitoringStartDependency:(id)arg1 ;
-(void)_startTransactionDependency:(id)arg1 didComplete:(BOOL)arg2 ;
-(BOOL)waitingToStart;
-(void)_removeStartTransactionDependency:(id)arg1 ;
-(void)_prependStartTransactionDependency:(id)arg1 ;
-(void)setTransitionContextProvider:(id<SBUIAnimationControllerTransitionContextProvider>)arg1 ;
-(id)commitBlock;
-(void)setCommitBlock:(id)arg1 ;
-(BOOL)needsCATransactionActivate;
-(void)setNeedsCATransactionActivate:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(UIView *)containerView;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)animating;
-(void)_setHidden:(BOOL)arg1 ;
-(id)_animationIdentifier;
-(void)_didComplete;
-(void)transactionDidComplete:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(void)_addDebugLogger:(id)arg1 ;
-(void)_begin;
-(void)_didInterruptWithReason:(id)arg1 ;
-(void)_willComplete;
-(void)_startAnimation;
-(BOOL)isFinishedAnimating;
@end

