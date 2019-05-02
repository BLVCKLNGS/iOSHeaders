/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, _UILegibilitySettings;

__attribute__((visibility("hidden")))
@interface SBLockScreenDateViewController : XXUnknownSuperclass {
	NSTimer* _updateTimer;
	BOOL _disablesUpdates;
	_UILegibilitySettings* _legibilitySettings;
}
@property(retain, nonatomic) _UILegibilitySettings* legibilitySettings;
@property(assign, nonatomic) BOOL disablesUpdates;
@property(assign, nonatomic, getter=isDateHidden) BOOL dateHidden;
-(void)setContentAlpha:(float)alpha withDateVisible:(BOOL)dateVisible;
-(void)_startUpdateTimer;
-(void)_stopUpdateTimer;
-(void)_updateView;
-(id)dateViewIfExists;
-(id)dateView;
-(void)_updateFormat;
-(void)_addObservers;
-(void)_backlightChanged;
-(void)willMoveToParentViewController:(id)parentViewController;
-(void)setView:(id)view;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

