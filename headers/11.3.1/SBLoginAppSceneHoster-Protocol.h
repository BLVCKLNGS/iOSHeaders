//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBApplication, UIView;

@protocol SBLoginAppSceneHoster <NSObject>
@property(readonly, nonatomic) UIView *contentView;
@property(nonatomic) _Bool deferHIDEvents;
@property(nonatomic) __weak id <SBLoginAppSceneHosterDelegate> delegate;
@property(readonly, nonatomic) SBApplication *hostedApp;
@property(readonly, nonatomic) NSString *hostedAppBundleID;
@property(readonly, nonatomic) NSString *hostedSceneIdentifier;
- (void)killLoginApp;
- (void)launchLoginAppWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)updateSettingsWithTransitionBlock:(FBSSceneTransitionContext * (^)(FBSMutableSceneSettings *))arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end
