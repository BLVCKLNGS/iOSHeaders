/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "_SBIconProgressTransition.h"

@class CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface _SBIconProgressPausedTransition : _SBIconProgressTransition {
	double _totalElapsedTime;
	double _duration;
	CAMediaTimingFunction* _timingFunction;
	BOOL _toPaused;
	float _fraction;
}
+(id)newTransitionToPaused:(BOOL)paused;
-(void)_updateElapsedTimeFromFraction;
-(void)_updateTimingFunction;
-(void)_updateView:(id)view;
-(BOOL)isCompleteWithView:(id)view;
-(void)completeTransitionAndUpdateView:(id)view;
-(void)updateView:(id)view withElapsedTime:(double)elapsedTime;
-(void)updateToPaused:(BOOL)paused;
-(void)dealloc;
-(id)_initToPaused:(BOOL)paused;
@end

