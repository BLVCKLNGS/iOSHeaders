/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBulletinModalController.h"
#import "Springboard-Structs.h"
#import "SBBulletinAlertHandler.h"
#import "SBBulletinBusyClient.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BBObserverDelegate.h"

@class NSMutableArray, NSMutableDictionary, BBObserver, NSMapTable;

@interface SBBulletinModalController : XXUnknownSuperclass <BBObserverDelegate, SBBulletinAlertHandler, SBBulletinBusyClient> {
	BBObserver* _observer;
	BOOL _deviceIsLocked;
	NSMutableArray* _incomingBulletinEventQueue;
	NSMutableDictionary* _handlersBySectionID;
	NSMapTable* _handlersByBulletinID;
	NSMapTable* _alertsByBulletinID;
}
+(id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(id)init;
-(void)_dequeuePendedEventsIfPossible;
-(BOOL)_enqueueEventBlock:(id)block;
-(void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
-(void)observer:(id)observer modifyBulletin:(id)bulletin;
-(void)observer:(id)observer removeBulletin:(id)bulletin;
-(void)observer:(id)observer purgeReferencesToBulletinID:(id)bulletinID;
-(void)bulletinWindowStoppedBeingBusy;
-(BOOL)bindBulletin:(id)bulletin forRegistry:(id)registry;
-(void)handleEvent:(int)event withBulletin:(id)bulletin forRegistry:(id)registry;
@end

@interface SBBulletinModalController (SBBulletinModalAlertLifeCycle)
-(void)destroyingAlert:(id)alert withBulletinID:(id)bulletinID;
@end
