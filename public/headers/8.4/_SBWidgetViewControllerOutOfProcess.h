//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWidgetViewController.h"

@class NSDate, NSMapTable, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSTimer, UIView, _SBBrokenWidgetView, _SBWidgetRemoteViewController;

@interface _SBWidgetViewControllerOutOfProcess : SBWidgetViewController
{
    _Bool _snapshottingEnabled;
    _Bool _requestingRemoteViewController;
    _Bool _disconnectingRemoteViewController;
    _Bool _encodingLayerTree;
    _Bool _didRequestViewInset;
    _Bool _didUpdate;
    _Bool _blacklisted;
    NSObject<OS_dispatch_queue> *_proxyConnectionQueue;
    NSObject<OS_dispatch_queue> *_proxyDisconnectionQueue;
    NSObject<OS_dispatch_queue> *_proxyRequestQueue;
    NSObject<OS_dispatch_queue> *_diskWriteQueue;
    _SBWidgetRemoteViewController *_remoteViewController;
    id <NSCopying> _extensionRequest;
    UIView *_contentProvidingView;
    UIView *_snapshotView;
    NSTimer *_disconnectionTimer;
    NSObject<OS_dispatch_semaphore> *_viewWillAppearSemaphore;
    NSObject<OS_dispatch_semaphore> *_viewWillDisappearSemaphore;
    CDUnknownBlockType _remoteViewControllerDisconnectionHandler;
    NSDate *_lastUnanticipatedDisconnectionDate;
    NSMapTable *_openAppearanceTransactions;
    _SBBrokenWidgetView *_brokenView;
}

