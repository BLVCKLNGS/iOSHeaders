//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBHardwareButtonGestureParametersProviderBase.h"

#import "SBHardwareButtonInteraction.h"
#import "SBProximitySensorManagerObserver.h"

@class NSString, SBProximitySensorManager;

@interface SBRecalibrateProximitySensorHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBProximitySensorManagerObserver, SBHardwareButtonInteraction>
{
    _Bool _didResetProxCalibration;
    SBProximitySensorManager *_sensorManager;
}

@property(nonatomic) _Bool didResetProxCalibration; // @synthesize didResetProxCalibration=_didResetProxCalibration;
@property(retain, nonatomic) SBProximitySensorManager *sensorManager; // @synthesize sensorManager=_sensorManager;
- (void).cxx_destruct;
- (id)hardwareButtonGestureParameters;
- (_Bool)disallowsLongPressForReason:(id *)arg1;
- (_Bool)disallowsTriplePressForReason:(id *)arg1;
- (_Bool)disallowsDoublePressForReason:(id *)arg1;
- (_Bool)disallowsSinglePressForReason:(id *)arg1;
- (_Bool)_disallowsAnyPressForReason:(id *)arg1;
- (_Bool)consumeSinglePressUp;
- (_Bool)consumeInitialPressDown;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithProximitySensorManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

