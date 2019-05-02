/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BSTransactionObserver.h"


@protocol FBApplicationUpdateScenesTransactionObserver <BSTransactionObserver>
@optional
-(void)transaction:(id)transaction didCommitSceneUpdate:(id)update;
-(void)transaction:(id)transaction willCommitSceneUpdate:(id)update;
-(void)transaction:(id)transaction willUpdateScene:(id)scene;
-(void)transaction:(id)transaction didCreateScene:(id)scene;
-(void)transaction:(id)transaction didLaunchProcess:(id)process;
-(void)transaction:(id)transaction willLaunchProcess:(id)process;
@end