+ (void)initialize;
@property(retain, nonatomic, getter=_brokenView, setter=_setBrokenView:) _SBBrokenWidgetView *brokenView; // @synthesize brokenView=_brokenView;
@property(nonatomic, getter=_isBlacklisted, setter=_setBlacklisted:) _Bool blacklisted; // @synthesize blacklisted=_blacklisted;
@property(nonatomic, getter=_didUpdate, setter=_setDidUpdate:) _Bool didUpdate; // @synthesize didUpdate=_didUpdate;
@property(readonly, nonatomic, getter=_openAppearanceTransactions) NSMapTable *openAppearanceTransactions; // @synthesize openAppearanceTransactions=_openAppearanceTransactions;
@property(retain, nonatomic, getter=_lastUnanticipatedDisconnectionDate, setter=_setLastUnanticipatedDisconnectionDate:) NSDate *lastUnanticipatedDisconnectionDate; // @synthesize lastUnanticipatedDisconnectionDate=_lastUnanticipatedDisconnectionDate;
@property(copy, nonatomic, getter=_remoteViewControllerDisconnectionHandler, setter=_setRemoteViewControllerDisconnectionHandler:) CDUnknownBlockType remoteViewControllerDisconnectionHandler; // @synthesize remoteViewControllerDisconnectionHandler=_remoteViewControllerDisconnectionHandler;
@property(retain, nonatomic, getter=_viewWillDisappearSemaphore, setter=_setViewWillDisappearSemaphore:) NSObject<OS_dispatch_semaphore> *viewWillDisappearSemaphore; // @synthesize viewWillDisappearSemaphore=_viewWillDisappearSemaphore;
@property(retain, nonatomic, getter=_viewWillAppearSemaphore, setter=_setViewWillAppearSemaphore:) NSObject<OS_dispatch_semaphore> *viewWillAppearSemaphore; // @synthesize viewWillAppearSemaphore=_viewWillAppearSemaphore;
@property(nonatomic, getter=_disconnectionTimer, setter=_setDisconnectionTimer:) NSTimer *disconnectionTimer; // @synthesize disconnectionTimer=_disconnectionTimer;
@property(nonatomic, getter=_didRequestViewInset, setter=_setDidRequestViewInset:) _Bool didRequestViewInset; // @synthesize didRequestViewInset=_didRequestViewInset;
@property(nonatomic, getter=_isEncodingLayerTree, setter=_setEncodingLayerTree:) _Bool encodingLayerTree; // @synthesize encodingLayerTree=_encodingLayerTree;
@property(nonatomic, getter=_isDisconnectingRemoteViewController, setter=_setDisconnectingRemoteViewController:) _Bool disconnectingRemoteViewController; // @synthesize disconnectingRemoteViewController=_disconnectingRemoteViewController;
@property(nonatomic, getter=_isRequestingRemoteViewController, setter=_setRequestingRemoteViewController:) _Bool requestingRemoteViewController; // @synthesize requestingRemoteViewController=_requestingRemoteViewController;
@property(nonatomic, getter=_isSnapshottingEnabled, setter=_setSnapshottingEnabled:) _Bool snapshottingEnabled; // @synthesize snapshottingEnabled=_snapshottingEnabled;
@property(retain, nonatomic, getter=_snapshotView, setter=_setSnapshotView:) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic, getter=_contentProvidingView, setter=_setContentProvidingView:) UIView *contentProvidingView; // @synthesize contentProvidingView=_contentProvidingView;
@property(copy, nonatomic, getter=_extensionRequest, setter=_setExtensionRequest:) id <NSCopying> extensionRequest; // @synthesize extensionRequest=_extensionRequest;
@property(retain, nonatomic, getter=_remoteViewController, setter=_setRemoteViewController:) _SBWidgetRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(readonly, nonatomic, getter=_diskWriteQueue) NSObject<OS_dispatch_queue> *diskWriteQueue; // @synthesize diskWriteQueue=_diskWriteQueue;
@property(readonly, nonatomic, getter=_proxyRequestQueue) NSObject<OS_dispatch_queue> *proxyRequestQueue; // @synthesize proxyRequestQueue=_proxyRequestQueue;
@property(readonly, nonatomic, getter=_proxyDisconnectionQueue) NSObject<OS_dispatch_queue> *proxyDisconnectionQueue; // @synthesize proxyDisconnectionQueue=_proxyDisconnectionQueue;
@property(readonly, nonatomic, getter=_proxyConnectionQueue) NSObject<OS_dispatch_queue> *proxyConnectionQueue; // @synthesize proxyConnectionQueue=_proxyConnectionQueue;
- (id)description;
- (id)_cancelTouches;
- (_Bool)_effectiveHasContent;
- (id)_valueForCachedStateKey:(id)arg1;
- (void)_synchronizeCachedState;
- (id)_cachedStateURLEnsuringDirectoryExists:(_Bool)arg1;
- (void)widgetDidTerminateWithError:(id)arg1;
- (void)_disconnectRemoteViewControllerAndCoalesce:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_invalidateDisconnectionTimer;
- (void)_disconnectionTimerDidFire:(id)arg1;
- (void)_disconnectRemoteViewController:(CDUnknownBlockType)arg1;
- (void)_finishDisconnectingRemoteViewControllerWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleReconnectionRequest:(id)arg1;
- (_Bool)_attemptReconnectionAfterUnanticipatedDisconnection;
- (_Bool)_canDisconnectRemoteViewController:(id *)arg1;
- (void)_requestRemoteViewController:(CDUnknownBlockType)arg1;
- (_Bool)_canRequestRemoteViewController:(id *)arg1;
- (void)_handleRequestedViewHeight:(double)arg1 usingAutolayout:(_Bool)arg2 requestIdentifier:(id)arg3;
- (double)_updatePreferredContentSizeWithHeight:(double)arg1;
- (double)_contentWidth;
- (struct UIEdgeInsets)_marginInsets;
- (struct CGSize)_todayContentMaxSize;
- (void)_insertAppropriateViewWithContent;
- (_Bool)_isRemoteViewVisible;
- (void)_insertRemoteViewAfterViewWillAppearWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_canInsertRemoteView;
- (void)_insertContentProvidingSubview:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_endRequestState:(long long)arg1;
- (void)setRequestState:(long long)arg1;
- (void)_loadSnapshotViewFromDiskIfNecessary:(CDUnknownBlockType)arg1;
- (void)_packageViewFromURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_packageViewWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_packageViewWithBlock:(CDUnknownBlockType)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_captureLayerTree:(CDUnknownBlockType)arg1;
- (void)_invalidateSnapshotWithForce:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setSnapshotView:(id)arg1 forLayoutMode:(long long)arg2;
- (void)_removeAllSnapshots;
- (void)_writeSnapshotData:(id)arg1 toURLForLayoutMode:(long long)arg2;
- (void)_removeSnapshotAtURL:(id)arg1;
- (id)_widgetSnapshotURLForLayoutMode:(long long)arg1 ensuringDirectoryExists:(_Bool)arg2;
- (id)_snapshotIdentifierForLayoutMode:(long long)arg1;
- (void)_enqueueRemoteServiceRequest:(CDUnknownBlockType)arg1 withDescription:(id)arg2;
- (void)_enqueueRequest:(CDUnknownBlockType)arg1 inQueue:(id)arg2 trampolinedToMainQueue:(_Bool)arg3 withDescription:(id)arg4;
- (CDUnknownBlockType)_request:(CDUnknownBlockType)arg1 withDescription:(id)arg2 forQueue:(id)arg3 trampolinedToMainQueue:(_Bool)arg4;
- (void)_setupRequestQueue;
- (id)auditToken;
- (void)performUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic, setter=_setImplementsPerformUpdate:) _Bool implementsPerformUpdate; // @dynamic implementsPerformUpdate;
- (void)setHasContent:(_Bool)arg1;
- (void)insertSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestInsertionOfRemoteViewWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidateCachedSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)validateSnapshotViewForActiveLayoutMode;
- (void)captureSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_disconnectRemoteViewControllerImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)disconnectRemoteViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)connectRemoteViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_endRemoteViewControllerAppearanceTransitionIfNecessary;
- (void)_beginRemoteViewControllerAppearanceTransitionIfNecessary:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setSemaphoreInstanceVariable:(id *)arg1 toSemaphore:(id)arg2;
- (void)dealloc;
- (id)initWithWidgetIdentifier:(id)arg1 bundlePath:(id)arg2;

@end

