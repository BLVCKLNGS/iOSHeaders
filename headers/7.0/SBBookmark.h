/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLeafIconDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIWebClip;

__attribute__((visibility("hidden")))
@interface SBBookmark : XXUnknownSuperclass <SBLeafIconDataSource> {
	UIWebClip* _webClip;
}
@property(retain, nonatomic) UIWebClip* webClip;
+(id)bookmarkWithWebClip:(id)webClip;
-(BOOL)icon:(id)icon launchFromLocation:(int)location;
-(BOOL)iconAllowsLaunch:(id)launch;
-(BOOL)iconCompleteUninstall:(id)uninstall;
-(BOOL)iconAllowsUninstall:(id)uninstall;
-(BOOL)iconIsRecentlyUpdated:(id)updated;
-(id)iconFormattedAccessoryString:(id)string;
-(id)iconBadgeNumberOrString:(id)string;
-(int)iconAccessoryType:(id)type;
-(BOOL)iconProgressIsPaused:(id)paused;
-(float)iconProgressPercent:(id)percent;
-(int)iconProgressState:(id)state;
-(BOOL)iconAppearsInNewsstand:(id)newsstand;
-(BOOL)iconCanEllipsizeLabel:(id)label;
-(id)icon:(id)icon defaultImageWithFormat:(int)format;
-(id)icon:(id)icon imageWithFormat:(int)format;
-(unsigned)iconPriority:(id)priority;
-(id)iconDisplayName:(id)name;
-(BOOL)allowsUninstall;
-(void)deviceUnlockedForFirstTime:(id)firstTime;
-(id)bundleIdentifier;
-(id)identifier;
-(void)dealloc;
-(id)initWithWebClip:(id)webClip;
@end

