/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIWindow, NSMutableDictionary;

@interface SBSheetController : XXUnknownSuperclass {
	NSMutableDictionary* _appToSheetMap;
	UIWindow* _presentationWindow;
}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)presentSheetView:(id)view animated:(BOOL)animated;
-(void)_tearDownSheet:(id)sheet;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)dismissSheetView:(id)view animated:(BOOL)animated;
-(BOOL)presentRemoteViewIdentifier:(id)identifier asSheetForApplication:(id)application requireTopApplication:(BOOL)application3 animated:(BOOL)animated;
-(void)dismissRemoteViewIdentifier:(id)identifier forApplication:(id)application animated:(BOOL)animated;
-(void)sendDeviceOrientationChangesToSheets;
-(void)sendStatusBarOrientationWillChangeToSheets:(int)sendStatusBarOrientation duration:(float)duration;
-(BOOL)isShowingSheets;
-(BOOL)isShowingSheetsForApplication:(id)application;
-(void)dismissAllSheets;
-(void)dismissSheetsForApplication:(id)application;
-(id)applicationForTopSheet;
-(BOOL)sheetWantsProgress;
@end

