/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"

@class NSSet;
@protocol SBPresentingDelegate;

@protocol SBCoordinatedPresenting <NSObject>
@optional
@property(readonly, assign, nonatomic) NSSet* tapExcludedViews;
@property(readonly, assign, nonatomic) NSSet* conflictingGestures;
@property(readonly, assign, nonatomic) NSSet* gestures;
@property(assign, nonatomic) id<SBPresentingDelegate> presentingDelegate;
@required
@property(readonly, assign, nonatomic) unsigned hintEdge;
@property(readonly, assign, nonatomic) float hintDisplacement;
@property(readonly, assign, nonatomic) int coordinatedPresentingControllerIdentifier;
-(void)abortAnimatedTransition;
-(void)endTransitionWithVelocity:(CGPoint)velocity wasCancelled:(BOOL)cancelled completion:(id)completion;
-(void)updateTransitionWithTouchLocation:(CGPoint)touchLocation velocity:(CGPoint)velocity;
-(void)beginPresentationWithTouchLocation:(CGPoint)touchLocation;
-(BOOL)isPresentingControllerTransitioning;
@optional
-(BOOL)shouldBeginHintForGesture:(id)gesture;
-(void)reenableGestureRecognizer:(id)recognizer;
-(void)cancelGestureRecognizer:(id)recognizer;
-(void)treatCurrentPositionAsBoundaryforGesture:(id)gesture;
@end

