/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDataPlanAlertItem.h"

@class NSURL;

@interface SBDataPlanAccountAlertItem : SBDataPlanAlertItem {
	NSURL* _accountURL;
}
@property(copy, nonatomic) NSURL* accountURL;
+(id)laterButtonTitle;
+(id)nowButtonTitle;
-(id)initWithAccountURL:(id)accountURL;
-(void)dealloc;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
@end

