//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBLiquidDetectionManager : NSObject
{
    int _wetToken;
    _Bool _finishedInit;
    _Bool _detectionEnabled;
    _Bool _accessoryPortWet;
}

+ (id)sharedInstance;
+ (_Bool)showStatusBarIcon;
- (void)_finishInit;
- (_Bool)_showStatusBarIcon;
- (void)_stateDidUpdate;
- (void)_updateStatusBar;
- (void)_updateWetState;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
@property(readonly, nonatomic, getter=isAccessoryPortWet) _Bool accessoryPortWet; // @synthesize accessoryPortWet=_accessoryPortWet;
@property(readonly, nonatomic, getter=isDetectionEnabled) _Bool detectionEnabled; // @synthesize detectionEnabled=_detectionEnabled;
@property(readonly, nonatomic, getter=isLiquidDetected) _Bool liquidDetected; // @dynamic liquidDetected;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

