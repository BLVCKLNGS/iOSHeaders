/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SUNetworkObserver <NSObject>
@optional
-(void)operatorBundleChanged;
-(void)carrierBundleChanged;
-(void)cellularRoamingStatusChanged:(BOOL)changed;
-(void)networkChangedFromNetworkType:(int)networkType toNetworkType:(int)networkType2;
@end

