//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBViewControllerInteractiveTransitioning-Protocol.h"
#import "UIInteractionProgressObserver-Protocol.h"

@class NSString, UIInteractionProgress;
@protocol SBViewControllerContextTransitioning;

@interface SBHintInteractor : NSObject <UIInteractionProgressObserver, SBViewControllerInteractiveTransitioning>
{
    id <SBViewControllerContextTransitioning> _transitionContext;
    CDStruct_3e878e9e _hintInterval;
    double _smoothedPercentComplete;
    UIInteractionProgress *_interactionProgress;
}

@property(readonly, nonatomic) UIInteractionProgress *interactionProgress; // @synthesize interactionProgress=_interactionProgress;
- (void).cxx_destruct;
- (void)_updateInteractionPercentComplete:(double)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (_Bool)supportsRestarting;
- (void)finishInteractiveTransition;
- (void)cancelTransition;
- (void)updateTransition:(double)arg1;
- (void)startInteractiveTransition:(id)arg1;
@property(readonly, nonatomic) double maxHintProgress;
- (id)initWithInteractionProgress:(id)arg1 maxHintProgress:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

