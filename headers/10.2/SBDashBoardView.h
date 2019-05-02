//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertView.h"

#import "BSUIScrollViewDelegate.h"
#import "SBDashBoardBackgroundStyleTransitioning.h"
#import "SBDashBoardViewTransitionSource.h"

@class NSArray, NSString, SBDashBoardBackgroundView, SBDashBoardPageControl, SBDashBoardRegionsDebugView, SBDashBoardScrollModifier, SBDashBoardWallpaperEffectView, SBFLockScreenDateView, SBPagedScrollView, UIGestureRecognizer, UIView, UIVisualEffectView, _UILegibilitySettings;

@interface SBDashBoardView : SBAlertView <BSUIScrollViewDelegate, SBDashBoardBackgroundStyleTransitioning, SBDashBoardViewTransitionSource>
{
    SBDashBoardBackgroundView *_backgroundView;
    SBPagedScrollView *_scrollView;
    UIView *_dateTimeClippingView;
    UIView *_authIndicator;
    UIView *_slideableContentView;
    UIVisualEffectView *_dateEffectView;
    CDStruct_7238a68f _transitionContext;
    double _scrollViewStartingXOffset;
    SBDashBoardScrollModifier *_scrollModifier;
    unsigned long long _initialPageIndex;
    _Bool _forceDateViewCentered;
    _Bool _dateViewIsVibrant;
    _Bool _legibilitySettingsOverrideVibrancy;
    _Bool _statusBarLegibilityEnabled;
    UIView *_bottomPage;
    id <SBDashBoardViewDelegate> _delegate;
    UIView *_mainPageView;
    SBDashBoardPageControl *_pageControl;
    SBFLockScreenDateView *_dateView;
    long long _dateViewPageAlignment;
    UIView *_fakeStatusBarView;
    unsigned long long _fakeStatusBarLevel;
    UIGestureRecognizer *_irisGestureRecognizer;
    UIView *_modalPresentationView;
    SBDashBoardWallpaperEffectView *_wallpaperEffectView;
    UIView *_tintingView;
    UIView *_slideUpToAppView;
    _UILegibilitySettings *_legibilitySettings;
    unsigned long long _targetPageIndexForDraggingEnded;
    SBDashBoardRegionsDebugView *_regionsDebugView;
    struct CGPoint _dateViewOffset;
    struct CGPoint _foregroundViewPositionOffset;
}

@property(retain, nonatomic) SBDashBoardRegionsDebugView *regionsDebugView; // @synthesize regionsDebugView=_regionsDebugView;
@property(nonatomic) unsigned long long targetPageIndexForDraggingEnded; // @synthesize targetPageIndexForDraggingEnded=_targetPageIndexForDraggingEnded;
@property(nonatomic) _Bool statusBarLegibilityEnabled; // @synthesize statusBarLegibilityEnabled=_statusBarLegibilityEnabled;
@property(nonatomic) _Bool legibilitySettingsOverrideVibrancy; // @synthesize legibilitySettingsOverrideVibrancy=_legibilitySettingsOverrideVibrancy;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) struct CGPoint foregroundViewPositionOffset; // @synthesize foregroundViewPositionOffset=_foregroundViewPositionOffset;
@property(retain, nonatomic) UIView *slideUpToAppView; // @synthesize slideUpToAppView=_slideUpToAppView;
@property(retain, nonatomic) SBDashBoardBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *tintingView; // @synthesize tintingView=_tintingView;
@property(retain, nonatomic) SBDashBoardWallpaperEffectView *wallpaperEffectView; // @synthesize wallpaperEffectView=_wallpaperEffectView;
@property(retain, nonatomic) UIView *modalPresentationView; // @synthesize modalPresentationView=_modalPresentationView;
@property(readonly, nonatomic) UIView *slideableContentView; // @synthesize slideableContentView=_slideableContentView;
@property(retain, nonatomic) UIGestureRecognizer *irisGestureRecognizer; // @synthesize irisGestureRecognizer=_irisGestureRecognizer;
@property(nonatomic) unsigned long long fakeStatusBarLevel; // @synthesize fakeStatusBarLevel=_fakeStatusBarLevel;
@property(retain, nonatomic) UIView *fakeStatusBarView; // @synthesize fakeStatusBarView=_fakeStatusBarView;
@property(nonatomic) _Bool dateViewIsVibrant; // @synthesize dateViewIsVibrant=_dateViewIsVibrant;
@property(nonatomic) _Bool forceDateViewCentered; // @synthesize forceDateViewCentered=_forceDateViewCentered;
@property(nonatomic) long long dateViewPageAlignment; // @synthesize dateViewPageAlignment=_dateViewPageAlignment;
@property(nonatomic) struct CGPoint dateViewOffset; // @synthesize dateViewOffset=_dateViewOffset;
@property(retain, nonatomic) SBFLockScreenDateView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) SBDashBoardPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIView *mainPageView; // @synthesize mainPageView=_mainPageView;
@property(retain, nonatomic) SBPagedScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <SBDashBoardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *bottomPage; // @synthesize bottomPage=_bottomPage;
- (void).cxx_destruct;
- (void)_setupIrisGestureOnScrollView:(_Bool)arg1;
- (void)_updateLegibility;
- (unsigned long long)_indexOfMainPage;
- (CDStruct_7238a68f)_completedTransitionContextForPreviousTransitionContext:(CDStruct_7238a68f)arg1 newTransitionContext:(CDStruct_7238a68f)arg2;
- (CDStruct_7238a68f)_currentTransitionContext;
- (void)_addTintingView;
- (void)_addAuthIndicator;
- (void)_addDateTimeContainer;
- (void)_addPageControl;
- (void)_addScrollView;
- (void)_addSlideableContentView;
- (void)_addBackgroundView;
- (void)_orderSubviews;
- (void)_layoutBottomPage;
- (void)_layoutAuthIndicator;
- (void)_layoutPageControl;
- (void)_layoutFakeStatusBarView;
- (struct CGRect)_dateViewFrameForPageAlignment:(long long)arg1 pageRelativeScrollOffset:(double)arg2 outAlignmentPercent:(double *)arg3;
- (void)_layoutDateView;
- (void)_layoutTintingView;
- (void)_layoutWallpaperEffectView;
- (void)_layoutDateTimeViewClippingView;
- (struct CGRect)_overlayClippingFrame;
- (void)_layoutFullScreenViews;
- (void)_setDateView:(id)arg1 forTesting:(_Bool)arg2;
- (void)completeTransitionToBackgroundStyle:(long long)arg1;
- (void)updateBackgroundStyleTransitionProgress:(double)arg1;
- (void)beginTransitionToBackgroundStyle:(long long)arg1;
@property(nonatomic) long long backgroundStyle;
@property(readonly, nonatomic, getter=isTransitioningBackgroundStyle) _Bool transitioningBackgroundStyle;
- (void)cancelTransition;
@property(readonly, nonatomic) CDStruct_7238a68f transitionContext;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1 withContext:(CDStruct_3b09cf25)arg2;
- (void)scrollViewWillBeginScrolling:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint)arg2 translation:(struct CGPoint)arg3 startPoint:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5 horizontalVelocity:(inout double *)arg6 verticalVelocity:(inout double *)arg7;
- (void)layoutSubviews;
- (void)didAddSubview:(id)arg1;
- (struct CGRect)dateViewPresentationExtentForPageRelativeScrollOffset:(double)arg1;
- (void)invalidate;
- (void)updateUIForAuthenticated:(_Bool)arg1;
- (void)updatePageControl;
- (_Bool)scrollToPageAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)resetScrollViewToMainPageAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSArray *pageViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

