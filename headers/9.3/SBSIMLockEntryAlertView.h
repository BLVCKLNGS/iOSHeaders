/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:29 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBPasscodeEntryAlertView.h>
#import <SpringBoard/SBUIPasscodeLockViewDelegate.h>
#import <SpringBoard/SBSIMLockEntryViewInterface.h>

@class NSString;

@interface SBSIMLockEntryAlertView : SBPasscodeEntryAlertView <SBUIPasscodeLockViewDelegate, SBSIMLockEntryViewInterface> {

	NSString* _languageCode;
	NSString* _code;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_passcodeView;
-(void)alertDisplayWillBecomeVisible;
-(void)setupSuccess;
-(void)setupFailureState;
-(id)initWithFrame:(CGRect)arg1 languageCode:(id)arg2 ;
-(id)localizedStringWithKey:(id)arg1 ;
-(id)_pinAttemptsRemainingLabel;
-(id)_failureTitle;
-(id)_failureLabel;
-(void)setupCurrentLockAttemptState;
-(void)setupUnlockAttemptState;
-(void)_doUnlock;
-(/*^block*/id)_passcodeViewGenerator;
-(void)_unlock;
-(id)label;
-(id)titleText;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
@end

