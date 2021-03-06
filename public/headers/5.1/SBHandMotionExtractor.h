/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBHandMotionExtractor : XXUnknownSuperclass {
	UIEdgeInsets _pixelDeltas;
	UIEdgeInsets _smoothedDeltas;
	UIEdgeInsets _allPixelDeltas;
	float _averageTranslation;
	float _farthestFingerSeparation;
	CGPoint _movementVelocityInPointsPerSecond;
}
@property(readonly, assign, nonatomic) UIEdgeInsets pixelDeltas;
@property(readonly, assign, nonatomic) UIEdgeInsets allPixelDeltas;
@property(readonly, assign, nonatomic) UIEdgeInsets averageVelocities;
@property(readonly, assign, nonatomic) float averageTranslation;
@property(readonly, assign, nonatomic) float farthestFingerSeparation;
@property(readonly, assign, nonatomic) CGPoint movementVelocityInPointsPerSecond;
-(void)clear;
-(void)extractHandMotionForActiveTouches:(XXStruct_DSYOgA*)activeTouches count:(unsigned)count centroid:(CGPoint)centroid;
@end

