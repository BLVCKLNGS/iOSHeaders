//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBFThermalBlockProvider-Protocol.h"
#import "SBThermalWarningAlertItemDelegate-Protocol.h"
#import "SBThermalWarningSuppressionAssertionDelegate-Protocol.h"

@class NSDictionary, NSHashTable, NSMutableSet, NSString;

@interface SBThermalController : NSObject <SBThermalWarningSuppressionAssertionDelegate, SBThermalWarningAlertItemDelegate, SBFThermalBlockProvider>
{
    _Bool _sampling;
    double _samplingStartTime;
    NSDictionary *_samplingStartCPUTimesByApp;
    int _sunlightStateToken;
    int _coldTempToken;
    int _warningAssertionToken;
    int _warningResponseToken;
    NSMutableSet *_warningSuppressionAssertions;
    _Bool _warningSuppressionPreference;
    int _level;
    _Bool _inSunlight;
    NSHashTable *_observers;
}

+ (void)logThermalEvent:(id)arg1;
+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isInSunlight) _Bool inSunlight; // @synthesize inSunlight=_inSunlight;
@property(nonatomic) int level; // @synthesize level=_level;
- (void).cxx_destruct;
- (void)_setBrickMode:(_Bool)arg1;
- (_Bool)_brickMode;
- (void)thermalWarningAlert:(id)arg1 didTriggerAction:(int)arg2;
- (void)thermalWarningAssertionExpired:(id)arg1;
- (_Bool)captureWarningSuppressionAssertionWithPort:(unsigned int)arg1 reason:(id)arg2;
- (void)_didReceiveWarningAction:(int)arg1;
- (void)_calculateAppsCPUTimesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_killThermallyActiveApplication;
- (void)_killThermallyActiveApplicationGivenCPUTimes:(id)arg1;
- (void)_beginThermalJetsamCPUSampling;
- (void)respondToCurrentThermalCondition;
- (void)startListeningForThermalEvents;
- (_Bool)_isLevelBlocked:(int)arg1;
- (void)removeThermalObserver:(id)arg1;
- (void)addThermalObserver:(id)arg1;
- (_Bool)isThermalBlocked;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

