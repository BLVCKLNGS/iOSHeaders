/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSString, NSArray, NSDateFormatter, NSTimer, NSHashTable;

__attribute__((visibility("hidden")))
@interface SBStatusBarStateAggregator : XXUnknownSuperclass {
	unsigned _coalescentBlockDepth;
	BOOL _hasPostedOnce;
	unsigned _itemPostState[25];
	BOOL _nonItemDataChanged;
	XXStruct_8iXKhD _data;
	int _actions;
	NSHashTable* _postObservers;
	BOOL _notifyingPostObservers;
	NSDateFormatter* _timeItemDateFormatter;
	NSTimer* _timeItemTimer;
	NSString* _timeItemTimeString;
	NSString* _operatorName;
	NSString* _serviceString;
	NSString* _serviceCrossfadeString;
	NSArray* _countryCodesShowingEmergencyOnlyStatus;
	BOOL _showsActivityIndicatorOnHomeScreen;
	int _activityIndicatorEverywhereCount;
	BOOL _showsActivityIndicatorForNewsstand;
	int _syncActivityIndicatorCount;
	NSString* _activityDisplayIdentifier;
	BOOL _showingNotChargingItem;
	NSString* _batteryDetailString;
	BOOL _alarmEnabled;
	BOOL _applyingAssistantStyle;
}
+(int)_thermalColorForLevel:(int)level;
+(id)sharedInstance;
-(void)_noteNotChargingStatusChanged;
-(void)_setShowingNotChargingItem;
-(BOOL)_shouldShowNotChargingItem;
-(BOOL)_shouldShowEmergencyOnlyStatus;
-(id)_sbCarrierNameForOperator:(id)anOperator;
-(id)_displayStringForRegistrationStatus:(int)registrationStatus;
-(id)_displayStringForSIMStatus:(id)simstatus;
-(BOOL)_simStatusMeansLocked:(id)locked;
-(void)_noteAirplaneModeChanged;
-(void)_resetTimeItemFormatter;
-(void)_restartTimeItemTimer;
-(void)_stopTimeItemTimer;
-(void)_requestActions:(int)actions;
-(void)_notifyNonItemDataChanged;
-(void)_notifyItemChanged:(int)changed;
-(BOOL)_setItem:(int)item enabled:(BOOL)enabled;
-(void)_postItem:(int)item withState:(unsigned)state;
-(void)updateStatusBarItem:(int)item;
-(void)_updateTetheringState;
-(void)_updateThermalColorItem;
-(void)_updateAssistantItem;
-(void)_updateAirplayItem;
-(void)_updateQuietModeItem;
-(void)_updateRotationLockItem;
-(void)_updateLocationItem;
-(void)_updateActivityItem;
-(void)_updateCallForwardingItem;
-(void)_updateVPNItem;
-(void)_updateAlarmItem;
-(void)_updateTTYItem;
-(void)_updateBluetoothBatteryItem;
-(void)_updateBluetoothItem;
-(void)_updateBatteryItems;
-(void)_updateDataNetworkItem;
-(void)_updateServiceItem;
-(void)_updateSignalStrengthItem;
-(void)_updateAirplaneMode;
-(void)_updateTimeItems;
-(void)_registerForNotifications;
-(void)removePostingObserver:(id)observer;
-(void)addPostingObserver:(id)observer;
-(void)sendStatusBarActions:(int)actions;
-(void)setShowsSyncActivityIndicator:(BOOL)indicator;
-(void)setShowsActivityIndicatorForNewsstand:(BOOL)newsstand;
-(void)setShowsActivityIndicatorEverywhere:(BOOL)everywhere;
-(void)setShowsActivityIndicatorOnHomeScreen:(BOOL)screen;
-(void)setAlarmEnabled:(BOOL)enabled;
-(id)operatorName;
-(void)endCoalescentBlock;
-(void)beginCoalescentBlock;
-(void)dealloc;
-(id)init;
@end
