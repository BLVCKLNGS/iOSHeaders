//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, SBRemoteAlertAdapter;

@interface SBInCallAlertManager : NSObject
{
    SBRemoteAlertAdapter *_currentActiveInCallAlert;
    NSMutableSet *_outstandingLockButtonActionUUIDs;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) SBRemoteAlertAdapter *currentActiveInCallAlert; // @synthesize currentActiveInCallAlert=_currentActiveInCallAlert;
- (void).cxx_destruct;
- (void)_noteAction:(id)arg1 completedWithUnHandledEvents:(long long)arg2;
- (void)_noteActionRecieved:(id)arg1;
- (id)_configureActionForEvent:(long long)arg1;
- (id)_configureContextForUILockActivation;
- (void)_activateWithOptions:(id)arg1 context:(id)arg2;
- (void)noteActivatedInCallAlert:(id)arg1;
- (void)maybeLockUIAfterCallEnded;
- (_Bool)handleLockButtonPressed:(_Bool)arg1;
- (void)reactivateAlertForActivityContinuationWithActivityIdentifier:(id)arg1;
- (void)reactivateAlertForLockButtonPress;
- (void)reactivateAlertFromLockScreenWithUIUnlock:(_Bool)arg1 disableAnimatedTransition:(_Bool)arg2;
- (void)reactivateAlertFromStatusBarTap;
- (void)reactivateAlert;
- (_Bool)isEndingCallForLockButtonPress;
- (void)setCurrentActiveInCallAlert:(id)arg1;
- (id)init;

@end

