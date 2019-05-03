/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBAwayListCellButtonHandler.h"

@class NSString, UIImage, NSArray, SBAlertItem;

@interface SBAwaySystemAlertItem : XXUnknownSuperclass <SBAwayListCellButtonHandler> {
	SBAlertItem* _currentAlert;
	NSString* _title;
	NSArray* _buttonLabels;
	UIImage* _appImage;
	NSString* _message;
	int _cancelButtonIdx;
	BOOL _isAlarm;
}
-(id)initWithSystemAlert:(id)systemAlert;
-(void)dealloc;
-(id)currentAlert;
-(void)setCurrentAlert:(id)alert;
-(id)message;
-(id)title;
-(id)iconImage;
-(id)sortDate;
-(id)buttonLabels;
-(void)buttonPressedAtIndex:(int)index;
-(int)cancelButtonIndex;
-(BOOL)isAlarm;
@end
