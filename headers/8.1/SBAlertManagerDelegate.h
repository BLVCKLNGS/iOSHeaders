/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol SBAlertManagerDelegate <NSObject>
-(float)sceneLevelForAlerts;
-(CGRect)sceneFrameForAlerts:(id)alerts;
@optional
-(id)alertManager:(id)manager newAlertWindowForScene:(id)scene;
-(BOOL)alertManager:(id)manager shouldDeactivateDismissedAlert:(id)alert;
@end

