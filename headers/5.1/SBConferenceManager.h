/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CNFConferenceController;

@interface SBConferenceManager : XXUnknownSuperclass {
	CNFConferenceController* _conferenceController;
	unsigned _chatState;
}
@property(readonly, assign) unsigned chatState;
@property(readonly, assign) CNFConferenceController* conferenceController;
+(id)sharedInstance;
+(void)initialize;
-(id)init;
-(BOOL)videoConferenceInvitationExists;
-(BOOL)activeFaceTimeCallExists;
-(BOOL)inConference;
-(BOOL)canStartConference;
-(void)dealloc;
-(void)_handleInvitation:(id)invitation;
-(void)_conferenceStateChanged:(id)changed;
-(void)endConference;
-(id)currentCallRemoteUserId;
-(id)currentCallStatusDisplayString;
-(void)_conferenceAvailabilityChanged:(id)changed;
-(void)_conferenceCapabilityChanged:(id)changed;
-(void)updateStatusBar;
-(void)_updateStatusBar;
@end

