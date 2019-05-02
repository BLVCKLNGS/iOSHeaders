/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:31 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBAppStatusBarSettings, NSString;

@interface SBAppStatusBarSettingsAssertion : NSObject <BSDescriptionProviding> {

	SBAppStatusBarSettings* _settings;
	unsigned long long _level;
	NSString* _reason;

}

@property (nonatomic,readonly) unsigned long long level;                            //@synthesize level=_level - In the implementation block
@property (nonatomic,copy,readonly) SBAppStatusBarSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                              //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3 ;
-(void)modifySettingsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithSettings:(id)arg1 atLevel:(unsigned long long)arg2 reason:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)invalidate;
-(SBAppStatusBarSettings *)settings;
-(unsigned long long)level;
-(NSString *)reason;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

