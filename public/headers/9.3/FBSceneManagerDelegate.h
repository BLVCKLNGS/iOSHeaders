/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:29 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSceneManagerDelegate <FBSceneManagerObserver>
@optional
-(long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2;
-(id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2;

@required
-(void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3;

@end
