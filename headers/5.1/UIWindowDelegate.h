/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import "NSObject.h"


@protocol UIWindowDelegate <NSObject>
@optional
-(void)window:(id)window willAnimateFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame3;
-(BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)rotatingContentViewForWindow:(id)window;
-(id)rotatingHeaderViewForWindow:(id)window;
-(id)rotatingFooterViewForWindow:(id)window;
-(void)window:(id)window willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)window:(id)window didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)animation;
-(void)getRotationContentSettings:(XXStruct_3uUjXA*)settings forWindow:(id)window;
-(void)window:(id)window willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)window:(id)window willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
@end

