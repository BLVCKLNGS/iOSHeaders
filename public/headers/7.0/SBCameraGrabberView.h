/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "_SBFVibrantView.h"

@class SBLegibilityView, _SBFVibrantSettings, UIView;
@protocol SBResponderTouchDelegate;

__attribute__((visibility("hidden")))
@interface SBCameraGrabberView : XXUnknownSuperclass <_SBFVibrantView> {
	UIEdgeInsets _hitTestEdgeInsets;
	UIView* _colorCompositingView;
	UIView* _darkTintView;
	UIView* _lightTintView;
	UIView* _backgroundView;
	SBLegibilityView* _legibilityView;
	_SBFVibrantSettings* _vibrantSettings;
	id<SBResponderTouchDelegate> _delegate;
}
@property(retain, nonatomic) _SBFVibrantSettings* vibrantSettings;
@property(assign, nonatomic) id<SBResponderTouchDelegate> delegate;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)updateForChangedSettings:(id)changedSettings;
-(void)setStrength:(float)strength;
-(id)_lazyLegibilityView;
-(void)setBackgroundView:(id)view;
-(CGSize)sizeThatFits:(CGSize)fits;
-(id)_cameraGrabberImage;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
