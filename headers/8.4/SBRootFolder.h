//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFolder.h"

@class SBIconListModel;

@interface SBRootFolder : SBFolder
{
}

+ (_Bool)isRootFolderClass;
- (_Bool)isRootFolder;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (id)nodeIdentifier;
- (void)_setDock:(id)arg1;
@property(retain, nonatomic) SBIconListModel *dock;
@property(readonly, nonatomic) _Bool supportsDock;
- (void)placeIconsOnFirstPage:(id)arg1;
- (id)_listsForCompaction;
- (_Bool)canEditDisplayName;
- (_Bool)canRemoveIcons;

@end
