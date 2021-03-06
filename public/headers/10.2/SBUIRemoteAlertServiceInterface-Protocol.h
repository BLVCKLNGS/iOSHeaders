//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSSet, NSString, NSUUID, SBSRemoteAlertActivationContext;

@protocol SBUIRemoteAlertServiceInterface

@optional
- (void)setUserInfo:(NSDictionary *)arg1;
- (void)prepareForActivationWithContext:(SBSRemoteAlertActivationContext *)arg1 completion:(void (^)(void))arg2;
- (void)noteActivatedForCustomReason:(NSString *)arg1;
- (void)noteActivatedForActivityContinuationWithIdentifier:(NSUUID *)arg1;
- (void)handleDoubleHeightStatusBarTap;
- (void)handleButtonActions:(NSSet *)arg1;
- (void)handleHeadsetButtonPressed:(_Bool)arg1;
- (void)handleVolumeDownButtonPressed;
- (void)handleVolumeUpButtonPressed;
- (void)handleLockButtonPressed;
- (void)handleHomeButtonPressed;
@end

