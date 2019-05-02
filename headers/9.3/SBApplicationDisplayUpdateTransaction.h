/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:31 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>

@class SBApplication, FBApplicationProcess, NSArray;

@interface SBApplicationDisplayUpdateTransaction : FBTransaction {

	SBApplication* _app;
	FBApplicationProcess* _process;
	unsigned long long _sceneState;
	NSArray* _displays;

}
-(id)initWithApplication:(id)arg1 process:(id)arg2 displays:(id)arg3 state:(unsigned long long)arg4 ;
-(void)_willBegin;
-(id)_customizedDescriptionProperties;
@end

