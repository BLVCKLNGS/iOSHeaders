//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBSwitcherSnapshotImageView, XBApplicationSnapshot;

@interface _SBAppSwitcherSnapshotContext : NSObject
{
    XBApplicationSnapshot *_snapshot;
    SBSwitcherSnapshotImageView *_snapshotImageView;
    struct CGRect _snapshotReferenceFrame;
}

@property(nonatomic) struct CGRect snapshotReferenceFrame; // @synthesize snapshotReferenceFrame=_snapshotReferenceFrame;
@property(retain, nonatomic) SBSwitcherSnapshotImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
@property(retain, nonatomic) XBApplicationSnapshot *snapshot; // @synthesize snapshot=_snapshot;
- (void).cxx_destruct;

@end

