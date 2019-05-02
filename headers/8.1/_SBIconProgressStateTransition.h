/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "_SBIconProgressTransition.h"

@class CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface _SBIconProgressStateTransition : _SBIconProgressTransition {
	double _totalElapsedTime;
	double _duration;
	CAMediaTimingFunction* _timingFunction;
	int _fromState;
	int _toState;
	float _fraction;
}
+(Class)_classForTransitionFromState:(int)state toState:(int)state2;
+(id)newTransitionFromState:(int)state toState:(int)state2;
-(void)_updateView:(id)view;
-(BOOL)isCompleteWithView:(id)view;
-(void)completeTransitionAndUpdateView:(id)view;
-(void)updateView:(id)view withElapsedTime:(double)elapsedTime;
-(void)dealloc;
-(id)_initWithFromState:(int)state toState:(int)state2;
@end
