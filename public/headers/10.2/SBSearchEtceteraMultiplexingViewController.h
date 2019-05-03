//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMultiplexingViewController.h"

#import "SBReachabilityObserver.h"
#import "SBSearchEtceteraIsolatedViewControllerAppearanceDelegate.h"
#import "SPUISearchViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "WGWidgetGroupViewControllerDelegate.h"

@class FBDisplayLayoutElement, NSString, UIGestureRecognizer, UIView;

@interface SBSearchEtceteraMultiplexingViewController : SBMultiplexingViewController <SBReachabilityObserver, UIGestureRecognizerDelegate, SPUISearchViewControllerDelegate, WGWidgetGroupViewControllerDelegate, SBSearchEtceteraIsolatedViewControllerAppearanceDelegate>
{
    _Bool _reachabilityEnabled;
    UIView *_reachabilityContainerView;
    UIGestureRecognizer *_dismissReachabilityGesture;
    unsigned long long _style;
    unsigned long long _supportedModes;
    unsigned long long _currentMode;
    FBDisplayLayoutElement *_displayLayoutElement;
    _Bool _transitioningModes;
    id <SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate> _delegate;
    unsigned long long _searchViewPresentationSourceForNextTransition;
    unsigned long long _searchViewDismissalReasonForNextTransition;
}

@property(nonatomic) unsigned long long searchViewDismissalReasonForNextTransition; // @synthesize searchViewDismissalReasonForNextTransition=_searchViewDismissalReasonForNextTransition;
@property(nonatomic) unsigned long long searchViewPresentationSourceForNextTransition; // @synthesize searchViewPresentationSourceForNextTransition=_searchViewPresentationSourceForNextTransition;
@property(nonatomic) __weak id <SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (_Bool)_shouldExcludeWindowFromSnapshot:(id)arg1;
- (id)_screenSnapshotViewWithRect:(struct CGRect)arg1;
- (_Bool)isShowingSpotlight;
- (void)_exitSpotlightForReason:(unsigned long long)arg1 animated:(_Bool)arg2 animationBegan:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_exitSpotlightForReason:(unsigned long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_exitSpotlightForReason:(unsigned long long)arg1;
- (void)_enterSpotlightAnimated:(_Bool)arg1 presentationSource:(unsigned long long)arg2 animationBegan:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_enterSpotlightAnimated:(_Bool)arg1 animationBegan:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_enterSpotlightAnimated:(_Bool)arg1 presentationSource:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_enterSpotlightAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (double)_totalDistanceForBlurTransition;
- (void)setBlurProgress:(double)arg1 animated:(_Bool)arg2;
- (void)setSeparatorVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setCurrentMode:(unsigned long long)arg1;
- (id)_forwardableIsolatedController;
- (long long)requestedWallpaperVariantForWidgetBackgroundViews;
- (_Bool)displaysWidgets;
- (_Bool)searchEtceteraIsolatedViewController:(id)arg1 shouldDelaySearchWillDismissWithReason:(unsigned long long)arg2;
- (_Bool)searchEtceteraIsolatedViewController:(id)arg1 shouldPresentSearchFromSource:(unsigned long long)arg2;
- (void)searchEtceteraIsolatedViewController:(id)arg1 didChangeToMode:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)searchEtceteraIsolatedViewController:(id)arg1 changingToMode:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)searchEtceteraIsolatedViewController:(id)arg1 willChangeToMode:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)customSnapshotView;
- (void)willDeactivateHosting;
- (void)willActivateHosting;
- (void)dismissSearchViewWithReason:(unsigned long long)arg1;
- (void)searchFieldDidFocus;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)_shouldWidgetsBlurContent;
- (id)displayLayoutElementIdentifier;
- (void)didChangeToMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)changeToMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)willChangeToMode:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) unsigned long long presentationMode;
@property(readonly, nonatomic) unsigned long long currentMode;
@property(readonly, nonatomic) unsigned long long supportedModes;
- (id)init;
- (unsigned long long)initialPresentationMode;
- (unsigned long long)defaultSearchViewDismissalReason;
- (unsigned long long)defaultSearchViewPresentationSource;
- (id)initWithStyle:(unsigned long long)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)reachabilityWillDisable;
- (void)reachabilityWillEnableWithOffset:(struct CGPoint)arg1;
- (_Bool)_shouldRespondToReachability;
- (void)cancelReachability;
- (void)dismissReachability:(id)arg1;
- (void)handleCancelReachabilityGesture;
- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityModeActivated;
- (void)_performReachabilityTransactionForActivate:(_Bool)arg1 immediately:(_Bool)arg2;
- (_Bool)reachabilitySupported;
- (_Bool)reachabilityModeActive;
- (id)_effectiveReachabilityGestureView;
- (id)_effectiveReachabilityContainerView;
- (void)setTextSelectionReachabilityOffset:(struct CGPoint)arg1 activating:(_Bool)arg2;
- (void)notifyTextSelectionViewDidTranslateForReachability;
- (void)notifyTextSelectionViewWillTranslateForReachability;
@property(readonly, retain, nonatomic) UIGestureRecognizer *dismissReachabilityGesture;
@property(nonatomic, getter=isReachabilityEnabled) _Bool reachabilityEnabled;
@property(nonatomic) __weak UIView *reachabilityContainerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
