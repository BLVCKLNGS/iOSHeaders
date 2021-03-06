/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBCCButtonControllerDelegate.h"
#import "_UISettingsKeyPathObserver.h"
#import "SBControlCenterSectionViewController.h"

@class NSString, NSMutableArray, NSMutableDictionary, SBControlCenterButtonSectionSettings;

__attribute__((visibility("hidden")))
@interface SBCCButtonSectionController : SBControlCenterSectionViewController <SBCCButtonControllerDelegate, _UISettingsKeyPathObserver> {
	NSMutableArray* _modules;
	NSMutableDictionary* _modulesByID;
	NSMutableDictionary* _moduleControllersByID;
	SBControlCenterButtonSectionSettings* _settings;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) SBControlCenterButtonSectionSettings* settings;
+(Class)buttonControllerClass;
+(Class)viewClass;
-(void)settings:(id)settings changedValueForKeyPath:(id)keyPath;
-(void)_updateSettings;
-(void)buttonController:(id)controller publishStatusUpdate:(id)update;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillPresent;
-(id)_sortKeyForModule:(id)module;
-(id)_controllerForModule:(id)module;
-(void)_deactivateModule:(id)module;
-(void)_activateModule:(id)module;
-(void)_addButtonModule:(id)module;
-(id)_allButtonModules;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)view;
-(id)sectionIdentifier;
-(void)dealloc;
-(id)init;
@end

