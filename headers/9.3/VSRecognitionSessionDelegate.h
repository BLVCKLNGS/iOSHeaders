/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSRecognitionSessionDelegate <NSObject>
@optional
-(void)recognitionSessionDidBeginAction:(id)arg1;
-(BOOL)recognitionSessionWillBeginAction:(id)arg1;
-(id)recognitionSession:(id)arg1 openURL:(id)arg2;
-(void)recognitionSession:(id)arg1 didCompleteActionWithError:(id)arg2;
-(void)recognitionSession:(id)arg1 didFinishSpeakingFeedbackStringWithError:(id)arg2;

@end

