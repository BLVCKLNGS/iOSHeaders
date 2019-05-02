/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBLockScreenModalAlertView, NSMutableArray, SBAlertItem;

__attribute__((visibility("hidden")))
@interface SBLockScreenModalAlertViewController : XXUnknownSuperclass {
	SBLockScreenModalAlertView* _modalAlertView;
	NSMutableArray* _pendingAlertItems;
	NSMutableArray* _pendingSuperModalAlertItems;
	SBAlertItem* _currentAlertItem;
}
@property(readonly, assign, nonatomic) SBAlertItem* currentAlertItem;
-(void)pendOrDeactivateCurrentAlertItem;
-(void)_pendAlertItem:(id)item;
-(id)allPendingAlertItems;
-(BOOL)hasSuperModalAlertItems;
-(id)dequeueAllPendingSuperModalAlertItems;
-(id)dequeueAllPendingAlertItems;
-(void)deactivateAlertItem:(id)item;
-(BOOL)activateAlertItem:(id)item pended:(BOOL)pended;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
