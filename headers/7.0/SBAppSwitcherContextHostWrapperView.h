/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBAppSwitcherPageContentView.h"
#import "SpringBoard-Structs.h"

@class SBWindowContextHostManager, SBWallpaperEffectView, UIView;
@protocol SBWindowContextAppearance;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherContextHostWrapperView : XXUnknownSuperclass <SBAppSwitcherPageContentView> {
	SBWindowContextHostManager* _contextHostManager;
	UIView* _containerView;
	UIView<SBWindowContextAppearance>* _contextHostView;
	UIView* _snapshotView;
	SBWallpaperEffectView* _wallpaperEffectView;
	int _orientation;
}
@property(assign, nonatomic) int orientation;
-(void)_viewDidAnimatePresentation:(id)_view;
-(void)_viewDidAnimateDismissal:(id)_view;
-(void)_viewDismissing:(id)dismissing;
-(void)_viewPresenting:(id)presenting;
-(CGAffineTransform)_rotationTransformForOrientation:(int)orientation;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)didMoveToSuperview;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame application:(id)application;
-(id)initWithFrame:(CGRect)frame;
@end

