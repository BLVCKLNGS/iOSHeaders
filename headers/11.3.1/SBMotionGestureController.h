//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMGestureManager, NSMutableDictionary;

@interface SBMotionGestureController : NSObject
{
    NSMutableDictionary *_observersByPriority;
    CMGestureManager *_motionGestureManager;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addGestureManager;
- (void)_addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)_enumerateObserversByPriority:(CDUnknownBlockType)arg1;
- (_Bool)_hasObservers;
- (id)_highestPriorityObservers;
- (void)_notifyObserversOfGesture:(int)arg1;
- (id)_observersForPriority:(unsigned long long)arg1;
- (void)_removeGestureManager;
- (void)_removeGestureObserver:(id)arg1;
- (void)_updateGestureManager;
- (void)addGestureObserver:(id)arg1;
- (void)addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (void)removeGestureObserver:(id)arg1;

@end

