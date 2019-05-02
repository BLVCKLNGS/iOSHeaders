/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIView;

@interface SBNotificationCenterNavigationBarBackgroundView : UIView {

	long long _layoutMode;
	_UIBackdropView* _backdropView;
	UIView* _backgroundView;

}
-(id)initWithFrame:(CGRect)arg1 forLayoutMode:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)setAppearanceStorage:(id)arg1 ;
-(id)appearanceStorage;
-(void)updateBackgroundImage;
-(void)setBarStyle:(long long)arg1 ;
-(void)setBarWantsAdaptiveBackdrop:(BOOL)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarTintColor:(id)arg1 ;
-(void)_setIsContainedInPopover:(BOOL)arg1 ;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2 ;
@end
