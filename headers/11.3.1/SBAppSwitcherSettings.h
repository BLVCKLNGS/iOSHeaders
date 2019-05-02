//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@class SBAppSwitcherOrbGestureSettings, SBAppSwitcherWallpaperSettings, SBFluidSwitcherAnimationSettings;

@interface SBAppSwitcherSettings : SBUISettings
{
    long long _simplicityOptions;
    _Bool _useAsynchronousRendering;
    _Bool _gridSwitcherAlignControlCenterTopInLandscape;
    _Bool _gridSwitcherAlignControlCenterTopInPortrait;
    _Bool _useTitleOpacityPrototypeSettings;
    _Bool _simplicityOptionNoSnapshots;
    _Bool _simplicityOptionNoCrossfade;
    _Bool _simplicityOptionNoLabels;
    _Bool _simplicityOptionNoIcons;
    _Bool _simplicityOptionNoBlurs;
    _Bool _simplicityOptionNoShadows;
    _Bool _simplicityOptionNoControlCenter;
    _Bool _simplicityOptionNoSnapshotBkg;
    _Bool _showFloats;
    long long _switcherStyle;
    SBAppSwitcherOrbGestureSettings *_orbGestureSettings;
    SBAppSwitcherWallpaperSettings *_wallpaperSettings;
    long long _killAffordanceStyle;
    long long _selectionHighlightStyle;
    double _highlightSquishyScale;
    double _highlightDimOpacity;
    double _switcherCardShadowRadius;
    double _switcherCardShadowOpacity;
    double _switcherCardShadowOffset;
    double _homeToSwitcherDockRubberBand;
    double _homeToSwitcherDockMaxOffsetBeforeRubberBand;
    double _gridSwipeUpEndInSwitcherThreshold;
    double _gridSwipeUpSwitcherAfterDockDelay;
    double _gridSwipeUpSwitcherAfterDockHysteresis;
    double _gridSwipeUpPanTranslationForFullTransition;
    double _gridSwipeUpFullProgressAtPercentY;
    double _gridSwipeUpRubberBandYDimension;
    double _gridSwipeUpRubberBandScaleDimension;
    double _gridSwitcherPageScale;
    double _gridSwitcherHorizontalInterpageSpacingLandscape;
    double _gridSwitcherVerticalNaturalSpacingLandscape;
    double _gridSwitcherHorizontalInterpageSpacingPortrait;
    double _gridSwitcherVerticalNaturalSpacingPortrait;
    double _gridSwitcherSnapToControlCenterHeightSlop;
    double _deckSwitcherPageScale;
    double _aExpLayoutCoeff;
    double _bExpLayoutCoeff;
    double _depthPadding;
    double _offscreenCardScaleForFlyIn;
    double _titleOpacityACoeff;
    double _titleOpacityBCoeff;
    double _titleOpacityCCoeff;
    double _titleOpacityDCoeff;
    double _cmdTabSwitcherSelectionSquareCornerRadiusRatio;
    SBFluidSwitcherAnimationSettings *_animationSettings;
}

