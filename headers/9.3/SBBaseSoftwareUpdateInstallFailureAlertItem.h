/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:30 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBBaseSoftwareUpdateAlertItem.h>

@interface SBBaseSoftwareUpdateInstallFailureAlertItem : SBBaseSoftwareUpdateAlertItem {

	BOOL _actionTaken;

}

@property (assign,nonatomic) BOOL actionTaken;              //@synthesize actionTaken=_actionTaken - In the implementation block
-(BOOL)actionTaken;
-(void)setActionTaken:(BOOL)arg1 ;
-(void)willDeactivateForReason:(int)arg1 ;
-(BOOL)allowInSetup;
@end

