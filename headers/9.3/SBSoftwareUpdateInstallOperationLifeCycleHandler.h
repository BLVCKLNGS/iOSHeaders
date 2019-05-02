/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SUAutoInstallOperation;

@interface SBSoftwareUpdateInstallOperationLifeCycleHandler : NSObject {

	BOOL _used;
	SUAutoInstallOperation* _tryTonightOperation;

}

@property (nonatomic,readonly) SUAutoInstallOperation * tryTonightOperation;              //@synthesize tryTonightOperation=_tryTonightOperation - In the implementation block
@property (assign,nonatomic) BOOL used;                                                   //@synthesize used=_used - In the implementation block
-(SUAutoInstallOperation *)tryTonightOperation;
-(id)initWithTryTonightInstallOperation:(id)arg1 ;
-(void)_clearTryTonightOperationCancelling:(BOOL)arg1 forReason:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(BOOL)used;
-(void)setUsed:(BOOL)arg1 ;
@end

