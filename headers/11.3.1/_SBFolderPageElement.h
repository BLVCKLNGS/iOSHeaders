//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBFolderIcon, SBIconGridImage;

@interface _SBFolderPageElement : NSObject
{
    SBIconGridImage *_gridImage;
    unsigned long long _visibleRow;
    unsigned long long _pageIndex;
    SBFolderIcon *_folderIcon;
}

- (void).cxx_destruct;
- (unsigned long long)firstVisibleMiniIconIndex;
- (unsigned long long)firstVisibleRowForGap;
@property(nonatomic) __weak SBFolderIcon *folderIcon; // @synthesize folderIcon=_folderIcon;
@property(retain, nonatomic) SBIconGridImage *gridImage; // @synthesize gridImage=_gridImage;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) unsigned long long visibleRow; // @synthesize visibleRow=_visibleRow;

@end

