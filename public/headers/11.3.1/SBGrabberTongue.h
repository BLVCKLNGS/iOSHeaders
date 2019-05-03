//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBSystemGestureRecognizerDelegate.h"

@class NSString, UIImageView, UIPanGestureRecognizer, UIView, _UIBackdropView;

@interface SBGrabberTongue : NSObject <SBSystemGestureRecognizerDelegate>
{
    _Bool _invalidated;
    UIPanGestureRecognizer *_edgePullGestureRecognizer;
    UIView *_tongueContainer;
    _UIBackdropView *_tongueBackdropView;
    UIImageView *_tongueChevron;
    _Bool _tongueVisible;
    _Bool _inPullGesture;
    _Bool _inTongueGesture;
    _Bool _inTongueDismissGesture;
    _Bool _inAmbiguousGesture;
    _Bool _beganAmbiguousPullGesture;
    unsigned long long _screenEdge;
    unsigned long long _systemGestureType;
    UIView *_containingView;
    double _gestureStartTime;
    id <SBGrabberTongueDelegate> _delegate;
}

- (void).cxx_destruct;
- (double)_ambiguousActivationMargin;
- (void)_cancelPendingTongueDismissRequests;
- (double)_centerOnScreenEdge;
- (struct CGRect)_chevronFrameForTongueBounds:(struct CGRect)arg1;
- (id)_createEdgePullGestureRecognizerWithAction:(SEL)arg1;
- (void)_createTongueAndGestureRecognizersIfNecessaryWithColorStyle:(long long)arg1;
- (void)_didDismiss;
- (void)_didPresentInteractively:(id)arg1;
- (void)_dismissTongue:(id)arg1;
- (void)_dismissTongueWithStyle:(long long)arg1 animated:(_Bool)arg2;
- (double)_distanceFromEdgeForRecognizer:(id)arg1;
- (double)_edgeOrientedVelocityForRecognizer:(id)arg1;
- (struct CGRect)_frameForTongueWhenVisible:(_Bool)arg1;
- (double)_grabberTongueAmbiguousActivationMargin;
- (struct UIEdgeInsets)_grabberTongueScreenInsets;
- (void)_handlePullGesture:(id)arg1;
- (id)_newBackdropViewWithColorStyle:(long long)arg1;
- (id)_newChevronView;
- (void)_presentTongueAnimated:(_Bool)arg1;
- (void)_pullGestureBegan:(id)arg1;
- (void)_pullGestureCanceled:(id)arg1;
- (void)_pullGestureEnded:(id)arg1;
- (void)_pullGestureUpdated:(id)arg1;
- (_Bool)_recognizerIsOutsideGrabberFreeZone:(id)arg1;
- (_Bool)_recognizerIsWithinGrabberActiveZone:(id)arg1;
- (_Bool)_recognizerIsWithinGrabberZone:(id)arg1;
- (_Bool)_requiresTongue;
- (_Bool)_requiresTongueOutsideGrabberFreeRegion;
- (_Bool)_shouldReceiveTouch:(id)arg1;
- (_Bool)_tongueOrPullEnabled;
- (struct CGAffineTransform)_transformForTongueContainer;
- (void)_updateCancelsTouchesWithRecognizer:(id)arg1;
- (double)_widthOfActiveEdgeCenteredAtTongue;
- (double)_widthOfGrabberFreeRegionAroundTongue;
- (void)_willDismiss;
- (void)_willPresent;
- (void)_willPresentInteractively:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) __weak id <SBGrabberTongueDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)dismissWithStyle:(long long)arg1 animated:(_Bool)arg2;
- (double)distanceFromEdge;
- (double)edgeOrientedVelocity;
- (id)edgePullGestureRecognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 edge:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (void)installInView:(id)arg1 withColorStyle:(long long)arg2;
- (void)invalidate;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (void)presentAnimated:(_Bool)arg1;
- (void)uninstall;
- (id)viewForSystemGestureRecognizer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
