/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDataSource.h"
#import "Springboard-Structs.h"
#import "UITableViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, SBAssistantGuideDomainModel, UITableView;

@interface SBAssistantGuideSectionListController : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource> {
	UITableView* _tableView;
	SBAssistantGuideDomainModel* _currentDomain;
	NSMutableArray* _cells;
}
@property(retain, nonatomic) SBAssistantGuideDomainModel* currentDomain;
@property(readonly, assign, nonatomic) UITableView* tableView;
-(id)initWithView:(id)view;
-(void)dealloc;
-(void)_reloadCellsForCurrentDomain;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
@end

