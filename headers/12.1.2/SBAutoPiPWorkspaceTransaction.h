//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceTransaction.h"

@class NSString, SBWorkspaceEntity;

@interface SBAutoPiPWorkspaceTransaction : SBWorkspaceTransaction
{
    int _pidToPiP;
    SBWorkspaceEntity *_entityToPiP;
    long long _transitionStyle;
    long long _inferredTransitionStyle;
    NSString *_reason;
}

+ (long long)transitionStyleForProcessIdentifier:(int)arg1 withTransitionContext:(id)arg2 request:(id)arg3;
+ (_Bool)isSystemGesture:(id)arg1;
+ (_Bool)_shouldAutoPiPEnteringBackgroundForRequest:(id)arg1 alertEntityFoundBlock:(CDUnknownBlockType)arg2 appEntityFoundBlock:(CDUnknownBlockType)arg3;
+ (_Bool)shouldAutoPiPEnteringBackgroundForRequest:(id)arg1 entityFoundBlock:(CDUnknownBlockType)arg2;
+ (_Bool)shouldAutoPiPEnteringBackgroundForRequest:(id)arg1;
@property(readonly, copy, nonatomic) SBWorkspaceEntity *entityToPiP; // @synthesize entityToPiP=_entityToPiP;
@property(nonatomic) long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
- (void).cxx_destruct;
- (long long)_transitionStyle;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (_Bool)_canBeInterrupted;
- (void)_begin;
- (id)initWithTransitionRequest:(id)arg1 includeActiveAppEntity:(_Bool)arg2;
- (id)initWithTransitionRequest:(id)arg1;

@end
