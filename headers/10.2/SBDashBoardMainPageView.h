//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewBase.h"

#import "CAAnimationDelegate.h"

@class NSString, SBDashBoardVibrantWallpaperButton, SBSlideUpAppGrabberView, SBUICallToActionLabel, SBWallpaperEffectView, UIView, UIView<SBUILegibility>, _UILegibilitySettings;

@interface SBDashBoardMainPageView : SBDashBoardViewBase <CAAnimationDelegate>
{
    _UILegibilitySettings *_legibilitySettings;
    SBWallpaperEffectView *_slideUpAppGrabberBackgroundView;
    _Bool _logoutHugCorner;
    CDUnknownBlockType _callToActionShakeCompletion;
    UIView *_callToActionShakeContainerParentView;
    UIView *_callToActionShakeContainer;
    SBUICallToActionLabel *_callToActionLabel;
    _Bool _slideUpAppGrabberViewVisible;
    _Bool _fakeWallpaperVisible;
    UIView<SBUILegibility> *_statusTextView;
    SBDashBoardVibrantWallpaperButton *_logoutButtonView;
    SBWallpaperEffectView *_wallpaperEffectView;
    SBSlideUpAppGrabberView *_slideUpAppGrabberView;
}

@property(nonatomic) _Bool fakeWallpaperVisible; // @synthesize fakeWallpaperVisible=_fakeWallpaperVisible;
@property(nonatomic) _Bool slideUpAppGrabberViewVisible; // @synthesize slideUpAppGrabberViewVisible=_slideUpAppGrabberViewVisible;
@property(retain, nonatomic) SBSlideUpAppGrabberView *slideUpAppGrabberView; // @synthesize slideUpAppGrabberView=_slideUpAppGrabberView;
@property(retain, nonatomic) SBWallpaperEffectView *wallpaperEffectView; // @synthesize wallpaperEffectView=_wallpaperEffectView;
@property(retain, nonatomic) SBDashBoardVibrantWallpaperButton *logoutButtonView; // @synthesize logoutButtonView=_logoutButtonView;
@property(retain, nonatomic) UIView<SBUILegibility> *statusTextView; // @synthesize statusTextView=_statusTextView;
@property(retain, nonatomic) SBUICallToActionLabel *callToActionLabel; // @synthesize callToActionLabel=_callToActionLabel;
- (void).cxx_destruct;
- (struct UIEdgeInsets)_logoutButtonInsets;
- (void)_invokeCallToActionShakeCompletionIfNecessary;
- (void)_updateCallToActionLegibility;
- (void)_updateSlideToAppGrabberBackgroundView;
- (void)_updateSlideUpAppGrabberViewForLegibilitySettings;
- (void)_updateLogoutButtonForLegibilitySettings;
- (void)_updateStatusTextViewForLegibilitySettings;
- (id)_legibilityPrototypeSettings;
- (void)_layoutSlideUpAppGrabberView;
- (void)_layoutCallToActionLabel;
- (void)_layoutLogoutButtonView;
- (void)_layoutStatusTextView;
- (void)_layoutWallpaperEffectView;
- (id)presentationRegions;
- (void)layoutSubviews;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)shakeCallToActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateForPresentation:(id)arg1;
- (void)updateForLegibilitySettings:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

