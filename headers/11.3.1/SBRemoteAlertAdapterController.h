//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBRemoteAlertController.h"

@class SBRemoteAlertAdapter<SBRemoteAlert>;

@interface SBRemoteAlertAdapterController : SBRemoteAlertController
{
}

+ (_Bool)isDefinition:(id)arg1 allowedForAuditToken:(id)arg2;
+ (_Bool)isDefinition:(id)arg1 equalToDefinition:(id)arg2;
+ (Class)remoteAlertClass;
- (void)activateWithContext:(id)arg1;
- (void)didInvalidate;

// Remaining properties
@property(readonly, nonatomic) SBRemoteAlertAdapter<SBRemoteAlert> *alert; // @dynamic alert;

@end
