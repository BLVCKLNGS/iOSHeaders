//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBLockScreenEmergencyCallViewControllerDelegate.h"

@class NSString, SBLockScreenEmergencyCallViewController, UIViewController;

@interface SBLockScreenEmergencyDialerController : NSObject <SBLockScreenEmergencyCallViewControllerDelegate>
{
    SBLockScreenEmergencyCallViewController *_viewController;
    _Bool _active;
    id <SBLockScreenEmergencyDialerDelegate> _delegate;
}

@property(nonatomic) __weak id <SBLockScreenEmergencyDialerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)emergencyCallViewController:(id)arg1 didExitWithError:(id)arg2;
- (void)dismissEmergencyCallViewController:(id)arg1;
- (void)deactivate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

