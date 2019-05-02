//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBHardwareButtonGestureParametersProviderBase.h"

#import "SBHardwareButtonGestureParametersObserver.h"
#import "SBPressPrecedenceArbiter.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SBClickGestureRecognizer, SBHardwareButtonGestureParameters, SBHomeHardwareButton, SBLockHardwareButtonActions, SBLongPressGestureRecognizer, SBPressGestureRecognizer, SBVolumeHardwareButton, UIGestureRecognizer;

@interface SBLockHardwareButton : SBHardwareButtonGestureParametersProviderBase <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBPressPrecedenceArbiter>
{
    unsigned long long _aggdStartTime;
    SBLockHardwareButtonActions *_buttonActions;
    SBHardwareButtonGestureParameters *_buttonGestureParameters;
    SBPressGestureRecognizer *_buttonDownGestureRecognizer;
    SBClickGestureRecognizer *_singlePressGestureRecognizer;
    SBLongPressGestureRecognizer *_longPressGestureRecognizer;
    SBClickGestureRecognizer *_doublePressGestureRecognizer;
    SBClickGestureRecognizer *_triplePressGestureRecognizer;
    SBClickGestureRecognizer *_quadruplePressGestureRecognizer;
    UIGestureRecognizer *_screenshotGestureRecognizer;
    SBHomeHardwareButton *_homeHardwareButton;
    SBVolumeHardwareButton *_volumeHardwareButton;
    long long _homeButtonType;
    unsigned long long _configuredMaximumPressCount;
    unsigned long long _currentPressCount;
    double _lastPressDownTimestamp;
}

- (void).cxx_destruct;
- (void)SOSTriggerMechanismDidChange;
- (void)_createGestureRecognizers;
- (void)_reconfigureButtonGestureRecognizers;
- (void)_reportAggdLoggingForButtonEventIsDownEvent:(_Bool)arg1;
- (void)_updatePressCountForDownEvent;
@property(retain, nonatomic) SBLockHardwareButtonActions *buttonActions; // @synthesize buttonActions=_buttonActions;
- (void)buttonDown:(id)arg1;
@property(retain, nonatomic) SBPressGestureRecognizer *buttonDownGestureRecognizer; // @synthesize buttonDownGestureRecognizer=_buttonDownGestureRecognizer;
@property(retain, nonatomic) SBHardwareButtonGestureParameters *buttonGestureParameters; // @synthesize buttonGestureParameters=_buttonGestureParameters;
- (void)cancelLongPress;
@property(nonatomic) unsigned long long configuredMaximumPressCount; // @synthesize configuredMaximumPressCount=_configuredMaximumPressCount;
@property(nonatomic) unsigned long long currentPressCount; // @synthesize currentPressCount=_currentPressCount;
- (void)doublePress:(id)arg1;
@property(retain, nonatomic) SBClickGestureRecognizer *doublePressGestureRecognizer; // @synthesize doublePressGestureRecognizer=_doublePressGestureRecognizer;
- (void)forceResetSequenceDidBegin;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hardwareButtonGestureParameters;
@property(nonatomic) long long homeButtonType; // @synthesize homeButtonType=_homeButtonType;
@property(nonatomic) __weak SBHomeHardwareButton *homeHardwareButton; // @synthesize homeHardwareButton=_homeHardwareButton;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 proximitySensorManager:(id)arg2 homeHardwareButton:(id)arg3 volumeHardwareButton:(id)arg4 buttonActions:(id)arg5 homeButtonType:(long long)arg6 createGestures:(_Bool)arg7;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 proximitySensorManager:(id)arg2 homeHardwareButton:(id)arg3 volumeHardwareButton:(id)arg4 homeButtonType:(long long)arg5;
@property(readonly, nonatomic) _Bool isButtonDown;
@property(nonatomic) double lastPressDownTimestamp; // @synthesize lastPressDownTimestamp=_lastPressDownTimestamp;
- (void)longPress:(id)arg1;
@property(retain, nonatomic) SBLongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
- (id)preemptablePressGestureRecognizers;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (void)quadruplePress:(id)arg1;
@property(retain, nonatomic) SBClickGestureRecognizer *quadruplePressGestureRecognizer; // @synthesize quadruplePressGestureRecognizer=_quadruplePressGestureRecognizer;
- (_Bool)reverseFadeOutIfNeeded;
@property(nonatomic) __weak UIGestureRecognizer *screenshotGestureRecognizer; // @synthesize screenshotGestureRecognizer=_screenshotGestureRecognizer;
- (void)screenshotRecognizerDidRecognize:(id)arg1;
@property(retain, nonatomic) SBClickGestureRecognizer *singlePressGestureRecognizer; // @synthesize singlePressGestureRecognizer=_singlePressGestureRecognizer;
@property(retain, nonatomic) SBClickGestureRecognizer *triplePressGestureRecognizer; // @synthesize triplePressGestureRecognizer=_triplePressGestureRecognizer;
@property(nonatomic) __weak SBVolumeHardwareButton *volumeHardwareButton; // @synthesize volumeHardwareButton=_volumeHardwareButton;
- (void)singlePress:(id)arg1;
- (void)triplePress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

