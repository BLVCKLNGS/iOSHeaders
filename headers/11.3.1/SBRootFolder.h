//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFolder.h"

@class SBIconListModel;

@interface SBRootFolder : SBFolder
{
    id <SBRootFolderDelegate> _delegate;
}

+ (_Bool)isRootFolderClass;
- (void).cxx_destruct;
- (id)_listsForCompaction;
@property(retain, nonatomic, setter=_setDock:) SBIconListModel *dock;
- (_Bool)canAddIconCount:(unsigned long long)arg1 startingAtList:(id)arg2;
- (_Bool)canEditDisplayName;
- (_Bool)canRemoveIcons;
- (id)children;
@property(nonatomic) __weak id <SBRootFolderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)indexPathForFirstFreeSlotStartingAtList:(id)arg1 avoidingFirstList:(_Bool)arg2;
- (_Bool)isIconAtIndexPathInDock:(id)arg1;
- (_Bool)isRootFolder;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (id)nodeIdentifier;
- (void)placeIconsOnFirstPage:(id)arg1;
@property(readonly, nonatomic) _Bool supportsDock;

@end

