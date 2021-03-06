/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconModelStore.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface SBIconModelPropertyListFileStore : XXUnknownSuperclass <SBIconModelStore> {
	NSURL* _currentIconStateURL;
	NSURL* _desiredIconStateURL;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSURL* desiredIconStateURL;
@property(retain, nonatomic) NSURL* currentIconStateURL;
-(BOOL)_save:(id)save url:(id)url error:(id*)error;
-(BOOL)_delete:(id)aDelete error:(id*)error;
-(id)_load:(id)load error:(id*)error;
-(id)loadDesiredIconState:(id*)state;
-(id)loadCurrentIconState:(id*)state;
-(BOOL)deleteDesiredIconState:(id*)state;
-(BOOL)deleteCurrentIconState:(id*)state;
-(BOOL)saveDesiredIconState:(id)state error:(id*)error;
-(BOOL)saveCurrentIconState:(id)state error:(id*)error;
-(void)dealloc;
@end

