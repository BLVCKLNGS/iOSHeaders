/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class SBWidgetsSettingsTableViewController, BBSectionInfo, NSString, BBSettingsGateway, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBWidgetsSettingsViewController : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource> {
	SBWidgetsSettingsTableViewController* _tableViewController;
	BBSettingsGateway* _bbSettings;
	NSMutableArray* _chronologicalSections;
	NSMutableArray* _enabledWidgets;
	NSMutableArray* _disabledWidgets;
	BBSectionInfo* _todaySection;
	BBSectionInfo* _tomorrowSection;
	BBSectionInfo* _coreRoutineSection;
	BOOL _coreRoutineIsAvailable;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(BOOL)_updateCoreRoutineAvailability;
-(BOOL)_isFixedSnippetsSection:(id)section;
-(int)_indexOfFirstEnabledWidget;
-(int)_indexOfLastEnabledWidget;
-(unsigned)_indexForInsertingSection:(id)insertingSection intoArray:(id)array;
-(id)_sectionInfoForIndexPath:(id)indexPath;
-(id)_sectionInfoArrayForIndexPath:(id)indexPath;
-(void)_disableWidgetAtIndexPath:(id)indexPath inTableView:(id)tableView;
-(void)_enableWidgetAtIndexPath:(id)indexPath inTableView:(id)tableView;
-(BOOL)_setSectionInfo:(id)info enabled:(BOOL)enabled;
-(void)_saveWidgetsState;
-(void)_saveWidgetsSections;
-(void)_loadWidgetsSections;
-(id)_newBackgroundView;
-(void)_dismissWidgetsSettings;
-(BOOL)tableView:(id)view shouldDrawTopSeparatorForSection:(int)section;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndReorderingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
-(id)tableView:(id)view targetIndexPathForMoveFromRowAtIndexPath:(id)indexPath toProposedIndexPath:(id)proposedIndexPath;
-(BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

