/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BSTransactionObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIWindow, SBDisplaySettings, SBApplication, BSTransaction, UIView, NSString, NSHashTable, NSMutableArray;
@protocol BSLogging;

__attribute__((visibility("hidden")))
@interface SBUIAnimationController : XXUnknownSuperclass <BSTransactionObserver> {
	UIWindow* _transitionWindow;
	UIView* _transitionContainer;
	SBApplication* _activatingApp;
	SBApplication* _deactivatingApp;
	SBDisplaySettings* _activatingAppSettings;
	SBDisplaySettings* _deactivatingAppSettings;
	id _commitBlock;
	int _animationState;
	BOOL _cancelOnNextSuspendIfNecessary;
	BOOL _didPostBeginAnimationNotification;
	BOOL _didNotifyObserversOfCompletion;
	BOOL _needsCATransactionActivate;
	NSHashTable* _observers;
	NSMutableArray* _startDependencies;
	BOOL _preparing;
	SBApplication* _progressDependency;
	BSTransaction* _waitForActivationDependency;
	id<BSLogging> _debugLogger;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL needsCATransactionActivate;
@property(retain, nonatomic) SBDisplaySettings* deactivatingAppSettings;
@property(retain, nonatomic) SBDisplaySettings* activatingAppSettings;
@property(assign, nonatomic) BOOL cancelOnNextSuspendIfNecessary;
@property(copy, nonatomic) id commitBlock;
@property(retain, nonatomic) SBApplication* deactivatingApp;
@property(retain, nonatomic) SBApplication* activatingApp;
@property(readonly, retain, nonatomic) UIView* containerView;
@property(retain, nonatomic) id<BSLogging> debugLogger;
-(void)transactionDidComplete:(id)transaction;
-(void)_stopMonitoringStartDependency:(id)dependency;
-(void)_startMonitoringStartDependency:(id)dependency;
-(void)_enumerateObserversSafely:(id)safely;
-(void)__cleanupAnimation;
-(BOOL)__animationShouldStart;
-(void)__noteAnimationDidTerminateWithSuccess:(BOOL)__noteAnimation;
-(void)_noteAnimationDidFail;
-(void)_noteAnimationDidFinish;
-(void)_noteAnimationDidRevealApplication;
-(void)_notifyObserversOfCompletion;
-(void)_noteAnimationDidCommit:(BOOL)_noteAnimation withDuration:(double)duration afterDelay:(double)delay;
-(BOOL)_shouldDismissBanner;
-(void)_cleanupAnimation;
-(void)_cancelAnimation;
-(void)_startAnimation;
-(void)_startTransactionDependency:(id)dependency didComplete:(BOOL)complete;
-(void)_applicationDependencyStateChanged;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(void)_prepareAnimation;
-(void)_setHidden:(BOOL)hidden;
-(id)_animationProgressDependency;
-(id)_animationIdentifier;
-(BOOL)_willAnimate;
-(void)_removeStartTransactionDependency:(id)dependency;
-(void)_addStartTransactionDependency:(id)dependency;
-(id)_startTransactionDependencies;
-(void)endAnimation;
-(BOOL)isReasonableMomentToInterrupt;
-(BOOL)isComplete;
-(BOOL)waitingToStart;
-(BOOL)__wantsInitialProgressStateChange;
-(void)beginAnimation;
-(void)_setupStartDependencies;
-(id)__newWaitForAppActivationTransaction;
-(void)_applicationActivationStateDidChange;
-(void)__evaluateStartDependencies;
-(void)__cancelAnimation;
-(void)__startAnimation;
-(void)removeObserver:(id)observer;
-(void)addObserver:(id)observer;
-(void)_setAnimationState:(int)state;
-(BOOL)_isNullAnimation;
-(BOOL)animating;
-(int)_animationState;
-(void)dealloc;
-(id)initWithActivatingApp:(id)activatingApp deactivatingApp:(id)app;
-(id)init;
-(id)_getTransitionWindow;
@end

