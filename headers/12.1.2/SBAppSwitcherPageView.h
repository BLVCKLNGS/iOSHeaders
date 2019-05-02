//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "_UISettingsKeyObserver.h"

@class NSString, SBAppSwitcherSettings, SBAppSwitcherSoftOutlineShadowView, UIView<SBAppSwitcherPageContentView>;

@interface SBAppSwitcherPageView : UIView <_UISettingsKeyObserver>
{
    UIView *_hitTestBlocker;
    UIView *_dimmingView;
    UIView *_viewClippingView;
    UIView<SBAppSwitcherPageContentView> *_view;
    UIView *_overlayClippingView;
    UIView *_overlayView;
    long long _shadowStyle;
    double _shadowAlpha;
    double _cornerRadius;
    _Bool _isHighlighted;
    _Bool _isShadowHighlighted;
    SBAppSwitcherSoftOutlineShadowView *_shadowView;
    SBAppSwitcherSettings *_settings;
    long long _orientation;
    _Bool _shouldClipContentView;
    double _darkeningAlpha;
    double _killingDarkeningAlpha;
    struct CGSize _overlayViewSize;
    struct CGSize _fullyPresentedSize;
    struct CGRect _contentClippingFrame;
}

@property(nonatomic) double killingDarkeningAlpha; // @synthesize killingDarkeningAlpha=_killingDarkeningAlpha;
@property(nonatomic) double darkeningAlpha; // @synthesize darkeningAlpha=_darkeningAlpha;
@property(nonatomic) struct CGSize fullyPresentedSize; // @synthesize fullyPresentedSize=_fullyPresentedSize;
@property(nonatomic) struct CGSize overlayViewSize; // @synthesize overlayViewSize=_overlayViewSize;
@property(nonatomic) struct CGRect contentClippingFrame; // @synthesize contentClippingFrame=_contentClippingFrame;
@property(nonatomic) _Bool shouldClipContentView; // @synthesize shouldClipContentView=_shouldClipContentView;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(nonatomic) long long shadowStyle; // @synthesize shadowStyle=_shadowStyle;
@property(retain, nonatomic) UIView *overlay; // @synthesize overlay=_overlayView;
@property(retain, nonatomic) UIView<SBAppSwitcherPageContentView> *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGRect)_viewFrame;
- (void)_updateCornerRadius;
- (void)_setupShadowImage;
- (void)_updateShadow;
- (void)transitionDidEnd:(_Bool)arg1 forPresentation:(_Bool)arg2 transitionRequest:(id)arg3;
- (void)viewDismissing:(id)arg1 forTransitionRequest:(id)arg2;
- (void)viewPresenting:(id)arg1 forTransitionRequest:(id)arg2;
- (void)invalidate;
@property(nonatomic, getter=isShadowHighlighted) _Bool shadowHighlighted;
- (void)_updateDimmingViewAlpha;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) double contentAlpha;
@property(nonatomic) double overlayAlpha;
- (void)setOverlay:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool blocksTouches;
- (void)setVisible:(_Bool)arg1;
- (void)setActive:(_Bool)arg1;
- (void)setView:(id)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_orderSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

