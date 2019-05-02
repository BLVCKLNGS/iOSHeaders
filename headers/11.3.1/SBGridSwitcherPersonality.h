//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBFluidSwitcherPersonality.h"
#import "_UISettingsKeyObserver.h"

@class NSString, SBAppSwitcherSettings, SBFluidSwitcherViewController;

@interface SBGridSwitcherPersonality : NSObject <_UISettingsKeyObserver, SBFluidSwitcherPersonality>
{
    struct CGPoint _initialTouchOffsetFromCenter;
    SBAppSwitcherSettings *_settings;
    unsigned long long _cachingEnabled;
    struct CGRect _cachedControlCenterFrame;
    struct CGSize _cachedControlCenterLayoutSize;
    SBFluidSwitcherViewController *_switcherViewController;
}

- (void).cxx_destruct;
- (struct CGRect)_adjustedControlCenterFrameForSwitcherBringUp:(struct CGRect)arg1;
- (struct CGRect)_adjustedFrameForSwitcherBringUp:(struct CGRect)arg1 index:(unsigned long long)arg2;
- (void)_applyPrototypeSettingsToConstants;
- (double)_cardCornerRadiusInAppSwitcher;
- (struct CGRect)_cardsRect;
- (double)_cardsSectionActualHeight;
- (double)_cardsSectionNaturalHeight;
- (unsigned long long)_colForIndex:(unsigned long long)arg1;
- (double)_containerToCardsBottomMargin;
- (double)_containerToCardsTopMargin;
- (struct CGRect)_containerViewBounds;
- (struct UIEdgeInsets)_controlCenterEdgeInsets;
- (struct CGRect)_controlCenterFrame;
- (_Bool)_controlCenterIsVerticallyCentered;
- (struct CGRect)_controlCenterLayoutFrame;
- (struct CGSize)_controlCenterLayoutSize;
- (struct CGSize)_controlCenterSize;
- (id)_controlCenterSnapHeights;
- (long long)_currentUnlockedEnvironmentMode;
- (double)_dockHeightForSwipeGesture;
- (double)_effectiveHorizontalSpacing;
- (double)_effectiveVerticalSpacing;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1 withCardSize:(struct CGSize)arg2 mode:(long long)arg3 ignoringScrollOffset:(_Bool)arg4 ignoringGesture:(_Bool)arg5 ignoreInsertionsAndRemovals:(_Bool)arg6;
- (struct CGRect)_frameWithScaleAppliedForIndex:(unsigned long long)arg1 mode:(long long)arg2 ignoringScrollOffset:(_Bool)arg3 ignoreInsertionsAndRemovals:(_Bool)arg4;
- (void)_getActiveGestureFromUnlockedEnvironmentMode:(long long *)arg1 toUnlockedEnvironmentMode:(long long *)arg2;
- (double)_gridScrunchGestureScalingProgress;
- (double)_gridSwipeUpGestureProgressToMaxTranslation;
- (double)_gridSwipeUpGestureScalingProgressForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=_gridSwipeUpGestureTranslation) double gridSwipeUpGestureTranslation;
- (double)_gridSwipeUpPanTranslationForFullTransition;
- (double)_gridSwitcherPageScale;
- (struct CGRect)_homeToSwitcherScaledUpCardsRect;
- (_Bool)_inactiveCardsHidden;
- (_Bool)_isSwipeGestureFromHomeScreen;
- (unsigned long long)_numberOfCols;
- (unsigned long long)_numberOfColsForNumberOfItems:(unsigned long long)arg1;
- (struct CGRect)_offsetCardRect:(struct CGRect)arg1 forSwitcherBringupProgress:(double)arg2 scale:(double)arg3;
- (struct CGRect)_offsetControlCenterRect:(struct CGRect)arg1 forSwitcherBringupProgress:(double)arg2 scale:(double)arg3;
- (double)_opacityConsideringSwipeHomeToSwitcherProgress;
@property(readonly, nonatomic, getter=_progressSwipingHomeToSwitcher) double progressSwipingHomeToSwitcher;
- (_Bool)_requiresSimplifiedTransitionsOverTodayView;
- (struct CGPoint)_restingOffsetForScrollOffset:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (unsigned long long)_rowForIndex:(unsigned long long)arg1;
- (double)_scaleForHomeScreenIconZoom;
- (double)_scaleForIndex:(unsigned long long)arg1 mode:(long long)arg2 ignoringGesture:(_Bool)arg3;
@property(readonly, nonatomic, getter=_scaleForSwipingAppUpToSwitcher) double scaleForSwipingAppUpToSwitcher;
@property(readonly, nonatomic, getter=_scaleForSwipingHomeToSwitcher) double scaleForSwipingHomeToSwitcher;
- (double)_scaleForSwipingUpToSwitcher;
- (struct CGPoint)_scalingAnchorPoint;
@property(readonly, nonatomic, getter=_settings) SBAppSwitcherSettings *settings; // @synthesize settings=_settings;
- (double)_switcherBringupControlCenterSliceWidth;
- (struct CGRect)_transformedRect:(struct CGRect)arg1 forScale:(double)arg2;
- (id)appLayoutForHomeScreenIconZoom;
- (id)appLayoutToScrollToWhenActivatingSwitcher;
- (id)appLayoutUnderWhichToAddDimmingView;
- (double)baseHysteresisForStartingKillGesture;
- (double)cardCornerRadiusForIndex:(unsigned long long)arg1;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (double)containerViewWidthAtGridScale;
- (struct CGPoint)contentOffsetForIndex:(unsigned long long)arg1 ignoreInsertionsAndRemovals:(_Bool)arg2;
- (struct CGSize)contentSize;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)decelerationRate;
- (id)defaultAppLayouts;
- (void)didBeginGesture:(id)arg1;
- (void)didInsertAppLayout:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didRemoveAppLayout:(id)arg1 fromIndex:(unsigned long long)arg2;
- (double)dimmingAlpha;
- (double)dockProgress;
- (struct CGRect)frameForControlCenter;
- (struct CGRect)frameForIndex:(unsigned long long)arg1 mode:(long long)arg2;
- (double)homeScreenAlpha;
- (double)homeScreenBlurProgress;
- (double)homeScreenScale;
- (id)init;
- (struct CGSize)interpageSpacingForPaging;
- (_Bool)isIndexVisible:(unsigned long long)arg1 ignoreInsertionsAndRemovals:(_Bool)arg2;
- (_Bool)itemsOverlapDuringScrolling;
- (id)itemsToKeepInHierarchyDuringAnimationForInsertion:(_Bool)arg1 direction:(unsigned long long)arg2 visibleItemRange:(struct _NSRange)arg3;
- (double)leadingOffsetToOffset:(double)arg1;
- (unsigned long long)movementDirectionForInsertionOrRemovalAtIndex:(unsigned long long)arg1 isInserting:(_Bool)arg2;
- (unsigned long long)numberOfAppLayoutsForWhichToCacheSnapshots;
- (double)opacityForControlCenter;
- (double)opacityForIndex:(unsigned long long)arg1;
- (id)overrideLayoutSettingsForIndex:(unsigned long long)arg1 defaultSettings:(id)arg2;
- (id)overridePositionSettingsForIndex:(unsigned long long)arg1 defaultSettings:(id)arg2;
- (id)overrideScaleSettingsForIndex:(unsigned long long)arg1 defaultSettings:(id)arg2;
- (struct CGPoint)pagingOrigin;
- (void)performUpdatesWithCachedValues:(CDUnknownBlockType)arg1;
- (struct CGPoint)restingOffsetForScrollOffset:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (double)scaleForControlCenter;
- (double)scaleForIndex:(unsigned long long)arg1 mode:(long long)arg2;
- (void)scrollViewKillingProgressUpdated:(double)arg1 ofAppLayout:(id)arg2;
- (_Bool)scrollViewPagingEnabled;
@property(nonatomic) __weak SBFluidSwitcherViewController *switcherViewController; // @synthesize switcherViewController=_switcherViewController;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (_Bool)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1 visibleItemRange:(struct _NSRange)arg2;
- (_Bool)shouldAnimateTransitionForContext:(id)arg1;
- (_Bool)shouldHideStatusBarForActiveGesture;
- (_Bool)shouldInterruptPresentationAndDismiss;
- (_Bool)shouldPreserveScrollPositionForInsertionOrRemovalAtIndex:(unsigned long long)arg1 isInserting:(_Bool)arg2 visibleItemRange:(struct _NSRange)arg3 startingScrollIndex:(unsigned long long *)arg4 finalScrollIndex:(unsigned long long *)arg5 animated:(_Bool)arg6;
- (_Bool)shouldScrollWhenActivatingAppLayoutAtIndex:(unsigned long long)arg1;
- (_Bool)shouldShowControlCenter;
- (_Bool)shouldUseLiveHomeScreenBlurForAllTransitions;
- (_Bool)shouldWaitForLayoutAndStyleUpdatesForTransactionCompletion;
- (double)snapshotScale;
- (double)statusTextHeightForControlCenter;
- (double)switcherCardScale;
- (double)switcherOpacity;
- (id)switcherScrollView;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (id)topMostAppLayout;
- (_Bool)usesExternalAnimatorForDosido;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (double)wallpaperScale;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

