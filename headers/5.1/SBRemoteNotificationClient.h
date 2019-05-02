/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSString, NSDictionary, NSData, NSDate;

@interface SBRemoteNotificationClient : XXUnknownSuperclass <NSCoding> {
	NSString* _bundleIdentifier;
	NSString* _environment;
	int _appEnabledTypes;
	int _settingsEnabledTypes;
	int _settingsPresentedTypes;
	NSData* _lastKnownDeviceToken;
	NSDate* _missingDate;
	NSDate* _contentPushDisallowedBeforeDate;
	BOOL _hasShownSystemwideEnableAlert;
	NSDictionary* _lastUserInfo;
}
@property(readonly, retain, nonatomic) NSString* bundleIdentifier;
@property(retain, nonatomic) NSString* environment;
@property(assign, nonatomic) int appEnabledTypes;
@property(assign, nonatomic) int settingsEnabledTypes;
@property(assign, nonatomic) int settingsPresentedTypes;
@property(retain, nonatomic) NSData* lastKnownDeviceToken;
@property(retain, nonatomic) NSDate* missingDate;
@property(retain, nonatomic) NSDate* contentPushDisallowedBeforeDate;
@property(assign, nonatomic) BOOL hasShownSystemwideEnableAlert;
@property(retain, nonatomic) NSDictionary* lastUserInfo;
-(id)initWithBundleIdentifier:(id)bundleIdentifier;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(int)effectivelyEnabledTypes;
@end

