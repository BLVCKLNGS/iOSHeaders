/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:34 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkWorkspaceTransaction.h>
#import <SpringBoard/SBSceneLayoutWorkspaceTransactionDelegate.h>
#import <SpringBoard/SBMainScreenApplicationSceneTransactionObserver.h>

@class SBSceneLayoutWorkspaceTransaction, SBWorkspaceEntity, NSString;

@interface SBStarkToAppWorkspaceTransaction : SBStarkWorkspaceTransaction <SBSceneLayoutWorkspaceTransactionDelegate, SBMainScreenApplicationSceneTransactionObserver> {

	BOOL _fromAssistant;
	SBSceneLayoutWorkspaceTransaction* _layoutTransaction;
	BOOL _mainScenesDidCommit;
	/*^block*/id _transitionCompletion;

}

@property (nonatomic,readonly) SBWorkspaceEntity * toEntity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransitionRequest:(id)arg1 ;
-(SBWorkspaceEntity *)toEntity;
-(id)_effectiveTopEntity;
-(void)transactionWillBeginLayoutTransition:(id)arg1 ;
-(void)transaction:(id)arg1 performTransitionWithCompletion:(/*^block*/id)arg2 ;
-(void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(/*^block*/id)arg2 ;
-(void)_performTransition;
-(void)_completeTransition;
-(void)mainScreenApplicationsDidCommitSceneUpdates:(id)arg1 ;
-(void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)arg1 ;
-(void)mainScreenApplicationSceneWillCommit:(id)arg1 ;
-(void)mainScreenApplicationSceneDidCommit:(id)arg1 ;
-(id)_displayForDisplayEntity:(id)arg1 ;
-(void)_evaluateShouldPerformTransition;
-(void)_begin;
@end

