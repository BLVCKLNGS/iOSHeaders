/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBFileLogger.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBSimplePreferenceFileLogger : SBFileLogger {
	BOOL _enabled;
}
@property(readonly, assign, nonatomic) NSString* logPreferenceName;
@property(readonly, assign, nonatomic) NSString* logPreferenceDomain;
-(void)reloadFromDefaults;
-(BOOL)isEnabled;
@end

