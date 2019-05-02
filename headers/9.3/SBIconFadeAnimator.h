/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:31 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconAnimator.h>

@class UIView;

@interface SBIconFadeAnimator : SBIconAnimator {

	UIView* _crossfadeView;
	BOOL _addedToWindow;

}
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(double)arg1 ;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 ;
-(void)_applyAlphaForFraction:(double)arg1 ;
@end

