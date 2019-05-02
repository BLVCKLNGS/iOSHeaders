//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBFolder, SBFolderController, SBIconListView, UIPinchGestureRecognizer;

@protocol SBFolderControllerDelegate <NSObject>
- (void)folderControllerDidEndScrolling:(SBFolderController *)arg1;
- (void)folderControllerShouldBeginEditing:(SBFolderController *)arg1;
- (void)folderControllerShouldClose:(SBFolderController *)arg1 withPinchGesture:(UIPinchGestureRecognizer *)arg2;
- (void)folderController:(SBFolderController *)arg1 draggedIconShouldDropFromListView:(SBIconListView *)arg2;
- (_Bool)folderController:(SBFolderController *)arg1 draggedIconMightDropFromListView:(SBIconListView *)arg2;
- (_Bool)folderController:(SBFolderController *)arg1 draggedIconDidMoveFromListView:(SBIconListView *)arg2 toListView:(SBIconListView *)arg3;
- (_Bool)folderController:(SBFolderController *)arg1 draggedIconDidPauseAtLocation:(struct CGPoint)arg2 inListView:(SBIconListView *)arg3;
- (Class)controllerClassForFolder:(SBFolder *)arg1;

@optional
- (void)folderControllerDidReceiveCancelReachabilityAction:(SBFolderController *)arg1;
@end

