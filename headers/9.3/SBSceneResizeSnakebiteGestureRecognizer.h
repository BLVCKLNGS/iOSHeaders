/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@protocol SBSceneResizeSnakebiteGestureDebugDelegate;
@class UITouch;

@interface SBSceneResizeSnakebiteGestureRecognizer : UIGestureRecognizer {

	BOOL _beganTrackingNearDivider;
	BOOL _ignoresTouchesMoved;
	BOOL _waitingForInvalidTouchToBecomeValid;
	double _dividerPosition;
	double _velocity;
	double _distanceTraveledFromInitialLocation;
	double _absoluteDistanceTraveled;
	double _initialSingleTouchTimestamp;
	UITouch* _leftTouch;
	UITouch* _rightTouch;
	UITouch* _singleTrackingTouch;
	UITouch* _waitingTouch;
	double _previousTouchPosition;
	double _previousTouchTimestamp;
	id<SBSceneResizeSnakebiteGestureDebugDelegate> _debugDelegate;
	CGPoint _initialWaitingTouchLocation;
	CGPoint _initialTouchLocation;

}

@property (assign,nonatomic,__weak) id<SBSceneResizeSnakebiteGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic) double dividerPosition;                                                                                 //@synthesize dividerPosition=_dividerPosition - In the implementation block
@property (assign,nonatomic) double velocity;                                                                                        //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) double distanceTraveledFromInitialLocation;                                                             //@synthesize distanceTraveledFromInitialLocation=_distanceTraveledFromInitialLocation - In the implementation block
@property (assign,nonatomic) double absoluteDistanceTraveled;                                                                        //@synthesize absoluteDistanceTraveled=_absoluteDistanceTraveled - In the implementation block
@property (assign,nonatomic) double initialSingleTouchTimestamp;                                                                     //@synthesize initialSingleTouchTimestamp=_initialSingleTouchTimestamp - In the implementation block
@property (assign,nonatomic) BOOL beganTrackingNearDivider;                                                                          //@synthesize beganTrackingNearDivider=_beganTrackingNearDivider - In the implementation block
@property (setter=_setLeftTouch:,getter=_leftTouch,nonatomic,retain) UITouch * leftTouch;                                            //@synthesize leftTouch=_leftTouch - In the implementation block
@property (setter=_setRightTouch:,getter=_rightTouch,nonatomic,retain) UITouch * rightTouch;                                         //@synthesize rightTouch=_rightTouch - In the implementation block
@property (setter=_setSingleTrackingTouch:,getter=_singleTrackingTouch,nonatomic,retain) UITouch * singleTrackingTouch;              //@synthesize singleTrackingTouch=_singleTrackingTouch - In the implementation block
@property (setter=_setWaitingTouch:,getter=_waitingTouch,nonatomic,retain) UITouch * waitingTouch;                                   //@synthesize waitingTouch=_waitingTouch - In the implementation block
@property (assign,setter=_setIgnoresTouchesMoved:,getter=_ignoresTouchesMoved,nonatomic) BOOL ignoresTouchesMoved;                   //@synthesize ignoresTouchesMoved=_ignoresTouchesMoved - In the implementation block
@property (assign,nonatomic) CGPoint initialWaitingTouchLocation;                                                                    //@synthesize initialWaitingTouchLocation=_initialWaitingTouchLocation - In the implementation block
@property (assign,nonatomic) CGPoint initialTouchLocation;                                                                           //@synthesize initialTouchLocation=_initialTouchLocation - In the implementation block
@property (assign,nonatomic) double previousTouchPosition;                                                                           //@synthesize previousTouchPosition=_previousTouchPosition - In the implementation block
@property (assign,nonatomic) double previousTouchTimestamp;                                                                          //@synthesize previousTouchTimestamp=_previousTouchTimestamp - In the implementation block
@property (assign,getter=isWaitingForInvalidTouchToBecomeValid,nonatomic) BOOL waitingForInvalidTouchToBecomeValid;                  //@synthesize waitingForInvalidTouchToBecomeValid=_waitingForInvalidTouchToBecomeValid - In the implementation block
@property (assign,nonatomic,__weak) id<SBSceneResizeSnakebiteGestureDebugDelegate> debugDelegate;                                    //@synthesize debugDelegate=_debugDelegate - In the implementation block
-(double)distanceTraveledFromInitialLocation;
-(CGPoint)interfaceOrientedLocationInView:(id)arg1 ;
-(double)initialSingleTouchTimestamp;
-(void)_drawDebugRegions;
-(CGPoint)_convertViewPoint:(CGPoint)arg1 toInterfaceOrientation:(long long)arg2 ;
-(CGRect)_convertViewRect:(CGRect)arg1 toInterfaceOrientation:(long long)arg2 ;
-(double)_viewOffsetForNormalizedLocation:(double)arg1 ;
-(double)_dividerViewOffset;
-(CGPoint)_interfaceOrientedPoint:(CGPoint)arg1 ;
-(BOOL)_shouldStartTrackingSingleTouchAtLocation:(CGPoint)arg1 distanceFromDivider:(double)arg2 ;
-(id)_leftTouch;
-(id)_singleTrackingTouch;
-(id)_waitingTouch;
-(void)_clearTrackingTouches;
-(void)_startTrackingWithTouch:(id)arg1 andTouch:(id)arg2 ;
-(BOOL)_canStartAnyKindOfTrackingWithTouch:(id)arg1 ;
-(BOOL)_shouldContinueTrackingInvalidTouchWithDistanceFromDivider:(double)arg1 ;
-(void)_startTrackingWithSingleTouch:(id)arg1 ;
-(void)_setWaitingTouch:(id)arg1 ;
-(void)setInitialWaitingTouchLocation:(CGPoint)arg1 ;
-(void)setWaitingForInvalidTouchToBecomeValid:(BOOL)arg1 ;
-(void)_debugRegionsDidChange;
-(BOOL)_ignoresTouchesMoved;
-(id)_rightTouch;
-(BOOL)isWaitingForInvalidTouchToBecomeValid;
-(BOOL)willAllowResizeForSingleTouch:(id)arg1 ;
-(CGPoint)initialWaitingTouchLocation;
-(void)_handleTouchesMovedForSingleTouchTracking:(id)arg1 withEvent:(id)arg2 ;
-(void)_handleTouchesMovedForMultipleTouchTracking:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldConsiderSingleTouchTrackingAsFailed;
-(BOOL)_checkInitialValidityOfTouch:(id)arg1 andTouch:(id)arg2 ;
-(double)_normalizedLocationForViewOffset:(double)arg1 ;
-(void)_setDividerPosition:(double)arg1 ;
-(void)setPreviousTouchPosition:(double)arg1 ;
-(void)setPreviousTouchTimestamp:(double)arg1 ;
-(void)_setLeftTouch:(id)arg1 ;
-(void)_setRightTouch:(id)arg1 ;
-(void)setAbsoluteDistanceTraveled:(double)arg1 ;
-(void)setDistanceTraveledFromInitialLocation:(double)arg1 ;
-(void)setBeganTrackingNearDivider:(BOOL)arg1 ;
-(void)_setIgnoresTouchesMoved:(BOOL)arg1 ;
-(void)_setSingleTrackingTouch:(id)arg1 ;
-(void)setInitialSingleTouchTimestamp:(double)arg1 ;
-(BOOL)_singleTouchStartedInPinningAreaWithLocation:(CGPoint)arg1 ;
-(void)_stopDrawingDebugRegions;
-(BOOL)_checkOngoingValidityOfLeftTouch:(id)arg1 rightTouch:(id)arg2 ;
-(void)_updateStatsForTouchPosition:(double)arg1 timestamp:(double)arg2 ;
-(double)previousTouchPosition;
-(double)previousTouchTimestamp;
-(CGRect)_interfaceOrientedBounds;
-(void)setVelocity:(double)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(long long)_interfaceOrientation;
-(double)velocity;
-(void)setInitialTouchLocation:(CGPoint)arg1 ;
-(CGPoint)initialTouchLocation;
-(void)setDebugDelegate:(id<SBSceneResizeSnakebiteGestureDebugDelegate>)arg1 ;
-(id<SBSceneResizeSnakebiteGestureDebugDelegate>)debugDelegate;
-(double)dividerPosition;
-(double)absoluteDistanceTraveled;
-(BOOL)beganTrackingNearDivider;
@end

