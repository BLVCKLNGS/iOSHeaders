/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SBVoiceControlController : NSObject
{
    BOOL _delayedAssistantActivationPending;
    BOOL _headsetDownDelayedActionPerformed;
}

+ (id)sharedInstance;
- (void)_updateNextRecognitionAudioInputPaths:(id)arg1;
- (void)bluetoothDeviceEndedVoiceControl:(id)arg1;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)arg1;
- (void)_spokenLanguageDidChange:(id)arg1;
- (void)_assistantActivationSettingsDidChange:(id)arg1;
- (void)headsetAvailabilityChanged;
- (BOOL)handleHeadsetButtonUpNotInCall;
- (BOOL)handleHeadsetButtonUp;
- (void)handleHeadsetButtonDownWithClickCount:(unsigned int)arg1;
- (void)_cancelDelayedHeadsetAction;
- (void)_prepareDelayedHeadsetAction;
- (void)_performDelayedHeadsetActionForVoiceControl;
- (void)_performDelayedHeadsetActionForAssistant;
- (BOOL)handleHomeButtonHeld;
- (void)preheatForMenuButtonWithFireDate:(id)arg1;
- (void)configureVoiceControl;
- (id)init;

@end

