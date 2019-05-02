//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "NCNotificationDateLabel.h"

@class NSString, NSTimer;

@interface SBSnoozedAlarmDateLabel : UILabel <NCNotificationDateLabel>
{
    double _fireTime;
    NSTimer *_tickTimer;
    _Bool _allDay;
    _Bool isTimestamp;
    int _labelType;
    id <SBDateLabelDelegate> _delegate;
}

@property(nonatomic) _Bool isTimestamp; // @synthesize isTimestamp;
@property(nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(nonatomic) int labelType; // @synthesize labelType=_labelType;
@property(nonatomic) id <SBDateLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopCoalescingUpdates;
- (void)startCoalescingUpdates;
- (void)prepareForReuse;
- (void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
- (void)_tickTimerFired:(id)arg1;
- (void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
- (void)_updateText;
- (id)_formatDuration:(double)arg1;
- (void)dealloc;
- (void)_invalidateTimer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

