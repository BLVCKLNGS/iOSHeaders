//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBDisplayItem, SBWorkspaceTransitionRequest;

@protocol SBAppSwitcherPageContentView <NSObject>
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void)invalidate;

@optional
- (void)transitionDidEnd:(_Bool)arg1 forPresentation:(_Bool)arg2;
- (void)interactionDidEnd:(_Bool)arg1;
- (void)updateTransitionProgress:(double)arg1;
- (void)viewDismissing:(SBDisplayItem *)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(SBWorkspaceTransitionRequest *)arg4;
- (void)viewPresenting:(SBDisplayItem *)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(SBWorkspaceTransitionRequest *)arg4;
- (void)respondToBecomingInvisibleIfNecessary;
- (void)prepareToBecomeVisibleIfNecessary;
@end

