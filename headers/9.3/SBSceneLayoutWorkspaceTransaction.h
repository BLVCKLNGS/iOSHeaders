/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:31 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWorkspaceTransaction.h>
#import <SpringBoard/FBSynchronizedTransactionGroupDelegate.h>
#import <SpringBoard/FBApplicationUpdateScenesTransactionObserver.h>
#import <libobjc.A.dylib/FBSynchronizedTransaction.h>

@protocol SBSceneLayoutWorkspaceTransactionDelegate, FBSynchronizedTransactionDelegate;
@class FBDisplayLayoutTransition, SBWorkspaceApplicationTransitionContext, FBSynchronizedTransactionGroup, SBSceneBackgroundedStatusAssertion, NSMutableSet, NSMutableDictionary, NSSet, NSDictionary, NSString;

@interface SBSceneLayoutWorkspaceTransaction : SBWorkspaceTransaction <FBSynchronizedTransactionGroupDelegate, FBApplicationUpdateScenesTransactionObserver, FBSynchronizedTransaction> {

	id<SBSceneLayoutWorkspaceTransactionDelegate> _delegate;
	unsigned long long _options;
	FBDisplayLayoutTransition* _fbLayoutTransition;
	BOOL _isTransitioning;
	BOOL _transitionFailed;
	BOOL _delegateTransitionComplete;
	BOOL _synchronizeLayoutTransitionWithSceneUpdates;
	BOOL _performSceneUpdates;
	BOOL _waitForSceneUpdates;
	SBWorkspaceApplicationTransitionContext* _transitionContext;
	FBSynchronizedTransactionGroup* _sceneUpdateTransactionGroup;
	SBSceneBackgroundedStatusAssertion* _scenesBackgroundedStatusAssertion;
	NSMutableSet* _updateTransactions;
	NSMutableDictionary* _appsBySceneID;
	NSMutableDictionary* _activatingAppsBySceneID;
	NSMutableDictionary* _deactivatingAppsBySceneID;
	NSMutableSet* _scenesToBackground;
	id<FBSynchronizedTransactionDelegate> _synchronizationDelegate;

}

@property (assign,nonatomic,__weak) id<SBSceneLayoutWorkspaceTransactionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long options;                                                 //@synthesize options=_options - In the implementation block
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning;                                //@synthesize isTransitioning=_isTransitioning - In the implementation block
@property (nonatomic,readonly) SBWorkspaceApplicationTransitionContext * transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,readonly) NSSet * sceneUpdateTransactions;                                          //@synthesize updateTransactions=_updateTransactions - In the implementation block
@property (nonatomic,readonly) NSDictionary * applications;                                              //@synthesize appsBySceneID=_appsBySceneID - In the implementation block
@property (nonatomic,readonly) NSDictionary * activatingApplications;                                    //@synthesize activatingAppsBySceneID=_activatingAppsBySceneID - In the implementation block
@property (nonatomic,readonly) NSDictionary * deactivatingApplications;                                  //@synthesize deactivatingAppsBySceneID=_deactivatingAppsBySceneID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBSynchronizedTransactionDelegate> synchronizationDelegate;              //@synthesize synchronizationDelegate=_synchronizationDelegate - In the implementation block
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_captureAppsForTransition;
-(void)_performTransition;
-(void)_sendActivationResultWithSuccess:(BOOL)arg1 ;
-(void)_completeTransition;
-(void)_evaluateTransitionCompletion;
-(void)_prepareSynchronizedSceneUpdates;
-(void)_updateScenesForTransitionCompletion;
-(BOOL)_overrideInterfaceOrientationForOrientationMismatch:(long long*)arg1 ;
-(void)_beginLayoutTransitionNow;
-(void)_synchronizeSceneUpdatesNow;
-(void)_prepareScenesForTransition;
-(void)_performSynchronizedCommit;
-(void)_mainDisplayUpdateAggregateDictionaryForLayoutRoleWithApplication:(id)arg1 ;
-(NSDictionary *)deactivatingApplications;
-(void)_updateAggregateDictionary;
-(NSSet *)sceneUpdateTransactions;
-(NSDictionary *)activatingApplications;
-(void)_willBegin;
-(void)setDelegate:(id<SBSceneLayoutWorkspaceTransactionDelegate>)arg1 ;
-(void)dealloc;
-(id<SBSceneLayoutWorkspaceTransactionDelegate>)delegate;
-(SBWorkspaceApplicationTransitionContext *)transitionContext;
-(BOOL)isTransitioning;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(NSDictionary *)applications;
-(void)_willInterruptWithReason:(id)arg1 ;
-(void)_willFailWithReason:(id)arg1 ;
-(void)_didComplete;
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2 ;
-(void)transaction:(id)arg1 didLaunchProcess:(id)arg2 ;
-(void)transaction:(id)arg1 didCreateScene:(id)arg2 ;
-(void)transaction:(id)arg1 willUpdateScene:(id)arg2 ;
-(void)transaction:(id)arg1 willCommitSceneUpdate:(id)arg2 ;
-(void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2 ;
-(BOOL)_canBeInterrupted;
-(void)_begin;
-(id<FBSynchronizedTransactionDelegate>)synchronizationDelegate;
-(void)synchronizedTransactionReadyToCommit:(id)arg1 ;
-(void)performSynchronizedCommit;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(BOOL)isReadyForSynchronizedCommit;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2 ;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2 ;
-(void)setSynchronizationDelegate:(id<FBSynchronizedTransactionDelegate>)arg1 ;
-(BOOL)synchronizedTransactionGroup:(id)arg1 shouldFailForSynchronizedTransaction:(id)arg2 ;
@end

