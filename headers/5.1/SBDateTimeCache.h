/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBDateTimeCache : XXUnknownSuperclass {
	double _yesterday;
	double _today;
	double _tomorrow;
	double _2daysFromNow;
	double _6daysAgo;
	double _prevWeek;
	double _nextWeek;
	double _lastAttemptedResetTime;
	double _lastSuccessfulResetTime;
}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(double)today;
-(double)tomorrow;
-(double)yesterday;
-(double)prevWeek;
-(double)nextWeek;
-(BOOL)isToday:(double)today;
-(BOOL)_isToday:(double)today;
-(BOOL)isTomorrow:(double)tomorrow;
-(BOOL)isYesterday:(double)yesterday;
-(BOOL)isWithinPrevWeek:(double)week;
-(BOOL)isWithinPrevWeek:(double)week includeToday:(BOOL)today;
-(BOOL)isWithinNextWeek:(double)week;
-(void)_resetAndConfigureIfNecessary;
-(void)_resetAndConfigure;
-(id)description;
@end

