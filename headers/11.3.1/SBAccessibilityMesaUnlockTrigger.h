//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMesaUnlockTrigger.h"

#import "SBMesaUnlockTriggerDelegate.h"

@class NSString, SBDashBoardViewController;

@interface SBAccessibilityMesaUnlockTrigger : SBMesaUnlockTrigger <SBMesaUnlockTriggerDelegate>
{
    SBDashBoardViewController *_dbvc;
    SBMesaUnlockTrigger *_baseTrigger;
}

- (void).cxx_destruct;
- (_Bool)bioUnlock;
- (void)fingerOff;
- (void)fingerOn;
- (id)initWithDashBoardViewController:(id)arg1 baseTrigger:(id)arg2;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)mesaUnlockTriggerFired:(id)arg1;
- (void)screenOff;
- (void)significantUserInteractionOccurred;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

