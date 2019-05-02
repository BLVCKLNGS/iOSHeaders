//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBHomeGestureParticipantDelegate.h"

@class BSAnimationSettings, NSMapTable, SBHomeGesturePanGestureRecognizer, SBScreenEdgePanGestureRecognizer;

@interface SBNotificationHomeAffordanceController : NSObject <SBHomeGestureParticipantDelegate>
{
    NSMapTable *_clientsToParticipants;
    SBHomeGesturePanGestureRecognizer *_screenEdgePanGesture;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)registerClient:(id)arg1 withIdentifier:(long long)arg2;
@property(readonly, nonatomic) SBScreenEdgePanGestureRecognizer *screenEdgePanGesture;
@property(readonly, nonatomic) id <UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription;
@property(readonly, nonatomic) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;
- (void)unregisterClient:(id)arg1 withIdentifier:(long long)arg2;

@end
