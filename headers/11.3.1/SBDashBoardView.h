//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BSUIScrollViewDelegate.h"
#import "SBDashBoardViewTransitionSource.h"

@class NSArray, NSString, SBDashBoardFixedFooterView, SBDashBoardLayoutStrategy, SBDashBoardQuickActionsView, SBDashBoardRegionsDebugView, SBDashBoardScrollModifier, SBDashBoardTeachableMomentsContainerView, SBDashBoardWallpaperEffectView, SBFLockScreenDateView, SBPagedScrollView, SBUIBackgroundView, SBUIProudLockIconView, UIGestureRecognizer, UITapGestureRecognizer, UIVisualEffectView, _UILegibilitySettings;

@interface SBDashBoardView : UIView <BSUIScrollViewDelegate, SBDashBoardViewTransitionSource>
{
    SBUIBackgroundView *_backgroundView;
    SBPagedScrollView *_scrollView;
    UIView *_dateTimeClippingView;
    UIView *_authIndicator;
    UIView *_slideableContentView;
    UIView *_higherSlideableContentView;
    UIVisualEffectView *_dateEffectView;
    CDStruct_7238a68f _transitionContext;
    double _scrollViewStartingXOffset;
    SBDashBoardScrollModifier *_scrollModifier;
    unsigned long long _initialPageIndex;
    _Bool _shouldModifyPageScrolling;
    _Bool _forceDateViewCentered;
    _Bool _dateViewIsVibrant;
    _Bool _legibilitySettingsOverrideVibrancy;
    _Bool _statusBarLegibilityEnabled;
    UIView *_bottomPage;
    id <SBDashBoardViewDelegate> _delegate;
    SBDashBoardLayoutStrategy *_layoutStrategy;
    UIView *_mainPageView;
    SBFLockScreenDateView *_dateView;
    SBDashBoardFixedFooterView *_fixedFooterView;
    SBUIProudLockIconView *_proudLockIconView;
    SBDashBoardTeachableMomentsContainerView *_teachableMomentsContainerView;
    SBDashBoardQuickActionsView *_quickActionsView;
    long long _dateViewPageAlignment;
    UIView *_fakeStatusBar;
    unsigned long long _fakeStatusBarLevel;
    UIVisualEffectView *_statusBarBackgroundView;
    long long _statusBarBackgroundPageAlignment;
    UIGestureRecognizer *_irisGestureRecognizer;
    UITapGestureRecognizer *_quickNoteGestureRecognizer;
    UIView *_modalPresentationView;
    UIView *_wakeEffectView;
    SBDashBoardWallpaperEffectView *_wallpaperEffectView;
    UIView *_tintingView;
    UIView *_referenceViewForBelowPresentationContext;
    _UILegibilitySettings *_legibilitySettings;
    unsigned long long _targetPageIndexForDraggingEnded;
    SBDashBoardRegionsDebugView *_regionsDebugView;
    struct CGPoint _dateViewOffset;
    struct CGPoint _proudLockIconViewOffset;
    struct CGPoint _foregroundViewPositionOffset;
}

