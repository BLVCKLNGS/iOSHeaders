//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconZoomSettings.h"

@class SBFAnimationSettings;

@interface SBScaleZoomSettings : SBIconZoomSettings
{
    _Bool _crossfadeWithZoom;
    SBFAnimationSettings *_outerFolderFadeSettings;
    SBFAnimationSettings *_crossfadeSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBFAnimationSettings *crossfadeSettings; // @synthesize crossfadeSettings=_crossfadeSettings;
@property _Bool crossfadeWithZoom; // @synthesize crossfadeWithZoom=_crossfadeWithZoom;
@property(retain) SBFAnimationSettings *outerFolderFadeSettings; // @synthesize outerFolderFadeSettings=_outerFolderFadeSettings;
- (id)effectiveCrossfadeAnimationSettings;
- (void)setDefaultValues;

@end

