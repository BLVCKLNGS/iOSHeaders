//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardPageViewBase.h"

#import "CAAnimationDelegate.h"

@class NSString, SBDashBoardVibrantWallpaperButton, SBWallpaperEffectView, _UILegibilitySettings;

@interface SBDashBoardMainPageView : SBDashBoardPageViewBase <CAAnimationDelegate>
{
    _UILegibilitySettings *_legibilitySettings;
    _Bool _logoutHugCorner;
    _Bool _fakeWallpaperVisible;
    SBDashBoardVibrantWallpaperButton *_logoutButtonView;
    SBWallpaperEffectView *_wallpaperEffectView;
}

- (void).cxx_destruct;
- (void)_layoutLogoutButtonView;
- (void)_layoutWallpaperEffectView;
- (id)_legibilityPrototypeSettings;
- (struct UIEdgeInsets)_logoutButtonInsets;
- (void)_updateLogoutButtonForLegibilitySettings;
@property(nonatomic) _Bool fakeWallpaperVisible; // @synthesize fakeWallpaperVisible=_fakeWallpaperVisible;
- (void)layoutSubviews;
@property(retain, nonatomic) SBDashBoardVibrantWallpaperButton *logoutButtonView; // @synthesize logoutButtonView=_logoutButtonView;
- (id)presentationRegions;
@property(retain, nonatomic) SBWallpaperEffectView *wallpaperEffectView; // @synthesize wallpaperEffectView=_wallpaperEffectView;
- (void)updateForLegibilitySettings:(id)arg1;
- (void)updateForPresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
