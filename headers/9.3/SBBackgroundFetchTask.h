/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:34 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSProcessAssertion, NSString;

@interface SBBackgroundFetchTask : NSObject {

	BOOL _finished;
	int _sequenceNumber;
	BKSProcessAssertion* _assertion;
	/*^block*/id _completionHandler;
	NSString* _bundleID;
	unsigned long long _trigger;

}

@property (nonatomic,retain) BKSProcessAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned long long trigger;                           //@synthesize trigger=_trigger - In the implementation block
@property (readonly) int sequenceNumber;                                   //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (readonly) BOOL finished;                                        //@synthesize finished=_finished - In the implementation block
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
-(void)_fireCompletionHandlerWithResult:(unsigned long long)arg1 ;
-(id)initForApplication:(id)arg1 trigger:(unsigned long long)arg2 sequenceNumber:(int)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)description;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(int)sequenceNumber;
-(BKSProcessAssertion *)assertion;
-(unsigned long long)trigger;
-(NSString *)bundleID;
-(void)finishWithResult:(unsigned long long)arg1 ;
-(BOOL)finished;
@end

