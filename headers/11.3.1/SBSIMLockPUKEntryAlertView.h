//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSIMLockEntryAlertView.h"

@class NSString;

@interface SBSIMLockPUKEntryAlertView : SBSIMLockEntryAlertView
{
    int _state;
    NSString *_enteredPUKCode;
    NSString *_newPIN;
}

- (void).cxx_destruct;
- (void)_attemptPUKUnlock;
- (id)_pukAttemptsRemainingLabel;
- (void)_unlock;
- (id)label;
- (void)setupFailureState;
- (void)setupSuccess;
- (id)titleText;

@end

