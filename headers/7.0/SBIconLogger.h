/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSimplePreferenceFileLogger.h"


__attribute__((visibility("hidden")))
@interface SBIconLogger : SBSimplePreferenceFileLogger {
}
+(BOOL)isIconLoggingEnabled;
-(void)reloadFromDefaults;
-(id)consoleFormat:(id)format withArguments:(char*)arguments;
-(id)logPreferenceName;
-(int)maxLogCount;
-(id)name;
@end

