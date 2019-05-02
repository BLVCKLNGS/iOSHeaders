//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBUIActiveOrientationObserver-Protocol.h"

@class NSMutableSet, NSString, SBHardwareDefaults;
@protocol SBProximitySensorControlling;

@interface SBProximitySensorManager : NSObject <SBUIActiveOrientationObserver>
{
    NSMutableSet *_clientsWantingDetectionEnabled;
    id <SBProximitySensorControlling> _hidInterface;
    SBHardwareDefaults *_hardwareDefaults;
    _Bool _proximityDetectionEnabled;
    _Bool _proximityDetectionPermitted;
    _Bool _objectWithinProximity;
}

+ (id)sharedInstance;
@property(nonatomic, getter=isProximityDetectionPermitted, setter=_setProximityDetectionPermitted:) _Bool proximityDetectionPermitted; // @synthesize proximityDetectionPermitted=_proximityDetectionPermitted;
@property(nonatomic, getter=isProximityDetectionEnabled, setter=_setProximityDetectionEnabled:) _Bool proximityDetectionEnabled; // @synthesize proximityDetectionEnabled=_proximityDetectionEnabled;
- (void).cxx_destruct;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)_updateProxState;
- (_Bool)_clientsWantDetectionEnabled;
- (void)_disableProx;
- (void)_enableProx;
- (void)_proximityChanged:(id)arg1;
- (void)resetProximityCalibration;
- (void)client:(id)arg1 wantsProximityDetectionEnabled:(_Bool)arg2;
- (void)reloadDefaults;
- (void)destroy;
- (id)initWithHIDInterface:(id)arg1 hardwareDefaults:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

