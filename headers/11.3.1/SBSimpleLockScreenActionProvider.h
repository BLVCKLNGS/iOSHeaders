//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBLockScreenActionProvider.h"

@class NSString, SBLockScreenActionContext;

@interface SBSimpleLockScreenActionProvider : NSObject <SBLockScreenActionProvider>
{
    SBLockScreenActionContext *_lockScreenActionContext;
}

- (void).cxx_destruct;
- (void)invalidateLockScreenActionContext;
@property(retain, nonatomic) SBLockScreenActionContext *lockScreenActionContext; // @synthesize lockScreenActionContext=_lockScreenActionContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
