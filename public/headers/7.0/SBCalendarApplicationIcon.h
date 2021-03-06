/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBApplicationIcon.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBCalendarApplicationIcon : SBApplicationIcon {
}
+(id)countriesRequiringBlackDayOfWeek;
-(void)_drawIconIntoCurrentContextWithImageSize:(CGSize)imageSize iconBase:(id)base;
-(id)numberFont;
-(id)colorForDayOfWeek;
-(BOOL)isBlackDayOfWeekRequiredForLocale:(id)locale;
-(BOOL)canGenerateImageInBackgroundForFormat:(int)format;
-(id)getUnmaskedIconImage:(int)image;
-(id)generateIconImage:(int)image;
-(void)localeChanged;
-(void)dealloc;
-(id)initWithApplication:(id)application;
@end

