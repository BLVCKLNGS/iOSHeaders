/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, UIImageView, UILabel;

@interface SBBatteryChargingView : XXUnknownSuperclass {
	int _type;
	UIImageView* _topBatteryView;
	UIImageView* _bottomBatteryView;
	UIImage* _lastBatteryImage;
	UILabel* _percentLabel;
	int _lastBatteryIndex;
	int _lastBatteryPercentage;
	unsigned _showReflection : 1;
}
+(CGSize)defaultSizeForType:(int)type;
+(float)batteryHeightForType:(int)type;
+(int)redChargeIndexForType:(int)type;
-(id)initWithFrame:(CGRect)frame type:(int)type;
-(void)dealloc;
-(void)setShowsReflection:(BOOL)reflection;
-(int)_currentBatteryIndex;
-(id)_imageFormatString;
-(void)_batteryStatusChanged:(id)changed;
@end

