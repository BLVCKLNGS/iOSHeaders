//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBClient;

@interface SBHarmonyController : NSObject
{
    CBClient *_client;
    _Bool _supportsWhitePointAdaptation;
    _Bool _supportsBlueLightReduction;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_adaptationClient;
- (id)init;
@property(nonatomic, getter=isWhitePointAdaptationEnabled) _Bool whitePointAdaptationEnabled;
- (void)setWhitePointAdaptationStrength:(float)arg1 forWhitePointAdaptivityStyle:(long long)arg2;
@property(nonatomic) long long whitePointAdaptivityStyle;
- (void)setWhitePointAdaptivityStyle:(long long)arg1 animationSettings:(id)arg2;
- (void)setWhitePointAdaptivityStyleWithStyles:(id)arg1 animationSettings:(id)arg2;
@property(readonly, nonatomic) _Bool supportsBlueLightReduction; // @synthesize supportsBlueLightReduction=_supportsBlueLightReduction;
@property(readonly, nonatomic) _Bool supportsWhitePointAdaptation; // @synthesize supportsWhitePointAdaptation=_supportsWhitePointAdaptation;
- (void)transitionFromWhitePointAdaptivityStyleWithStyles:(id)arg1 toWhitePointAdaptivityStyleWithStyles:(id)arg2 fromPercentage:(double)arg3 toPercentage:(double)arg4 animationSettings:(id)arg5;
- (float)whitePointAdaptationStrengthForWhitePointAdaptivityStyle:(long long)arg1;

@end
