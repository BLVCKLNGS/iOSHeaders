//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBAppLayout, SBDisplayItem, UIImage, XBApplicationSnapshot;

@interface SBAppSwitcherSnapshotCacheEntry : NSObject
{
    SBAppLayout *_appLayout;
    SBDisplayItem *_displayItem;
    XBApplicationSnapshot *_snapshot;
    UIImage *_snapshotImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (id)description;
@property(retain, nonatomic) SBDisplayItem *displayItem; // @synthesize displayItem=_displayItem;
@property(readonly, nonatomic) long long role;
@property(retain, nonatomic) XBApplicationSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;

@end

