/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWindow.h>

@class SBAssistantRootViewController;

@interface SBAssistantWindow : SBWindow

@property (nonatomic,readonly) SBAssistantRootViewController * assistantRootViewController; 
+(BOOL)sb_autorotates;
+(BOOL)_isSecure;
-(SBAssistantRootViewController *)assistantRootViewController;
-(id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4 ;
-(void)dealloc;
-(BOOL)isOpaque;
@end

