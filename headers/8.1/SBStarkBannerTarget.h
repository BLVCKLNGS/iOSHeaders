/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBUIBannerTargetImplementation.h"

@class SBUISound, SBUIBannerContext, NSMutableSet, NSString, NSHashTable, NSMutableArray;
@protocol SBStarkBannerTargetObserver;

__attribute__((visibility("hidden")))
@interface SBStarkBannerTarget : XXUnknownSuperclass <SBUIBannerTargetImplementation> {
	id<SBStarkBannerTargetObserver> _observer;
	NSHashTable* _sources;
	BOOL _invalidated;
	NSMutableSet* _suspensionReasons;
	NSMutableArray* _pendedContexts;
	SBUIBannerContext* _currentContext;
	SBUISound* _currentSound;
	int _displayAssertions;
}
@property(readonly, assign, nonatomic) int bannerTargetIdiom;
@property(readonly, assign, nonatomic) void* bannerTargetIdentifier;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) SBUIBannerContext* currentContext;
@property(assign, nonatomic, getter=isPausedForUserInteraction) BOOL pausedForUserInteraction;
@property(assign, nonatomic) id<SBStarkBannerTargetObserver> observer;
-(void)removeCachedBannerForContext:(id)context;
-(void)cacheBannerForContext:(id)context withCompletion:(id)completion;
-(void)dismissCurrentBannerContextForSource:(id)source;
-(id)currentBannerContextForSource:(id)source;
-(void)signalSource:(id)source;
-(BOOL)isShowingModalBanner;
-(void)modallyPresentBannerWithContext:(id)context;
-(void)unregisterSource:(id)source;
-(void)registerSource:(id)source;
-(void)_killIntervalElapsed:(id)elapsed;
-(void)_dismissIntervalElapsed:(id)elapsed;
-(void)_replaceIntervalElapsed:(id)elapsed;
-(void)_dismissContext:(id)context withOptions:(int)options dismissReason:(int)reason;
-(void)_dequeueWithOptions:(int)options dismissReason:(int)reason;
-(BOOL)_canDequeueWithOptions:(int)options;
-(BOOL)_canDismissWithOptions:(int)options;
-(BOOL)_isSuspendedForAssistant;
-(void)invalidate;
-(void)noteContextCanceled:(id)canceled;
-(void)noteContext:(id)context subActionSelected:(unsigned)selected;
-(void)noteContextSelected:(id)selected;
-(void)setSuspended:(BOOL)suspended cancellingCurrent:(BOOL)current forReason:(id)reason;
-(BOOL)isSuspended;
-(BOOL)isSuspendedForReason:(id)reason;
-(void)dealloc;
-(id)init;
@end
