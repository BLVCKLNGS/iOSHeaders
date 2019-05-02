/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSDictionary;

@interface SBMediaController : XXUnknownSuperclass {
	int _manualVolumeChangeCount;
	NSDictionary* _nowPlayingInfo;
	float _pendingVolumeChange;
	NSTimer* _volumeCommitTimer;
	BOOL _debounceVolumeRepeat;
	int _numberOfVolumeDecreasesSinceDownButtonDown;
	int _lastNowPlayingAppPID;
	BOOL _lastNowPlayingAppIsPlaying;
	BOOL _suppressHUD;
	BOOL _ringerMuted;
}
@property(assign) BOOL suppressHUD;
@property(assign, nonatomic, getter=isRingerMuted) BOOL ringerMuted;
+(id)sharedInstance;
+(BOOL)applicationCanBeConsideredNowPlaying:(id)playing;
-(id)init;
-(void)dealloc;
-(id)_nowPlayingInfo;
-(void)setNowPlayingInfo:(id)info;
-(BOOL)hasTrack;
-(BOOL)isFirstTrack;
-(BOOL)isLastTrack;
-(BOOL)isPlaying;
-(BOOL)isMovie;
-(BOOL)isTVOut;
-(id)nowPlayingArtist;
-(id)nowPlayingTitle;
-(id)nowPlayingAlbum;
-(id)nowPlayingApplication;
-(id)mediaControlsDestinationApp;
-(BOOL)changeTrack:(int)track;
-(BOOL)beginSeek:(int)seek;
-(BOOL)endSeek:(int)seek;
-(BOOL)togglePlayPause;
-(float)volume;
-(void)setVolume:(float)volume;
-(BOOL)muted;
-(BOOL)lastSavedRingerMutedState;
-(void)_changeVolumeBy:(float)by;
-(float)_calcButtonRepeatDelay;
-(void)increaseVolume;
-(void)decreaseVolume;
-(void)cancelVolumeEvent;
-(void)handleVolumeEvent:(GSEventRef)event;
-(void)_registerForNotifications;
-(void)_unregisterForNotifications;
-(void)_serverConnectionDied:(id)died;
-(void)_systemVolumeChanged:(id)changed;
-(void)_softMuteChanged:(id)changed;
-(void)_systemMuteChanged:(id)changed;
-(void)_nowPlayingInfoChanged;
-(void)_nowPlayingPIDChanged;
-(void)_nowPlayingAppIsPlayingDidChange;
-(void)_cancelPendingVolumeChange;
-(void)_commitVolumeChange:(id)change;
-(void)_delayedExtendSleepTimer;
@end

