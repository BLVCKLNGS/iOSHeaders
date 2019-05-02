//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBAppViewHostRequester.h"
#import "SBDeckSwitcherItemContainerDelegate.h"
#import "SBDeckSwitcherPageViewProviderDelegate.h"
#import "SBMainAppSwitcherContentViewControlling.h"
#import "SBSwitcherAppSuggestionViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSArray, NSCountedSet, NSMutableArray, NSMutableDictionary, NSString, SBAppSwitcherScrollView, SBAppSwitcherSettings, SBAppView, SBBestAppSuggestion, SBDeckSwitcherPageViewProvider, SBDisplayItem, SBMainDisplayLayoutState, SBOrientationTransformWrapperView, SBSwitcherAppSuggestionViewController, SBWallpaperEffectView, SBWorkspaceTransitionRequest, UIView;

@interface SBDeckSwitcherViewController : UIViewController <SBDeckSwitcherPageViewProviderDelegate, SBAppViewHostRequester, UIScrollViewDelegate, _UISettingsKeyObserver, SBSwitcherAppSuggestionViewControllerDelegate, SBDeckSwitcherItemContainerDelegate, SBMainAppSwitcherContentViewControlling>
{
    id <SBMainAppSwitcherContentViewControllerDelegate> _delegate;
    NSMutableArray *_displayItems;
    SBDisplayItem *_returnToDisplayItem;
    SBDisplayItem *_returnToSideDisplayItem;
    SBDisplayItem *_initialDisplayItem;
    SBMainDisplayLayoutState *_initialLayoutState;
    SBWallpaperEffectView *_wallpaperEffectView;
    SBOrientationTransformWrapperView *_wallpaperWrapperView;
    SBAppSwitcherScrollView *_scrollView;
    UIView *_backgroundDarkeningView;
    NSMutableDictionary *_visibleItemContainers;
    double _topmostItemMinimumFrameXOrigin;
    double _topmostItemMinimumScale;
    struct _NSRange _visibleItemRange;
    struct CGPoint _scrollViewLastContentOffset;
    _Bool _scrollViewLastScrolledForward;
    SBSwitcherAppSuggestionViewController *_appSuggestionViewController;
    SBDeckSwitcherPageViewProvider *_pageViewProvider;
    CDStruct_efa48ab2 _transitionParameters;
    _Bool _transitionInProgress;
    _Bool _transitionPresenting;
    _Bool _transitionInteractive;
    _Bool _transitionFinishingAfterBeingInteractive;
    _Bool _transitionDidFinishDismissing;
    _Bool _didSendViewPresentingDismissing;
    SBWorkspaceTransitionRequest *_transitionRequest;
    _Bool _shouldHideTitlesAndIconsForInteraction;
    double _initialTitleAndIconOpacityTransitionProgress;
    SBAppView *_hideSideAppView;
    NSMutableArray *_blocksToPerformWhenScrollingEnds;
    NSMutableDictionary *_insertionRemovalStatus;
    NSCountedSet *_suppressBackgroundReasons;
    _Bool _configuredScrollviewForThisPresentation;
    SBAppSwitcherSettings *_settings;
    _Bool _isScrolling;
    long long _grabbedDraggingIndex;
    double _inputContentOffsetAdjustmentForIndexChange;
    double _outputContentOffsetAdjustmentForIndexChange;
    struct CGPoint _start;
    struct CGPoint _originalLocationInView;
    _Bool _invalidated;
    _Bool _isWallpaperConfigured;
}

