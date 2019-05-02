//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBPressSequenceSettings;

@interface SBPressSequenceValidator : NSObject
{
    SBPressSequenceSettings *_settings;
}

- (void).cxx_destruct;
- (long long)_modeForDesiredIndex:(unsigned long long)arg1 isDownEvent:(_Bool)arg2;
- (struct _SBPressSequenceValidatorBounds)_pressDownBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2;
- (struct _SBPressSequenceValidatorBounds)_pressUpBoundsForDesiredIndex:(unsigned long long)arg1 sequence:(id)arg2;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (_Bool)pressEventIsValidInSequence:(id)arg1 endingDownEvent:(_Bool)arg2 duration:(double)arg3;
@property(readonly, nonatomic) SBPressSequenceSettings *settings; // @synthesize settings=_settings;
- (double)timeUntilNextPressEventIsInValidInSequence:(id)arg1 lastPressEventInSequenceIsDown:(_Bool)arg2;

@end

