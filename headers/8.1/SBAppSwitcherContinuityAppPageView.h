/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAppSwitcherPageView.h"

@class SBSaturatedIconView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherContinuityAppPageView : SBAppSwitcherPageView {
	UIView* _infoView;
	UIView* _iconTintView;
	SBSaturatedIconView* _saturatedIconView;
	UILabel* _deviceNameLabelBackdrop;
	UILabel* _deviceNameLabelForeground;
	float _deviceLabelOffset;
}
-(void)_viewDismissing:(id)dismissing;
-(id)auxiliaryView;
-(void)layoutSubviews;
-(float)_heightForDeviceLabel:(id)deviceLabel withWidth:(float)width;
-(void)setView:(id)view animated:(BOOL)animated;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame suggestedApp:(id)app;
@end

