/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBSearchGestureObserver.h"
#import "SpringBoard-Structs.h"

@class UITextField, UIButton, SBWallpaperEffectView, UIView;
@protocol SBSearchHeaderDelegate;

__attribute__((visibility("hidden")))
@interface SBSearchHeader : XXUnknownSuperclass <SBSearchGestureObserver> {
	SBWallpaperEffectView* _blurView;
	UIView* _container;
	UIButton* _cancelButton;
	UITextField* _searchField;
	id<SBSearchHeaderDelegate> _delegate;
}
@property(assign, nonatomic) id<SBSearchHeaderDelegate> delegate;
@property(readonly, assign, nonatomic) UITextField* searchField;
-(void)searchGesture:(id)gesture changedPercentComplete:(float)complete;
-(void)_cancelButtonPressed;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

