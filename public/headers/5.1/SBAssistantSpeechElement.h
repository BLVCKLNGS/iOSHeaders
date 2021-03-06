/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SBAssistantSpeechElement : XXUnknownSuperclass {
	NSString* _string;
	NSString* _refIdentifier;
	BOOL _autoStartListeningWhenComplete;
}
@property(copy, nonatomic) NSString* string;
@property(assign, nonatomic) BOOL autoStartListeningWhenComplete;
@property(copy, nonatomic) NSString* refIdentifier;
+(id)speechElementForString:(id)string listenFollowingSpeech:(BOOL)speech;
-(id)description;
-(void)dealloc;
@end

