/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBApplication;

@interface SBProxyRemoteView : XXUnknownSuperclass {
	id _delegate;
	SBApplication* _app;
	NSString* _remoteViewIdentifier;
	BOOL _remoteViewOpaque;
}
@property(retain, nonatomic) NSString* remoteViewIdentifier;
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic) BOOL remoteViewOpaque;
+(Class)layerClass;
-(id)init;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)connectToContextID:(unsigned)contextID forIdentifier:(id)identifier application:(id)application;
-(void)_setIsConnected:(BOOL)connected;
-(void)noteConnectionLost;
-(void)disconnect;
@end