+ (id)settingsControllerModule;
- (void).cxx_destruct;
@property double aExpLayoutCoeff; // @synthesize aExpLayoutCoeff=_aExpLayoutCoeff;
@property(retain, nonatomic) SBFluidSwitcherAnimationSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
- (id)archiveValueForKey:(id)arg1;
@property double bExpLayoutCoeff; // @synthesize bExpLayoutCoeff=_bExpLayoutCoeff;
@property double cmdTabSwitcherSelectionSquareCornerRadiusRatio; // @synthesize cmdTabSwitcherSelectionSquareCornerRadiusRatio=_cmdTabSwitcherSelectionSquareCornerRadiusRatio;
@property double deckSwitcherPageScale; // @synthesize deckSwitcherPageScale=_deckSwitcherPageScale;
@property double depthPadding; // @synthesize depthPadding=_depthPadding;
- (long long)effectiveKillAffordanceStyle;
@property double gridSwipeUpEndInSwitcherThreshold; // @synthesize gridSwipeUpEndInSwitcherThreshold=_gridSwipeUpEndInSwitcherThreshold;
@property double gridSwipeUpFullProgressAtPercentY; // @synthesize gridSwipeUpFullProgressAtPercentY=_gridSwipeUpFullProgressAtPercentY;
@property double gridSwipeUpPanTranslationForFullTransition; // @synthesize gridSwipeUpPanTranslationForFullTransition=_gridSwipeUpPanTranslationForFullTransition;
@property double gridSwipeUpRubberBandScaleDimension; // @synthesize gridSwipeUpRubberBandScaleDimension=_gridSwipeUpRubberBandScaleDimension;
@property double gridSwipeUpRubberBandYDimension; // @synthesize gridSwipeUpRubberBandYDimension=_gridSwipeUpRubberBandYDimension;
@property double gridSwipeUpSwitcherAfterDockDelay; // @synthesize gridSwipeUpSwitcherAfterDockDelay=_gridSwipeUpSwitcherAfterDockDelay;
@property double gridSwipeUpSwitcherAfterDockHysteresis; // @synthesize gridSwipeUpSwitcherAfterDockHysteresis=_gridSwipeUpSwitcherAfterDockHysteresis;
@property _Bool gridSwitcherAlignControlCenterTopInLandscape; // @synthesize gridSwitcherAlignControlCenterTopInLandscape=_gridSwitcherAlignControlCenterTopInLandscape;
@property _Bool gridSwitcherAlignControlCenterTopInPortrait; // @synthesize gridSwitcherAlignControlCenterTopInPortrait=_gridSwitcherAlignControlCenterTopInPortrait;
@property double gridSwitcherHorizontalInterpageSpacingLandscape; // @synthesize gridSwitcherHorizontalInterpageSpacingLandscape=_gridSwitcherHorizontalInterpageSpacingLandscape;
@property double gridSwitcherHorizontalInterpageSpacingPortrait; // @synthesize gridSwitcherHorizontalInterpageSpacingPortrait=_gridSwitcherHorizontalInterpageSpacingPortrait;
@property double gridSwitcherPageScale; // @synthesize gridSwitcherPageScale=_gridSwitcherPageScale;
@property double gridSwitcherSnapToControlCenterHeightSlop; // @synthesize gridSwitcherSnapToControlCenterHeightSlop=_gridSwitcherSnapToControlCenterHeightSlop;
@property double gridSwitcherVerticalNaturalSpacingLandscape; // @synthesize gridSwitcherVerticalNaturalSpacingLandscape=_gridSwitcherVerticalNaturalSpacingLandscape;
@property double gridSwitcherVerticalNaturalSpacingPortrait; // @synthesize gridSwitcherVerticalNaturalSpacingPortrait=_gridSwitcherVerticalNaturalSpacingPortrait;
@property double highlightDimOpacity; // @synthesize highlightDimOpacity=_highlightDimOpacity;
@property double highlightSquishyScale; // @synthesize highlightSquishyScale=_highlightSquishyScale;
@property double homeToSwitcherDockMaxOffsetBeforeRubberBand; // @synthesize homeToSwitcherDockMaxOffsetBeforeRubberBand=_homeToSwitcherDockMaxOffsetBeforeRubberBand;
@property double homeToSwitcherDockRubberBand; // @synthesize homeToSwitcherDockRubberBand=_homeToSwitcherDockRubberBand;
@property long long killAffordanceStyle; // @synthesize killAffordanceStyle=_killAffordanceStyle;
@property double offscreenCardScaleForFlyIn; // @synthesize offscreenCardScaleForFlyIn=_offscreenCardScaleForFlyIn;
@property(retain, nonatomic) SBAppSwitcherOrbGestureSettings *orbGestureSettings; // @synthesize orbGestureSettings=_orbGestureSettings;
@property long long selectionHighlightStyle; // @synthesize selectionHighlightStyle=_selectionHighlightStyle;
- (void)setDefaultValues;
@property _Bool showFloats; // @synthesize showFloats=_showFloats;
@property _Bool simplicityOptionNoBlurs; // @synthesize simplicityOptionNoBlurs=_simplicityOptionNoBlurs;
@property _Bool simplicityOptionNoControlCenter; // @synthesize simplicityOptionNoControlCenter=_simplicityOptionNoControlCenter;
@property _Bool simplicityOptionNoCrossfade; // @synthesize simplicityOptionNoCrossfade=_simplicityOptionNoCrossfade;
@property _Bool simplicityOptionNoIcons; // @synthesize simplicityOptionNoIcons=_simplicityOptionNoIcons;
@property _Bool simplicityOptionNoLabels; // @synthesize simplicityOptionNoLabels=_simplicityOptionNoLabels;
@property _Bool simplicityOptionNoShadows; // @synthesize simplicityOptionNoShadows=_simplicityOptionNoShadows;
@property _Bool simplicityOptionNoSnapshotBkg; // @synthesize simplicityOptionNoSnapshotBkg=_simplicityOptionNoSnapshotBkg;
@property _Bool simplicityOptionNoSnapshots; // @synthesize simplicityOptionNoSnapshots=_simplicityOptionNoSnapshots;
@property long long simplicityOptions; // @dynamic simplicityOptions;
@property double switcherCardShadowOffset; // @synthesize switcherCardShadowOffset=_switcherCardShadowOffset;
@property double switcherCardShadowOpacity; // @synthesize switcherCardShadowOpacity=_switcherCardShadowOpacity;
@property double switcherCardShadowRadius; // @synthesize switcherCardShadowRadius=_switcherCardShadowRadius;
@property long long switcherStyle; // @synthesize switcherStyle=_switcherStyle;
@property double titleOpacityACoeff; // @synthesize titleOpacityACoeff=_titleOpacityACoeff;
@property double titleOpacityBCoeff; // @synthesize titleOpacityBCoeff=_titleOpacityBCoeff;
@property double titleOpacityCCoeff; // @synthesize titleOpacityCCoeff=_titleOpacityCCoeff;
@property double titleOpacityDCoeff; // @synthesize titleOpacityDCoeff=_titleOpacityDCoeff;
@property _Bool useAsynchronousRendering; // @synthesize useAsynchronousRendering=_useAsynchronousRendering;
@property _Bool useTitleOpacityPrototypeSettings; // @synthesize useTitleOpacityPrototypeSettings=_useTitleOpacityPrototypeSettings;
@property(retain, nonatomic) SBAppSwitcherWallpaperSettings *wallpaperSettings; // @synthesize wallpaperSettings=_wallpaperSettings;
- (_Bool)shouldSimplifyForOptions:(long long)arg1;

@end

