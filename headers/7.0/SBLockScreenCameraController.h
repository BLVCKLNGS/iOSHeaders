/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLockScreenSlideUpController.h"

@class UIView, UIImageView, NSDate, DeferredPUApplicationCameraViewController, SBPasscodeLockDisableAssertion, NSObject;
@protocol OS_dispatch_queue, SBLockScreenCameraControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenCameraController : SBLockScreenSlideUpController {
	UIView* _cameraClippingView;
	UIImageView* _cameraDefaultImageView;
	UIImageView* _cameraLandscapeDefaultImageView;
	UIView* _cameraBackgroundView;
	UIView* _cameraContainerView;
	UIView* _cameraFakeStatusBar;
	DeferredPUApplicationCameraViewController* _cameraViewController;
	BOOL _animatingCameraIn;
	BOOL _cancelCameraAnimation;
	BOOL _cameraModeActive;
	BOOL _cameraVisible;
	NSDate* _lastCameraSessionID;
	BOOL _exitedCameraForAlert;
	BOOL _exitedCameraToHomescreen;
	BOOL _restartCameraAfterCall;
	BOOL _disableGracePeriodForCamera;
	SBPasscodeLockDisableAssertion* _disableGracePeriodForCameraAssertion;
	NSObject<OS_dispatch_queue>* _prewarmQueue;
	id _savedWindowDelegate;
	BOOL _prewarming;
	id<SBLockScreenCameraControllerDelegate> _delegate;
}
@property(assign, nonatomic) id<SBLockScreenCameraControllerDelegate> delegate;
@property(readonly, assign, nonatomic) UIView* cameraView;
-(void)_didDeactivate;
-(void)_didActivate;
-(BOOL)isCameraVisible;
-(BOOL)isCameraActive;
-(void)abortDynamicAnimationForScreenOff;
-(void)tearDownCameraUIImmediately;
-(void)_disableRotationForCamera;
-(void)_enableRotationForCamera;
-(void)_dismissCameraAnimated:(BOOL)animated;
-(void)_tearDownCameraPreview;
-(void)_removeCameraPreviewViews;
-(void)_activateCameraAfterCall;
-(void)prepareToReturnToCameraFromCall;
-(BOOL)shouldReturnToCameraAfterCall;
-(void)cancelReturnToCameraAfterCall;
-(void)noteStartingPhoneCallWhileUILocked;
-(void)presentCameraAnimated:(BOOL)animated;
-(void)activateCamera;
-(void)setDisableGracePeriodForCamera:(BOOL)camera;
-(void)_hideLockScreenView;
-(void)_activateCameraWithNewSessionID:(BOOL)newSessionID afterCall:(BOOL)call;
-(void)_createCameraViewControllerWithOldSessionID;
-(void)_createCameraViewControllerWithNewSessionID;
-(void)_createCameraViewControllerWithNewSessionID:(BOOL)newSessionID andStartPreview:(BOOL)preview;
-(void)_setCameraSessionID:(id)anId;
-(void)finalizeGesture;
-(void)translateSlidingViewByY:(float)y;
-(void)_setupCameraSlideDownAnimation;
-(void)cleanupFromGesture;
-(void)_cleanupFromDismissal;
-(void)prepareForSlideUpAnimation;
-(void)_removeLockScreenViewFakeStatusBar;
-(void)_cancelCameraPrewarm;
-(void)_prewarmCamera;
-(BOOL)handleMenuButtonTap;
-(void)deactivate;
-(void)activate;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)setInScreenOffMode:(BOOL)screenOffMode;
-(BOOL)wantsStatusBar;
-(void)setGrabberOnLockScreen:(id)screen;
-(id)grabberView;
-(void)setLockScreenView:(id)view;
-(void)dealloc;
-(id)init;
@end

