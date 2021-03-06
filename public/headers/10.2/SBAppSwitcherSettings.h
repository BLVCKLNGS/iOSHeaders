//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@class SBAnimationSettings;

@interface SBAppSwitcherSettings : SBUISettings
{
    _Bool _clipStatusBarArea;
    _Bool _useTitleOpacityPrototypeSettings;
    _Bool _useOrbGesture;
    _Bool _forceDrivesInitialProgress;
    _Bool _playInitialHaptic;
    _Bool _playCommitHaptic;
    _Bool _canPop;
    long long _switcherStyle;
    long long _deckSwitcherForegroundWallpaperStyle;
    long long _deckSwitcherBackgroundWallpaperStyle;
    double _deckSwitcherForegroundDarkeningFactor;
    double _deckSwitcherBackgroundDarkeningFactor;
    double _deckSwitcherForegroundSaturationDeltaFactor;
    double _deckSwitcherBackgroundSaturationDeltaFactor;
    double _deckSwitcherForegroundBlurRadius;
    double _deckSwitcherBackgroundBlurRadius;
    double _aExpLayoutCoeff;
    double _bExpLayoutCoeff;
    double _depthPadding;
    double _titleOpacityACoeff;
    double _titleOpacityBCoeff;
    double _titleOpacityCCoeff;
    double _titleOpacityDCoeff;
    double _insertMass;
    double _insertStiffness;
    double _insertDamping;
    double _translateProgress;
    double _minTranslation;
    double _maxPopTranslation;
    double _commitToNextAppTranslation;
    double _nextAppPopScale;
    double _orbGestureRegionMax;
    double _panHysteresis;
    double _dismissAnimationMass;
    double _dismissAnimationStiffness;
    double _dismissAnimationDamping;
    double _dismissAnimationEpsilon;
    double _presentAnimationMass;
    double _presentAnimationStiffness;
    double _presentAnimationDamping;
    double _additionalThrowDisplacement;
    long long _simplicityOptions;
    SBAnimationSettings *_dosidoAnimationSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBAnimationSettings *dosidoAnimationSettings; // @synthesize dosidoAnimationSettings=_dosidoAnimationSettings;
@property long long simplicityOptions; // @synthesize simplicityOptions=_simplicityOptions;
@property double additionalThrowDisplacement; // @synthesize additionalThrowDisplacement=_additionalThrowDisplacement;
@property double presentAnimationDamping; // @synthesize presentAnimationDamping=_presentAnimationDamping;
@property double presentAnimationStiffness; // @synthesize presentAnimationStiffness=_presentAnimationStiffness;
@property double presentAnimationMass; // @synthesize presentAnimationMass=_presentAnimationMass;
@property double dismissAnimationEpsilon; // @synthesize dismissAnimationEpsilon=_dismissAnimationEpsilon;
@property double dismissAnimationDamping; // @synthesize dismissAnimationDamping=_dismissAnimationDamping;
@property double dismissAnimationStiffness; // @synthesize dismissAnimationStiffness=_dismissAnimationStiffness;
@property double dismissAnimationMass; // @synthesize dismissAnimationMass=_dismissAnimationMass;
@property _Bool canPop; // @synthesize canPop=_canPop;
@property _Bool playCommitHaptic; // @synthesize playCommitHaptic=_playCommitHaptic;
@property _Bool playInitialHaptic; // @synthesize playInitialHaptic=_playInitialHaptic;
@property double panHysteresis; // @synthesize panHysteresis=_panHysteresis;
@property _Bool forceDrivesInitialProgress; // @synthesize forceDrivesInitialProgress=_forceDrivesInitialProgress;
@property double orbGestureRegionMax; // @synthesize orbGestureRegionMax=_orbGestureRegionMax;
@property double nextAppPopScale; // @synthesize nextAppPopScale=_nextAppPopScale;
@property double commitToNextAppTranslation; // @synthesize commitToNextAppTranslation=_commitToNextAppTranslation;
@property double maxPopTranslation; // @synthesize maxPopTranslation=_maxPopTranslation;
@property double minTranslation; // @synthesize minTranslation=_minTranslation;
@property double translateProgress; // @synthesize translateProgress=_translateProgress;
@property _Bool useOrbGesture; // @synthesize useOrbGesture=_useOrbGesture;
@property double insertDamping; // @synthesize insertDamping=_insertDamping;
@property double insertStiffness; // @synthesize insertStiffness=_insertStiffness;
@property double insertMass; // @synthesize insertMass=_insertMass;
@property double titleOpacityDCoeff; // @synthesize titleOpacityDCoeff=_titleOpacityDCoeff;
@property double titleOpacityCCoeff; // @synthesize titleOpacityCCoeff=_titleOpacityCCoeff;
@property double titleOpacityBCoeff; // @synthesize titleOpacityBCoeff=_titleOpacityBCoeff;
@property double titleOpacityACoeff; // @synthesize titleOpacityACoeff=_titleOpacityACoeff;
@property _Bool useTitleOpacityPrototypeSettings; // @synthesize useTitleOpacityPrototypeSettings=_useTitleOpacityPrototypeSettings;
@property double depthPadding; // @synthesize depthPadding=_depthPadding;
@property double bExpLayoutCoeff; // @synthesize bExpLayoutCoeff=_bExpLayoutCoeff;
@property double aExpLayoutCoeff; // @synthesize aExpLayoutCoeff=_aExpLayoutCoeff;
@property _Bool clipStatusBarArea; // @synthesize clipStatusBarArea=_clipStatusBarArea;
@property double deckSwitcherBackgroundBlurRadius; // @synthesize deckSwitcherBackgroundBlurRadius=_deckSwitcherBackgroundBlurRadius;
@property double deckSwitcherForegroundBlurRadius; // @synthesize deckSwitcherForegroundBlurRadius=_deckSwitcherForegroundBlurRadius;
@property double deckSwitcherBackgroundSaturationDeltaFactor; // @synthesize deckSwitcherBackgroundSaturationDeltaFactor=_deckSwitcherBackgroundSaturationDeltaFactor;
@property double deckSwitcherForegroundSaturationDeltaFactor; // @synthesize deckSwitcherForegroundSaturationDeltaFactor=_deckSwitcherForegroundSaturationDeltaFactor;
@property double deckSwitcherBackgroundDarkeningFactor; // @synthesize deckSwitcherBackgroundDarkeningFactor=_deckSwitcherBackgroundDarkeningFactor;
@property double deckSwitcherForegroundDarkeningFactor; // @synthesize deckSwitcherForegroundDarkeningFactor=_deckSwitcherForegroundDarkeningFactor;
@property long long deckSwitcherBackgroundWallpaperStyle; // @synthesize deckSwitcherBackgroundWallpaperStyle=_deckSwitcherBackgroundWallpaperStyle;
@property long long deckSwitcherForegroundWallpaperStyle; // @synthesize deckSwitcherForegroundWallpaperStyle=_deckSwitcherForegroundWallpaperStyle;
@property long long switcherStyle; // @synthesize switcherStyle=_switcherStyle;
- (void).cxx_destruct;
- (_Bool)shouldSimplifyForOptions:(long long)arg1;
- (void)setDefaultValues;

@end

