/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import "SBAlertDisplay.h"
#import "SBDeviceLockViewOwner.h"

@class UIView, SBDeviceLockView, UIImage, SBWallpaperView, UIStatusBar, SBEmergencyCallView;

@interface SBSlidingAlertDisplay : SBAlertDisplay <SBDeviceLockViewOwner> {
	SBWallpaperView* _backgroundView;
	UIImage* _defaultDesktopImage;
	UIView* _topBar;
	UIView* _bottomBar;
	UIView* _overlayView;
	SBDeviceLockView* _deviceLockView;
	SBEmergencyCallView* _emergencyCallView;
	UIView* _emergencyCallTopBar;
	BOOL _playKeyboardClicks;
	unsigned _animatingEmergencyCall : 1;
	unsigned _animatingIn : 1;
	unsigned _animatingOut : 1;
	unsigned _animatingDeviceLock : 1;
	unsigned _showingDeviceLock : 1;
	unsigned _showingDeviceUnlockFailure : 1;
	unsigned _isDisplayingWallpaper : 1;
	int _currentOrientation;
	UIStatusBar* _fakeStatusBarForSlideToDeviceLock;
	id _lockAnimationCompletionHandler;
}
+(id)newTopBarForInstance:(id)instance;
+(id)newBottomBarForInstance:(id)instance;
+(void)setDisplayPropertiesForActivationOfAlert:(id)alert;
-(void)_setTopBarImage:(id)image shadowColor:(id)color;
-(void)_resetStatusTextView;
-(BOOL)shouldEnableWirelessLCD;
-(BOOL)shouldShowBottomBar;
-(id)_topBarLCDImage;
-(id)_topBarLCDShadow;
-(void)updateTopBarBackground;
-(CGAffineTransform)slideTopBarToVisible:(BOOL)visible;
-(CGAffineTransform)slideBottomBarToVisible:(BOOL)visible;
-(void)rightNavigationButtonPressed;
-(void)leftNavigationButtonPressed;
-(void)_clearUnlockFailedIndicator;
-(void)_showUnlockFailedIndicator;
-(id)_defaultDesktopImage;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(id)lockBar;
-(BOOL)isFullscreen;
-(CGRect)middleFrame;
-(void)getFrameForTopButton:(CGRect*)topButton bottomButton:(CGRect*)button;
-(BOOL)showsDesktopImage;
-(BOOL)isShowingWallpaper;
-(void)updateDesktopImage:(id)image;
-(void)finishedAnimatingIn;
-(void)finishedAnimatingOut;
-(BOOL)shouldAnimateIconsIn;
-(BOOL)shouldAnimateIconsOut;
-(BOOL)isAnimatingOut;
-(int)currentOrientation;
-(void)_fadeOutCompletedWithDisplayDisablingIconUnscatter:(BOOL)displayDisablingIconUnscatter;
-(void)_fadeOutCompleted:(id)completed;
-(void)setMiddleContentAlpha:(float)alpha;
-(BOOL)isReadyToBeRemovedFromView;
-(float)durationForOthersActivation;
-(void)dismiss;
-(void)performAdditionalDismissAnimations;
-(void)beginAnimatingDisplayIn:(BOOL)anIn;
-(void)performAnimateDisplayIn;
-(void)animateDisplayIn:(float)anIn middleDelay:(float)delay animateStatusBar:(BOOL)bar;
-(void)alertDisplayWillBecomeVisible;
-(void)layoutForInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)isShowingDeviceLock;
-(BOOL)_shouldZoomDeviceLockView;
-(void)_zoomInDeviceLockViewWithDelay:(double)delay;
-(void)_zoomOutDeviceLockViewWithDelay:(double)delay;
-(BOOL)topBarIsVisible;
-(BOOL)bottomBarIsVisible;
-(void)_updateOverlayViewFrame;
-(id)deviceLockView;
-(void)setShowingDeviceLock:(BOOL)lock duration:(float)duration completion:(id)completion;
-(void)setShowingDeviceLock:(BOOL)lock;
-(void)setShowingDeviceLock:(BOOL)lock animated:(BOOL)animated;
-(void)animateToShowingDeviceLock:(BOOL)showingDeviceLock duration:(float)duration;
-(void)_animateToHidingOrShowingDeviceLockFinished;
-(void)animateToShowingDeviceLockFinished;
-(void)animateToHidingDeviceLockFinished;
-(void)deviceUnlockSucceeded;
-(void)deviceUnlockFailed;
-(void)_enableEntry;
-(BOOL)shouldShowBlockedRedStatus;
-(void)showBlockedStatus;
-(void)removeBlockedStatus;
-(BOOL)shouldUseTransparentStatusBar;
-(BOOL)isDisplayingErrorStatus;
-(void)_entryFinishedWithPassword:(id)password;
-(void)deviceUnlockCanceled;
-(void)deviceLockViewWillAnimateMinimization:(id)deviceLockView;
-(void)deviceLockViewWillAnimateMaximization:(id)deviceLockView;
-(void)deviceLockViewPasscodeDidChange:(id)deviceLockViewPasscode;
-(void)deviceLockViewPasscodeEntered:(id)entered;
-(void)deviceLockViewCancelButtonPressed:(id)pressed;
-(void)deviceLockViewEmergencyCallButtonPressed:(id)pressed;
-(int)requiredUnlockStyle;
-(BOOL)shouldShowEmergencyCallButton;
-(void)_moveTopBarForDoubleHeightStatusBar:(BOOL)doubleHeightStatusBar;
-(void)_updateDeviceLockFrameForDoubleHeightStatusBar:(BOOL)doubleHeightStatusBar;
-(void)alertWindowResizedFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame2;
-(void)_animateView:(id)view direction:(int)direction;
-(void)animateToEmergencyCall;
-(void)emergencyCallWasDisplayed;
-(void)animateFromEmergencyCallWithDuration:(float)duration;
-(void)emergencyCallWasRemoved;
-(id)bottomBar;
-(id)topBar;
-(id)backgroundView;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)shouldAddClippingViewDuringRotation;
@end
