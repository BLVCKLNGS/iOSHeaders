//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBPressSequenceRecognizerDelegate.h"

@class BSAction, NSString, SBPressSequenceRecognizer, SBPressSequenceSettings, SBPressSequenceValidator;

@interface SBSOSTriggerObserver : NSObject <SBPressSequenceRecognizerDelegate>
{
    SBPressSequenceRecognizer *_recognizer;
    SBPressSequenceValidator *_validator;
    SBPressSequenceSettings *_settings;
    _Bool _lastKnownActiveState;
    BSAction *_triggerAction;
    id <SBSOSTriggerObserverDelegate> _delegate;
    long long _configuration;
}

@property(readonly, nonatomic) long long configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <SBSOSTriggerObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_configureSettings;
- (void)_configure;
- (void)_noteTriggerDidBecomeInactive;
- (void)_noteTriggerDidBecomeActive;
- (void)_noteTriggerActionRecievedResponse;
- (void)pressSequenceRecognizerDidFail:(id)arg1;
- (void)pressSequenceRecognizer:(id)arg1 didBeginPressDownAtIndex:(unsigned long long)arg2;
- (void)pressSequenceRecognizerDidCompleteSequence:(id)arg1;
- (void)resetWithNewConfiguration:(long long)arg1;
- (void)registerPressUpWithTimestamp:(double)arg1;
- (void)registerPressDownWithTimestamp:(double)arg1;
- (id)initWithConfiguration:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

