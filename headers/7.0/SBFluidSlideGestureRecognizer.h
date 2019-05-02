/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBGestureRecognizer.h"


__attribute__((visibility("hidden")))
@interface SBFluidSlideGestureRecognizer : SBGestureRecognizer {
	int m_degreeOfFreedom;
	unsigned m_minTouches;
	BOOL m_blocksIconController;
	float _animationDistance;
	float _commitDistance;
	float _accelerationThreshold;
	float _accelerationPower;
	int _requiredDirectionality;
	float _defaultHandSize;
	float _handSizeCompensationPower;
	float _incrementalMotion;
	float _smoothedIncrementalMotion;
	float _cumulativeMotion;
	float _cumulativeMotionEnvelope;
	float _cumulativeMotionSkipped;
	BOOL _hasSignificantMotion;
	CGPoint _movementVelocityInPointsPerSecond;
	CGPoint _centroidPoint;
	double _recognitionStartTimestamp;
}
@property(readonly, assign, nonatomic) double activeRecognitionDuration;
@property(readonly, assign, nonatomic) CGPoint centroidPoint;
@property(readonly, assign, nonatomic) CGPoint movementVelocityInPointsPerSecond;
@property(readonly, assign, nonatomic) float incrementalMotion;
@property(readonly, assign, nonatomic) float cumulativeMotion;
@property(readonly, assign, nonatomic) float skippedCumulativePercentage;
@property(readonly, assign, nonatomic) float cumulativePercentage;
@property(readonly, assign, nonatomic) int degreeOfFreedom;
@property(assign, nonatomic) int requiredDirectionality;
@property(assign, nonatomic) float accelerationPower;
@property(assign, nonatomic) float accelerationThreshold;
@property(assign, nonatomic) float animationDistance;
@property(assign, nonatomic) unsigned minTouches;
-(void)touchesCancelled:(SBGestureContextRef)cancelled;
-(void)touchesEnded:(SBGestureContextRef)ended;
-(void)touchesMoved:(SBGestureContextRef)moved;
-(void)touchesBegan:(SBGestureContextRef)began;
-(void)updateActiveTouches:(SBGestureContextRef)touches;
-(void)updateForEndedOrCancelledTouches:(SBGestureContextRef)endedOrCancelledTouches;
-(void)updateForBeganOrMovedTouches:(SBGestureContextRef)beganOrMovedTouches;
-(void)setState:(int)state;
-(int)completionTypeProjectingMomentumForInterval:(double)interval;
-(float)projectMotionForInterval:(double)interval;
-(void)computeCentroidPoint:(SBGestureContextRef)point;
-(void)computeHasSignificantMotionIfNeeded:(SBGestureContextRef)needed;
-(float)computeIncrementalGestureMotion:(SBGestureContextRef)motion;
-(void)computeGestureMotion:(SBGestureContextRef)motion;
-(float)computeHandSizeCompensationGain:(float)gain;
-(float)computeNonlinearSpeedGain:(float)gain;
-(void)skipCumulativeMotion;
-(void)reset;
-(double)activeTouchTimestamp;
-(id)init;
@end

