//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBSystemGestureWorkspaceTransaction.h"

#import "BSTransactionObserver-Protocol.h"

@class NSString, SBMainWorkspaceTransaction;

@interface SBSideAppSlideGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <BSTransactionObserver>
{
    _Bool _waitingForGestureToComplete;
    SBMainWorkspaceTransaction *_activateSideAppTransaction;
    _Bool _activatedSideApp;
    _Bool _updateWhitePointAdaptationStrengthOnComplete;
}

@property(readonly, nonatomic) _Bool waitingForGestureToComplete; // @synthesize waitingForGestureToComplete=_waitingForGestureToComplete;
- (void).cxx_destruct;
- (void)_cleanupSideApp;
- (void)_activateSideApp;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)_begin;
- (void)notePassedSideAppActivationThreshold;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