+ (double)snapshotScale;
@property(nonatomic) __weak id <SBMainAppSwitcherContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *displayItems; // @synthesize displayItems=_displayItems;
@property(retain, nonatomic, setter=_setInitialLayoutState:) SBMainDisplayLayoutState *_initialLayoutState; // @synthesize _initialLayoutState;
@property(copy, nonatomic, setter=_setInitialDisplayItem:) SBDisplayItem *_initialDisplayItem; // @synthesize _initialDisplayItem;
@property(copy, nonatomic, setter=_setReturnToSideDisplayItem:) SBDisplayItem *_returnToSideDisplayItem; // @synthesize _returnToSideDisplayItem;
@property(copy, nonatomic, setter=_setReturnToDisplayItem:) SBDisplayItem *_returnToDisplayItem; // @synthesize _returnToDisplayItem;
- (void).cxx_destruct;
- (long long)appViewRequesterPriority:(id)arg1;
- (id)appViewRequesterIdentifier:(id)arg1;
- (void)_applyPrototypeSettingsToConstants;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (double)minimumVerticalTranslationForKillingOfContainer:(id)arg1;
- (void)scrollViewKillingProgressUpdated:(double)arg1 ofContainer:(id)arg2;
- (struct CGRect)frameForPageViewOfContainer:(id)arg1 fullyPresented:(_Bool)arg2;
- (_Bool)shouldShowIconAndLabelOfContainer:(id)arg1;
- (void)selectedDisplayItemOfContainer:(id)arg1;
- (_Bool)canSelectDisplayItemOfContainer:(id)arg1 numberOfTaps:(long long)arg2;
- (void)killDisplayItemOfContainer:(id)arg1 withVelocity:(double)arg2;
- (_Bool)isDisplayItemOfContainerRemovable:(id)arg1;
- (id)containerViewControllerForPageViewFromProvider:(id)arg1;
- (struct CGSize)contentSizeForDisplayItem:(id)arg1 fromProvider:(id)arg2;
- (struct CGSize)sizeForDisplayItem:(id)arg1 fromProvider:(id)arg2;
- (id)initialLayoutStateForPageViewFromProvider:(id)arg1;
- (id)nextDisplayItemForInteractiveTransitionForPageViewFromProvider:(id)arg1;
- (id)initialDisplayItemForPageViewFromProvider:(id)arg1;
- (long long)orientationForPageViewFromProvider:(id)arg1;
- (struct CGPoint)_adjustedOffsetForIndex:(long long)arg1 offset:(struct CGPoint)arg2 start:(struct CGPoint)arg3 originalLocationInView:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5;
- (struct CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint)arg2 translation:(struct CGPoint)arg3 startPoint:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5 horizontalVelocity:(double *)arg6 verticalVelocity:(double *)arg7;
- (struct CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint)arg2 translation:(struct CGPoint)arg3 startPoint:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5;
- (double)_scaleTransformedXOrigin:(double)arg1 scrollProgress:(double)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)_cancelScrolling;
- (_Bool)_scrollViewThinksItsScrolling;
- (void)setScrolling:(_Bool)arg1;
- (double)_killGestureHysteresis;
- (id)_itemContainerForDisplayItem:(id)arg1;
- (_Bool)_isReadyForScrollViewLayout;
- (id)_visibleItemContainers;
- (struct _NSRange)_visibleItemRange;
- (double)_transitionProgress;
- (double)_insertionRemovalProgressForDisplayItem:(id)arg1;
- (id)_scrollView;
- (id)_displayItems;
- (_Bool)_shouldAdjustScrollViewTracking;
- (_Bool)_shouldShowIconAndTitleInItemContainers;
- (double)_preferredVisibleMarginForTopPage;
- (void)_didRemoveVisibleItemContainerForDisplayItem:(id)arg1;
- (void)_didAddVisibleItemContainer:(id)arg1 forDisplayItem:(id)arg2;
- (_Bool)_shouldUseDepth;
- (id)_animationFactoryForWallpaper;
- (_Bool)_shouldScrollForDismissalToItem:(id)arg1;
- (_Bool)_shouldFadeInToRevealSideAppForDismissal;
- (id)_animationSettingsForHidingSideAppForPresentation;
- (id)_animationSettingsForRevealingSideAppForDismissal;
- (void)_animateDismissalWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_animatePresentationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (double)_titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)_titleOpacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)_titleOpacityForIndex:(unsigned long long)arg1;
- (double)_opacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)_opacityForIndex:(unsigned long long)arg1;
- (double)_blurForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)_blurForIndex:(unsigned long long)arg1;
- (void)_applyVisibleMarginToItemContainer:(id)arg1;
- (_Bool)_priorIndex:(long long)arg1 fullyObscuresCardForItemContainer:(id)arg2;
- (void)_cleanupDisappearedItemContainers;
- (void)_applyStyleToItemContainer:(id)arg1 forceRealBlur:(_Bool)arg2;
- (void)_applyStyleToItemContainer:(id)arg1;
- (void)_applyStyleToVisibleItemContainers;
- (struct CGSize)_contentSizeForPageViewOfDisplayItem:(id)arg1;
- (struct CGSize)_sizeForPageViewOfDisplayItem:(id)arg1 progressPresented:(double)arg2;
- (void)_setNormalizedScrollProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (double)_normalizedScrollProgress;
- (double)_desiredXOriginForQuantizedTopPage;
- (void)_setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateScrollViewContentOffsetToCenterIndex:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateContentSizePreservingScrollPositionOfPriorIndex:(unsigned long long)arg1 subsequentIndex:(unsigned long long)arg2 acrossMutation:(CDUnknownBlockType)arg3;
- (void)_updateContentSizePreservingScrollPositionOfDisplayItem:(id)arg1 atOriginalIndex:(unsigned long long)arg2 acrossMutation:(CDUnknownBlockType)arg3;
- (void)_updateScrollViewFrameAndContentSize;
- (double)_contentSizeDeltaForItemDeletion;
- (struct CGSize)_scrollViewContentSizeForDisplayItemCount:(unsigned long long)arg1;
- (_Bool)_isAboveTransitioningItemDuringDismissalAfterInteractivePresentationAndWillEndUpOffscreen:(id)arg1;
- (_Bool)_isAboveTransitioningItemDuringDismissalAfterInteractivePresentation:(id)arg1;
- (_Bool)_isAboveTransitioningItemDuringPresentationAndWillEndUpOffscreen:(id)arg1;
- (_Bool)_isAboveTransitioningItemDuringPresentation:(id)arg1;
- (_Bool)_displayItemWantsToBeKeptInViewHierarchy:(id)arg1;
- (id)_topVisibleItem;
- (_Bool)_isItemTransitioning:(id)arg1;
- (_Bool)_isIndexTransitioning:(unsigned long long)arg1;
- (_Bool)_isIndexVisible:(unsigned long long)arg1;
- (_Bool)_isItemVisible:(id)arg1;
- (void)_removeVisibleItemContainerForDisplayItem:(id)arg1;
- (void)_updateVisibleItems;
- (struct CGAffineTransform)_transformForIndex:(unsigned long long)arg1 progressPresented:(double)arg2 scrollProgress:(double)arg3;
- (double)_scaleForTransformForIndex:(unsigned long long)arg1 progressPresented:(double)arg2 scrollProgress:(double)arg3;
- (double)_scaleForPresentedProgress:(double)arg1;
- (struct CGAffineTransform)_transformForIndex:(unsigned long long)arg1;
- (double)_scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 progressPresented:(double)arg3 frameOrigin:(double)arg4 ignoringScrollOffset:(_Bool)arg5;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 transitionParameters:(CDStruct_efa48ab2)arg3 scrollProgress:(double)arg4 ignoringScrollOffset:(_Bool)arg5 ignoringKillingAdjustments:(_Bool)arg6 ignoringPinning:(_Bool)arg7;
- (double)_leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 transitionParameters:(CDStruct_efa48ab2)arg3 scrollProgress:(double)arg4 ignoringKillingAdjustments:(_Bool)arg5;
- (double)_scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 depth:(double)arg3 ignoringKillOffset:(_Bool)arg4;
- (double)_depthForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3 ignoringKillOffset:(_Bool)arg4;
- (double)_effectiveInsertionRemovalSlideInProgressForIndex:(unsigned long long)arg1;
- (double)_effectiveIndexForIndex:(unsigned long long)arg1;
- (struct CGRect)_scaleTransformedFrameForIndex:(unsigned long long)arg1;
- (struct CGRect)_scaleTransformedFrameForIndex:(unsigned long long)arg1 withUntransformedFrame:(struct CGRect)arg2 scrollProgress:(double)arg3;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1;
- (void)_ensureCardSubviewOrdering;
- (void)viewWillLayoutSubviews;
- (void)_layoutDisplayItem:(id)arg1;
- (void)_layoutDisplayItem:(id)arg1 withZoomScale:(double)arg2;
- (void)_getItemToKeepStill:(id *)arg1 andDirection:(unsigned long long *)arg2 whenRemovingItem:(id)arg3;
- (void)_getIndiciesAndDirectionToPreserveScrollPositionWhenInsertingAtIndex:(unsigned long long)arg1 prior:(unsigned long long *)arg2 subsequent:(unsigned long long *)arg3 direction:(unsigned long long *)arg4 animated:(_Bool)arg5;
- (id)_insertionRemovalSlideAnimation;
- (id)_insertingOrRemovingDisplayItems;
- (void)_endInsertionOrRemovalOfDisplayItem:(id)arg1;
- (CDStruct_00a825b0)_insertionRemovalStatusForDisplayItem:(id)arg1;
- (void)_updateProgressOfInsertingOrRemovingDisplayItem:(id)arg1 progress:(double)arg2;
- (void)_beginInsertionOrRemovalOfDisplayItem:(id)arg1 direction:(unsigned long long)arg2 style:(unsigned long long)arg3 progress:(double)arg4;
- (long long)_topIndexForLocationInScrollView:(struct CGPoint)arg1;
- (unsigned long long)_indexForPresentationOrDismissalIsPresenting:(_Bool)arg1;
- (void)_sendViewDismissingToPageViewsForTransitionRequest:(id)arg1;
- (void)_sendViewPresentingToPageViewsForTransitionRequest:(id)arg1;
- (void)endTransitionWithSuccess:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endInteractionWithCommitment:(_Bool)arg1;
- (id)nextDisplayItem;
- (void)setTransitionParameters:(CDStruct_efa48ab2)arg1;
- (void)startInteractiveTransition:(_Bool)arg1 presenting:(_Bool)arg2 withRequest:(id)arg3;
- (_Bool)_isDismissing;
- (id)pageForDisplayItem:(id)arg1;
- (void)_revealSideAppForDismissalWithTransitionRequest:(id)arg1;
- (void)_unhostSideApp;
- (void)_hideSideAppForPresentation;
- (void)_cleanupWallpaper;
- (void)_animateWallpaperDismissal;
- (void)_animateWallpaperPresentationForTransitionRequest:(id)arg1;
- (void)_minimizeScrollDistanceForDismissalToItem:(id)arg1;
- (void)animateDismissalToDisplayItem:(id)arg1 forTransitionRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)animatePresentationForTransitionRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)orientationForSuggestionViewController:(id)arg1;
- (void)suggestionViewController:(id)arg1 activatedSuggestion:(id)arg2;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
- (void)replaceDisplayItem:(id)arg1 withDisplayItem:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeDisplayItem:(id)arg1 forReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertDisplayItem:(id)arg1 atIndex:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopSuppressingBackgroundForReason:(id)arg1;
- (void)suppressBackgroundForReason:(id)arg1;
- (_Bool)hasInteractiveContentAtBottomOfScreen;
- (void)invalidate;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