- (void).cxx_destruct;
- (void)_addAuthIndicator;
- (void)_addBackgroundView;
- (void)_addDateTimeContainer;
- (void)_addHigherSlideableContentView;
- (void)_addScrollView;
- (void)_addSlideableContentView;
- (void)_addTintingView;
- (CDStruct_7238a68f)_completedTransitionContextForPreviousTransitionContext:(CDStruct_7238a68f)arg1 newTransitionContext:(CDStruct_7238a68f)arg2;
- (CDStruct_7238a68f)_currentTransitionContext;
- (struct CGRect)_dateViewFrameForPageAlignment:(long long)arg1 pageRelativeScrollOffset:(double)arg2 outAlignmentPercent:(double *)arg3;
- (unsigned long long)_indexOfMainPage;
- (void)_layoutAuthIndicator;
- (void)_layoutBottomPage;
- (void)_layoutDateTimeViewClippingView;
- (void)_layoutDateView;
- (void)_layoutFakeStatusBar;
- (void)_layoutFullScreenViews;
- (void)_layoutHigherSlideableContentView;
- (void)_layoutProudLockView;
- (void)_layoutQuickActionsView;
- (void)_layoutStatusBarBackgroundView;
- (void)_layoutTeachableMomentsContainerView;
- (void)_layoutTintingView;
- (void)_layoutWallpaperEffectView;
- (void)_orderSubviews;
- (struct CGRect)_overlayClippingFrame;
- (struct CGPoint)_scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint)arg2 translation:(struct CGPoint)arg3 startPoint:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5 horizontalVelocity:(inout double *)arg6 verticalVelocity:(inout double *)arg7;
- (void)_setDateView:(id)arg1 forTesting:(_Bool)arg2;
- (void)_setupIrisGestureOnScrollView:(_Bool)arg1;
- (void)_setupQuickNoteGestureOnScrollView:(_Bool)arg1;
- (void)_updateLegibility;
- (long long)backgroundStyle;
@property(retain, nonatomic) SBUIBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)beginTransitionToBackgroundStyle:(long long)arg1;
@property(retain, nonatomic) UIView *bottomPage; // @synthesize bottomPage=_bottomPage;
- (void)cancelTransition;
- (void)completeTransitionToBackgroundStyle:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(retain, nonatomic) SBFLockScreenDateView *dateView; // @synthesize dateView=_dateView;
@property(nonatomic) _Bool dateViewIsVibrant; // @synthesize dateViewIsVibrant=_dateViewIsVibrant;
@property(nonatomic) struct CGPoint dateViewOffset; // @synthesize dateViewOffset=_dateViewOffset;
@property(nonatomic) long long dateViewPageAlignment; // @synthesize dateViewPageAlignment=_dateViewPageAlignment;
- (struct CGRect)dateViewPresentationExtentForPageRelativeScrollOffset:(double)arg1;
@property(nonatomic) __weak id <SBDashBoardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didAddSubview:(id)arg1;
@property(retain, nonatomic) UIView *fakeStatusBar; // @synthesize fakeStatusBar=_fakeStatusBar;
@property(nonatomic) unsigned long long fakeStatusBarLevel; // @synthesize fakeStatusBarLevel=_fakeStatusBarLevel;
@property(retain, nonatomic) SBDashBoardFixedFooterView *fixedFooterView; // @synthesize fixedFooterView=_fixedFooterView;
@property(nonatomic) _Bool forceDateViewCentered; // @synthesize forceDateViewCentered=_forceDateViewCentered;
@property(nonatomic) struct CGPoint foregroundViewPositionOffset; // @synthesize foregroundViewPositionOffset=_foregroundViewPositionOffset;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIGestureRecognizer *irisGestureRecognizer; // @synthesize irisGestureRecognizer=_irisGestureRecognizer;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
- (_Bool)isTransitioningBackgroundStyle;
@property(nonatomic) __weak SBDashBoardLayoutStrategy *layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
- (void)layoutSubviews;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) _Bool legibilitySettingsOverrideVibrancy; // @synthesize legibilitySettingsOverrideVibrancy=_legibilitySettingsOverrideVibrancy;
@property(retain, nonatomic) UIView *mainPageView; // @synthesize mainPageView=_mainPageView;
@property(retain, nonatomic) UIView *modalPresentationView; // @synthesize modalPresentationView=_modalPresentationView;
@property(retain, nonatomic) NSArray *pageViews;
@property(readonly, nonatomic) long long participantState;
@property(retain, nonatomic) SBUIProudLockIconView *proudLockIconView; // @synthesize proudLockIconView=_proudLockIconView;
@property(nonatomic) struct CGPoint proudLockIconViewOffset; // @synthesize proudLockIconViewOffset=_proudLockIconViewOffset;
@property(retain, nonatomic) SBDashBoardQuickActionsView *quickActionsView; // @synthesize quickActionsView=_quickActionsView;
@property(retain, nonatomic) UITapGestureRecognizer *quickNoteGestureRecognizer; // @synthesize quickNoteGestureRecognizer=_quickNoteGestureRecognizer;
@property(nonatomic) __weak UIView *referenceViewForBelowPresentationContext; // @synthesize referenceViewForBelowPresentationContext=_referenceViewForBelowPresentationContext;
@property(retain, nonatomic) SBDashBoardRegionsDebugView *regionsDebugView; // @synthesize regionsDebugView=_regionsDebugView;
- (_Bool)resetScrollViewToMainPageAnimated:(_Bool)arg1 withAnimationSettings:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)resetScrollViewToMainPageAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)scrollToPageAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) SBPagedScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1 withContext:(CDStruct_3b09cf25)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginScrolling:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setBackgroundStyle:(long long)arg1;
@property(nonatomic) long long statusBarBackgroundPageAlignment; // @synthesize statusBarBackgroundPageAlignment=_statusBarBackgroundPageAlignment;
@property(retain, nonatomic) UIVisualEffectView *statusBarBackgroundView; // @synthesize statusBarBackgroundView=_statusBarBackgroundView;
@property(nonatomic) _Bool statusBarLegibilityEnabled; // @synthesize statusBarLegibilityEnabled=_statusBarLegibilityEnabled;
@property(nonatomic) unsigned long long targetPageIndexForDraggingEnded; // @synthesize targetPageIndexForDraggingEnded=_targetPageIndexForDraggingEnded;
@property(retain, nonatomic) SBDashBoardTeachableMomentsContainerView *teachableMomentsContainerView; // @synthesize teachableMomentsContainerView=_teachableMomentsContainerView;
@property(retain, nonatomic) UIView *tintingView; // @synthesize tintingView=_tintingView;
@property(retain, nonatomic) UIView *wakeEffectView; // @synthesize wakeEffectView=_wakeEffectView;
@property(retain, nonatomic) SBDashBoardWallpaperEffectView *wallpaperEffectView; // @synthesize wallpaperEffectView=_wallpaperEffectView;
@property(readonly, nonatomic) UIView *slideableContentView; // @synthesize slideableContentView=_slideableContentView;
@property(readonly, nonatomic) CDStruct_7238a68f transitionContext;
- (void)updateBackgroundStyleTransitionProgress:(double)arg1;
- (void)updateUIForAuthenticated:(_Bool)arg1;
- (void)viewControllerDidDisappear;
- (void)viewControllerWillAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

