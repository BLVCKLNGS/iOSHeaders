/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIStarkStartupAnimation.h"

@class SBIconAnimator, UIStatusBar;

__attribute__((visibility("hidden")))
@interface SBUIStarkStartupToHomeAnimation : SBUIStarkStartupAnimation {
	UIStatusBar* _fakeStatusBar;
	SBIconAnimator* _iconAnimator;
	BOOL _finishedCleanup;
}
-(void)_cleanupEverything;
-(void)_cleanupAnimation;
-(void)_cancelAnimation;
-(void)endAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(id)_getTransitionWindow;
-(void)dealloc;
@end

