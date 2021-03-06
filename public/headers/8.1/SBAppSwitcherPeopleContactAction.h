/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "NSCopying.h"

@class NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherPeopleContactAction : XXUnknownSuperclass <NSCopying> {
	unsigned _contactType;
	int _abRecordID;
	NSString* _label;
	NSString* _destinationID;
	NSObject<OS_dispatch_queue>* _urlUpdateQueue;
	unsigned _actionType;
}
@property(readonly, assign, nonatomic) NSURL* url;
@property(readonly, assign, nonatomic) NSString* destinationID;
@property(readonly, assign, nonatomic) NSString* label;
@property(readonly, assign, nonatomic) unsigned actionType;
-(id)description;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithType:(unsigned)type label:(id)label destinationID:(id)anId addressBookRecordID:(int)anId4;
@end

