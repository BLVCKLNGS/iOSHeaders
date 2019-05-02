//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBSystemServiceServerHardwareButtonDelegate.h"

@class FBServiceClientAuthenticator, NSMutableOrderedSet, NSString;

@interface SBHardwareButtonService : NSObject <SBSystemServiceServerHardwareButtonDelegate>
{
    FBServiceClientAuthenticator *_serviceClientHomeHardwareButtonHintSuppressionEntitlementAuthenticator;
    FBServiceClientAuthenticator *_serviceClientEventConsumerEntitlement;
    NSMutableOrderedSet *_homeButtonClients;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableOrderedSet *homeButtonClients; // @synthesize homeButtonClients=_homeButtonClients;
- (void).cxx_destruct;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 acquireAssertionOfType:(long long)arg3 forReason:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 fetchHapticTypeForButtonKind:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setHapticType:(long long)arg3 buttonKind:(long long)arg4;
- (void)systemServiceServer:(id)arg1 client:(id)arg2 setEventMask:(unsigned long long)arg3 buttonKind:(long long)arg4 priority:(long long)arg5;
- (void)systemServiceServer:(id)arg1 clientDidDisconnect:(id)arg2;
- (void)_setSystemServiceClient:(id)arg1 buttonKind:(long long)arg2 eventMask:(unsigned long long)arg3 priority:(long long)arg4;
- (void)_removeClientInfo:(id)arg1;
- (void)_addClientInfo:(id)arg1;
- (_Bool)_sendEvent:(long long)arg1 withPriority:(long long)arg2;
- (_Bool)_sendXPCMessageForEvent:(long long)arg1 priority:(long long)arg2 toClient:(id)arg3;
- (_Bool)consumeHomeButtonTriplePressUpWithPriority:(long long)arg1;
- (_Bool)consumeHomeButtonDoublePressDownWithPriority:(long long)arg1;
- (_Bool)consumeHomeButtonSinglePressUpWithPriority:(long long)arg1;
- (_Bool)hasConsumersForHomeButtonPresses;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

