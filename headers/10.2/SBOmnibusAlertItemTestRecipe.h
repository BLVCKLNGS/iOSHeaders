//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBTestRecipe.h"
#import "SBThermalWarningAlertItemDelegate.h"

@class NSString, SBAlertItem;

@interface SBOmnibusAlertItemTestRecipe : NSObject <SBThermalWarningAlertItemDelegate, SBTestRecipe>
{
    SBAlertItem *_item;
}

+ (id)title;
- (void).cxx_destruct;
- (id)_nextAlertItemToTest;
- (id)_mapsApp;
- (id)_anySUDescriptor;
- (id)_anyLeafIcon;
- (id)_anyUserInstalledAppIcon;
- (id)_anyAppIcon;
- (void)thermalWarningAlert:(id)arg1 didTriggerAction:(int)arg2;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)_dismissCurrentItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

