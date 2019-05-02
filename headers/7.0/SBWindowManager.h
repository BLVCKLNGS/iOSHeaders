/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface SBWindowManager : XXUnknownSuperclass {
	NSMapTable* _windowStateMap;
	NSMapTable* _hidingContextMap;
	SBWindowLevelRange_struct _hideRange;
}
+(void)start;
+(id)sharedInstance;
-(id)dumpKnownWindows;
-(id)dumpHidingState;
-(void)_releaseWindow:(id)window;
-(BOOL)_isHidingWindowLevel:(float)level;
-(void)_captureWindow:(id)window;
-(void)_takeNoteOfWindow:(id)window onScreen:(id)screen;
-(void)_adjustWindowsForActiveHideRange;
-(void)_recomputeHideRangeAndAdjustWindows;
-(BOOL)_isHidingWindows;
-(void)stopHidingWindowsForContext:(id)context;
-(void)startHidingWindowsExclusivelyFromLevel:(float)level toLevel:(float)level2 forContext:(id)context reason:(id)reason;
-(void)setAlpha:(float)alpha forWindow:(id)window;
-(id)init;
@end

