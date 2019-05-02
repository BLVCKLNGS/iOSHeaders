/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconModelStore.h>

@class NSDictionary, NSString;

@interface SBIconModelMemoryStore : NSObject <SBIconModelStore> {

	NSDictionary* _currentState;
	NSDictionary* _desiredState;

}

@property (nonatomic,copy) NSDictionary * currentState;              //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,copy) NSDictionary * desiredState;              //@synthesize desiredState=_desiredState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithITunesRepresentation:(id)arg1 ;
-(id)loadDesiredIconState:(id*)arg1 ;
-(id)loadCurrentIconState:(id*)arg1 ;
-(BOOL)deleteDesiredIconState:(id*)arg1 ;
-(BOOL)deleteCurrentIconState:(id*)arg1 ;
-(BOOL)saveDesiredIconState:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveCurrentIconState:(id)arg1 error:(id*)arg2 ;
-(id)initWithCurrentState:(id)arg1 desiredState:(id)arg2 ;
-(void)setDesiredState:(NSDictionary *)arg1 ;
-(NSDictionary *)desiredState;
-(id)init;
-(NSDictionary *)currentState;
-(void)setCurrentState:(NSDictionary *)arg1 ;
@end

