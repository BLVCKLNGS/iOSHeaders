/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBCCSettingModule.h"


__attribute__((visibility("hidden")))
@interface SBCCPersonalHotspotSetting : SBCCSettingModule {
}
+(BOOL)enabledByDefault;
+(id)displayName;
+(id)identifier;
-(id)glyphImageForState:(int)state;
-(void)_updateState;
-(BOOL)_toggleState;
-(void)deactivate;
-(void)activate;
-(id)aggdKey;
-(void)dealloc;
@end

