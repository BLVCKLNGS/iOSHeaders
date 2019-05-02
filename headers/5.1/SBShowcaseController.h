/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, SBShowcaseViewController, UIControl, UIWindow, SBSlidingViewHighlight;

@interface SBShowcaseController : XXUnknownSuperclass {
	UIWindow* _hostWindow;
	UIView* _hostView;
	UIWindow* _showcaseWindow;
	UIView* _rootView;
	UIView* _contentView;
	UIControl* _blockingView;
	UIView* _clippingView;
	UIView* _showcaseView;
	UIView* _topShadowView;
	UIView* _bottomShadowView;
	UIView* _hidingView;
	SBSlidingViewHighlight* _separator;
	float _revealAmount;
	int _orientation;
	SBShowcaseViewController* _showcaseViewController;
}
@property(retain, nonatomic) SBShowcaseViewController* showcase;
@property(readonly, assign, nonatomic) UIControl* blockingView;
@property(retain, nonatomic) UIView* hostView;
@property(retain, nonatomic) UIView* hidingView;
@property(assign, nonatomic) int orientation;
@property(readonly, assign, nonatomic) UIWindow* window;
@property(assign, nonatomic) float revealAmount;
@property(assign, nonatomic) int revealMode;
+(float)fullRevealAmount;
-(id)init;
-(void)dealloc;
-(CGRect)showcaseViewFrame;
-(float)bottomBarHeight;
-(void)setHidden:(BOOL)hidden;
-(void)setAlpha:(float)alpha;
-(void)_updateShowcase;
-(CGRect)_visibleShowcaseBounds;
-(float)_separatorAlphaForRevealAmount:(float)revealAmount;
-(void)willAppear;
-(void)didAppear;
-(void)willDisappear;
-(void)didDisappear;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(CGAffineTransform)_rootTransform;
-(CGRect)_contentFrame;
-(CGRect)_portraitAdjustedFrameForFrame:(CGRect)frame;
-(CGRect)_adjustedContentFrameForFrame:(CGRect)frame;
-(CGRect)_hostViewFrame;
-(float)_showcaseRevealedAmount;
@end

