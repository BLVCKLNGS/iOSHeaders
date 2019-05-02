//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"
#import "SBDashBoardBehaviorProviding.h"

@class NSString;

@interface SBDashBoardBehavior : NSObject <BSDescriptionProviding, SBDashBoardBehaviorProviding, NSCopying>
{
    long long _idleTimerDuration;
    long long _idleTimerMode;
    long long _idleWarnMode;
    long long _scrollingStrategy;
    unsigned long long _restrictedCapabilities;
    long long _notificationBehavior;
    long long _proximityDetectionMode;
}

+ (id)behavior;
+ (id)behaviorForProvider:(id)arg1;
- (void)addRestrictedCapabilities:(unsigned long long)arg1;
- (_Bool)areRestrictedCapabilities:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long idleTimerDuration; // @synthesize idleTimerDuration=_idleTimerDuration;
@property(nonatomic) long long idleTimerMode; // @synthesize idleTimerMode=_idleTimerMode;
@property(nonatomic) long long idleWarnMode; // @synthesize idleWarnMode=_idleWarnMode;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToBehavior:(id)arg1;
@property(nonatomic) long long notificationBehavior; // @synthesize notificationBehavior=_notificationBehavior;
@property(nonatomic) long long proximityDetectionMode; // @synthesize proximityDetectionMode=_proximityDetectionMode;
- (void)removeRestrictedCapabilities:(unsigned long long)arg1;
- (void)reset;
@property(nonatomic) unsigned long long restrictedCapabilities; // @synthesize restrictedCapabilities=_restrictedCapabilities;
@property(nonatomic) long long scrollingStrategy; // @synthesize scrollingStrategy=_scrollingStrategy;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)unionBehavior:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

