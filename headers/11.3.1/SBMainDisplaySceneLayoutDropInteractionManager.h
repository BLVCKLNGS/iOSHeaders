//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSTransactionObserver.h"
#import "UIDropInteractionDelegate.h"

@class NSHashTable, NSString, SBDragAndDropAppActivationWorkspaceTransaction, SBMainDisplaySceneLayoutViewController, UIDropInteraction;

@interface SBMainDisplaySceneLayoutDropInteractionManager : NSObject <BSTransactionObserver, UIDropInteractionDelegate>
{
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    UIDropInteraction *_dropInteraction;
    SBDragAndDropAppActivationWorkspaceTransaction *_activeTransaction;
    NSHashTable *_activeDropSessions;
}

- (void).cxx_destruct;
- (id)_activeTransactionForSession:(id)arg1 startIfNecessary:(_Bool)arg2;
- (id)_applicationForSession:(id)arg1;
- (void)_startTransactionForDropSession:(id)arg1;
- (_Bool)_workspaceWouldAllowTransitionToApplication:(id)arg1;
@property(retain, nonatomic) NSHashTable *activeDropSessions; // @synthesize activeDropSessions=_activeDropSessions;
@property(retain, nonatomic) SBDragAndDropAppActivationWorkspaceTransaction *activeTransaction; // @synthesize activeTransaction=_activeTransaction;
- (void)dealloc;
@property(retain, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)initWithSceneLayoutViewController:(id)arg1;
@property(readonly, nonatomic) __weak SBMainDisplaySceneLayoutViewController *sceneLayoutViewController; // @synthesize sceneLayoutViewController=_sceneLayoutViewController;
- (void)transactionDidComplete:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

