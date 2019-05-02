//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CMWakeGestureDelegate.h"

@class CMWakeGestureManager, NSHashTable, NSString, SBIdleTimerDefaults;

@interface SBLiftToWakeController : NSObject <CMWakeGestureDelegate>
{
    CMWakeGestureManager *_wakeGestureManager;
    long long _wakeGestureState;
    NSHashTable *_observers;
    SBIdleTimerDefaults *_idleTimerDefaults;
    _Bool _screenOn;
    _Bool _isEnabled;
    _Bool _observingCMWakeGestureManager;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_handleBacklightLevelChanged:(id)arg1;
@property(retain, nonatomic, getter=_idleTimerDefaults, setter=_setIdleTimerDefaults:) SBIdleTimerDefaults *idleTimerDefaults; // @synthesize idleTimerDefaults=_idleTimerDefaults;
- (void)_ignoredTransition:(long long)arg1;
- (_Bool)_isObservingWakeGestureManager;
- (void)_reconsiderEnablement;
- (void)_screenTurnedOff;
- (void)_screenTurnedOn;
- (void)_sendTransitionToObservers:(long long)arg1;
- (void)_startObservingIfNecessary;
- (void)_stopObservingIfNecessary;
- (void)addObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithBacklightController:(id)arg1 idleTimerDefaults:(id)arg2;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_isEnabled;
- (void)removeObserver:(id)arg1;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

