/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBIconObserver.h"

@class UIView, UIImage, NSTimer, UIImageView, SBIconImageView, SBIconLabel, SBIconImageContainerView, SBIconBadgeImage, SBIcon;
@protocol SBIconViewLocker, SBIconViewDelegate;

@interface SBIconView : XXUnknownSuperclass <SBIconObserver> {
	SBIcon* _icon;
	id<SBIconViewDelegate> _delegate;
	id<SBIconViewLocker> _locker;
	SBIconImageContainerView* _iconImageContainer;
	SBIconImageView* _iconImageView;
	UIImageView* _iconDarkeningOverlay;
	UIImageView* _ghostlyImageView;
	UIImageView* _reflection;
	UIImageView* _shadow;
	SBIconBadgeImage* _badgeImage;
	UIImageView* _badgeView;
	SBIconLabel* _label;
	BOOL _labelHidden;
	BOOL _labelOnWallpaper;
	UIView* _closeBox;
	int _closeBoxType;
	UIImageView* _dropGlow;
	unsigned _drawsLabel : 1;
	unsigned _isHidden : 1;
	unsigned _isGrabbed : 1;
	unsigned _isOverlapping : 1;
	unsigned _refusesRecipientStatus : 1;
	unsigned _highlighted : 1;
	unsigned _launchDisabled : 1;
	unsigned _isJittering : 1;
	unsigned _allowJitter : 1;
	unsigned _touchDownInIcon : 1;
	unsigned _hideShadow : 1;
	NSTimer* _delayedUnhighlightTimer;
	unsigned _onWallpaper : 1;
	unsigned _ghostlyRequesters;
	int _iconLocation;
	float _iconImageAlpha;
	float _iconImageBrightness;
	float _iconLabelAlpha;
	float _accessoryAlpha;
	CGPoint _unjitterPoint;
	CGPoint _grabPoint;
	NSTimer* _longPressTimer;
	unsigned _ghostlyTag;
	UIImage* _ghostlyImage;
	BOOL _ghostlyPending;
}
@property(assign) id<SBIconViewDelegate> delegate;
@property(assign) id<SBIconViewLocker> locker;
@property(readonly, retain) SBIcon* icon;
+(CGSize)defaultIconSize;
+(CGSize)defaultIconImageSize;
+(BOOL)allowsRecycling;
+(id)_jitterPositionAnimation;
+(id)_jitterTransformAnimation;
-(id)initWithDefaultSize;
-(void)dealloc;
-(void)setIcon:(id)icon;
-(int)location;
-(void)setLocation:(int)location;
-(void)showIconAnimationDidStop:(id)showIconAnimation didFinish:(id)finish icon:(id)icon;
-(void)setIsHidden:(BOOL)hidden animate:(BOOL)animate;
-(BOOL)isHidden;
-(BOOL)isRevealable;
-(void)positionIconImageView;
-(void)applyIconImageTransform:(CATransform3D)transform duration:(float)duration delay:(float)delay;
-(void)setDisplayedIconImage:(id)image;
-(id)snapshotSettings;
-(id)iconImageSnapshot:(id)snapshot;
-(id)reflectedIconWithBrightness:(float)brightness;
-(void)setIconImageAlpha:(float)alpha;
-(void)setIconLabelAlpha:(float)alpha;
-(id)iconImageView;
-(void)setLabelHidden:(BOOL)hidden;
-(void)positionLabel;
-(CGSize)_labelSize;
-(Class)_labelClass;
-(void)updateLabel;
-(void)_updateBadgePosition;
-(id)_overriddenBadgeTextForText:(id)text;
-(void)updateBadge;
-(id)_automationID;
-(BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;
-(CGRect)frameForIconOverlay;
-(void)placeIconOverlayView;
-(void)updateIconOverlayView;
-(void)_updateIconBrightness;
-(BOOL)allowsTapWhileEditing;
-(BOOL)delaysUnhighlightWhenTapped;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setHighlighted:(BOOL)highlighted delayUnhighlight:(BOOL)unhighlight;
-(void)_delayedUnhighlight;
-(BOOL)isInDock;
-(id)_shadowImage;
-(void)_updateShadow;
-(void)updateReflection;
-(void)setDisplaysOnWallpaper:(BOOL)wallpaper;
-(void)setLabelDisplaysOnWallpaper:(BOOL)wallpaper;
-(BOOL)showsReflection;
-(float)_reflectionImageOffset;
-(void)setFrame:(CGRect)frame;
-(void)setIsJittering:(BOOL)jittering;
-(void)setAllowJitter:(BOOL)jitter;
-(BOOL)allowJitter;
-(void)removeAllIconAnimations;
-(void)setIconPosition:(CGPoint)position;
-(void)setRefusesRecipientStatus:(BOOL)status;
-(BOOL)canReceiveGrabbedIcon:(id)icon;
-(double)grabDurationForEvent:(id)event;
-(void)setIsGrabbed:(BOOL)grabbed;
-(BOOL)isGrabbed;
-(void)setIsOverlapping:(BOOL)overlapping;
-(CGAffineTransform)transformToMakeDropGlowShrinkToIconSize;
-(void)prepareDropGlow;
-(void)showDropGlow:(BOOL)glow;
-(void)removeDropGlow;
-(id)dropGlow;
-(BOOL)isShowingDropGlow;
-(void)placeGhostlyImageView;
-(id)_genGhostlyImage:(id)image;
-(void)prepareGhostlyImageIfNeeded;
-(void)prepareGhostlyImage;
-(void)prepareGhostlyImageView;
-(void)setGhostly:(BOOL)ghostly requester:(int)requester;
-(void)setPartialGhostly:(float)ghostly requester:(int)requester;
-(void)removeGhostlyImageView;
-(BOOL)isGhostly;
-(int)ghostlyRequesters;
-(void)longPressTimerFired;
-(void)cancelLongPressTimer;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(BOOL)isTouchDownInIcon;
-(void)setTouchDownInIcon:(BOOL)icon;
-(void)hideCloseBoxAnimationDidStop:(id)hideCloseBoxAnimation didFinish:(id)finish closeBox:(id)box;
-(void)positionCloseBoxOfType:(int)type;
-(id)_newCloseBoxOfType:(int)type;
-(void)setShowsCloseBox:(BOOL)box;
-(void)setShowsCloseBox:(BOOL)box animated:(BOOL)animated;
-(BOOL)isShowingCloseBox;
-(void)closeBoxTapped;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(UIEdgeInsets)snapshotEdgeInsets;
-(void)setShadowsHidden:(BOOL)hidden;
-(void)_updateShadowFrameForShadow:(id)shadow;
-(void)_updateShadowFrame;
-(BOOL)_delegatePositionIsEditable;
-(void)_delegateTouchEnded:(BOOL)ended;
-(BOOL)_delegateTapAllowed;
-(int)_delegateCloseBoxType;
-(id)createShadowImageView;
-(void)prepareForRecycling;
-(CGRect)defaultFrameForProgressBar;
-(void)iconImageDidUpdate:(id)iconImage;
-(void)iconAccessoriesDidUpdate:(id)iconAccessories;
-(void)iconLaunchEnabledDidChange:(id)iconLaunchEnabled;
@end

