//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDeckSwitcherPersonality.h"

@interface SBReduceMotionDeckSwitcherPersonality : SBDeckSwitcherPersonality
{
}

- (unsigned long long)_activeAppIndex;
- (id)_activeGesture;
- (double)_cardWidth;
- (struct CGPoint)_deckSwipeUpGestureTranslationInView:(id)arg1;
- (_Bool)_forcePressGestureCanBreathe;
- (id)_layoutContext;
- (double)_leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 stackedProgress:(double)arg3 scrollProgress:(double)arg4 ignoreInsertionsAndRemovals:(_Bool)arg5;
- (double)_opacityForIndex:(unsigned long long)arg1 stackedProgress:(double)arg2 scrollProgress:(double)arg3 ignoringInactiveCardsHidden:(_Bool)arg4 ignoringVisibleItemContainers:(_Bool)arg5;
- (double)_perCardAdditionalScaleCoefficient;
- (double)_scaleForInactiveCardsOffscreenForFlyIn;
- (double)_scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 stackedProgress:(double)arg3 frameOrigin:(double)arg4 ignoreInsertionsAndRemovals:(_Bool)arg5;
- (double)_scrollProgressForIndex:(unsigned long long)arg1 ignoreInsertionsAndRemovals:(_Bool)arg2;
- (_Bool)_shouldPositionInactiveCardsOffscreenForFlyIn;
- (double)_titleOpacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (struct CGPoint)adjustedOffsetForOffset:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 startPoint:(struct CGPoint)arg3 locationInView:(struct CGPoint)arg4 horizontalVelocity:(inout double *)arg5 verticalVelocity:(inout double *)arg6;
- (double)homeScreenAlpha;
- (double)homeScreenBlurProgress;
- (double)homeScreenScale;
- (struct CGSize)interpageSpacingForPaging;
- (_Bool)isTranslationPastDistanceThresholdToUnconditionallyGoHome:(double)arg1;
- (id)overrideLayoutSettingsForIndex:(unsigned long long)arg1 defaultSettings:(id)arg2;
- (struct CGPoint)pagingOrigin;
- (_Bool)scrollViewPagingEnabled;
- (_Bool)shouldAnimateTransitionForContext:(id)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)wallpaperScale;

@end

