/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSRecursiveLock;

@interface SBWiFiManager : XXUnknownSuperclass {
	NSRecursiveLock* _lock;
	WiFiManagerClient* _manager;
	WiFiDeviceClient* _device;
	NSString* _deviceInterfaceName;
	WiFiNetwork* _currentNetwork;
	WiFiNetwork* _previousNetwork;
	BOOL _currentNetworkHasBeenSet;
	BOOL _currentNetworkIsIOSHotspot;
	BOOL _currentNetworkIsIOSHotspotHasBeenSet;
	BOOL _powered;
	BOOL _poweredHasBeenSet;
	int _rssiThreshold;
	int _signalStrengthBars;
	int _signalStrengthRSSI;
	BOOL _signalStrengthHasBeenSet;
	BOOL _canPollSignalStrength;
	SCDynamicStoreRef _SCDynamicStoreNetworkState;
	dispatch_source_s* _SCUpdateTimeoutSource;
	WiFiNetwork* _primaryInterface;
	BOOL _primaryInterfaceHasBeenSet;
	BOOL _isPrimaryInterface;
	BOOL _isPrimaryInterfaceChanging;
	double _lastSignalStrengthUpdateTime;
	dispatch_source_s* _signalStrengthTimerSource;
}
+(id)sharedInstance;
-(id)init;
-(WiFiManagerClient*)_manager;
-(void)_updateWiFiState;
-(void)_powerStateDidChange;
-(void)_linkDidChange;
-(void)_updateWiFiDevice:(id)device;
-(void)_updateCurrentNetwork;
-(BOOL)isAssociated;
-(BOOL)isAssociatedToIOSHotspot;
-(BOOL)_cachedIsAssociated;
-(id)currentNetworkName;
-(BOOL)isPowered;
-(BOOL)wiFiEnabled;
-(void)setWiFiEnabled:(BOOL)enabled;
-(int)signalStrengthBars;
-(int)signalStrengthRSSI;
-(void)updateSignalStrength;
-(void)_updateSignalStrengthTimer;
-(id)knownNetworks;
-(void)resetSettings;
-(BOOL)isPrimaryInterface;
-(id)_wifiInterface;
-(void)_primaryInterfaceChanged:(BOOL)changed;
@end

