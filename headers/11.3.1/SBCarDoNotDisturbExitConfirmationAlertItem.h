//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@interface SBCarDoNotDisturbExitConfirmationAlertItem : SBAlertItem
{
    CDUnknownBlockType _notDrivingActionHandler;
}

- (void).cxx_destruct;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (_Bool)forcesModalAlertAppearance;
@property(copy, nonatomic) CDUnknownBlockType notDrivingActionHandler; // @synthesize notDrivingActionHandler=_notDrivingActionHandler;
- (_Bool)reappearsAfterUnlock;
- (_Bool)shouldShowInLockScreen;

@end
