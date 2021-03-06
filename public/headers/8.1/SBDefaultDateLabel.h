/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBBulletinDateLabel.h"

@class NSString, NSDate, NSTimer;
@protocol SBDateLabelDelegate;

__attribute__((visibility("hidden")))
@interface SBDefaultDateLabel : XXUnknownSuperclass <SBBulletinDateLabel> {
	NSDate* _timeZoneRelativeStartDate;
	NSDate* _timeZoneRelativeEndDate;
	BOOL _allDay;
	BOOL _isTimestamp;
	NSDate* _effectiveAllDayStartDate;
	NSDate* _effectiveAllDayLastValidDate;
	NSDate* _effectiveAllDayEndDate;
	BOOL _effectiveAllDay;
	BOOL _isCoalescingUpdates;
	BOOL _needsUpdateFromCoalesce;
	NSTimer* _updateTimer;
	id<SBDateLabelDelegate> _delegate;
	int _labelType;
}
@property(assign, nonatomic) BOOL isTimestamp;
@property(assign, nonatomic) int labelType;
@property(assign, nonatomic) id<SBDateLabelDelegate> delegate;
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)_currentCalendar;
-(void)stopCoalescingUpdates;
-(void)startCoalescingUpdates;
-(void)update;
-(void)_forceUpdate;
-(void)updateTextIfNecessary;
-(void)_updateTimerFired:(id)fired;
-(void)updateTextIfNecessary:(BOOL)necessary;
-(id)constructLabelString;
-(id)_constructNonAllDayLabelStringWithDate:(id)date startTime:(double)time startIsToday:(BOOL)today sameDayDates:(BOOL)dates eventOngoing:(BOOL)ongoing withCurrentDate:(id)currentDate forStartLabel:(BOOL)startLabel;
-(BOOL)isEffectiveAllDay;
-(BOOL)isDateWithinEffectiveAllDayRange:(id)range;
-(id)_localDateForDate:(id)date inTimeZone:(id)timeZone;
-(void)_updateEffectiveAllDayTimes;
-(void)_resetEffectiveAllDayState:(BOOL)state;
-(void)setEndDate:(id)date withTimeZone:(id)timeZone;
-(void)setStartDate:(id)date withTimeZone:(id)timeZone;
-(void)setTimeZoneRelativeEndDate:(id)date;
-(void)setTimeZoneRelativeStartDate:(id)date absoluteStartDate:(id)date2;
-(void)_configureTimer;
-(void)_invalidateTimer;
-(void)prepareForReuse;
-(void)dealloc;
-(id)init;
@end

