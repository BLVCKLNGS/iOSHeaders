/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@protocol SBSlidingAlertDisplayDelegate <NSObject>

@optional
- (void)slidingAlertViewDeactivationAnimationCompleted:(id)arg1;
- (void)slidingAlertViewDeactivationAnimationStart:(id)arg1;
- (void)didToggleDeviceLock;
- (void)willAnimateToggleDeviceLockWithStyle:(int)arg1 toVisibility:(BOOL)arg2 withDuration:(double)arg3;
- (void)willToggleDeviceLockWithStyle:(int)arg1 toVisibility:(BOOL)arg2;
@end

