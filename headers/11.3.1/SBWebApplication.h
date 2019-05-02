//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplication.h"

@class NSString, NSURL, SBBookmarkIcon;

@interface SBWebApplication : SBApplication
{
    SBBookmarkIcon *_bookmarkIcon;
    NSURL *_launchURL;
}

+ (id)_snapshotDirectory;
+ (id)_snapshotManifest;
+ (id)_webAppIdentifierFromWebClipIdentifier:(id)arg1;
+ (id)_webClipIdentifierFromWebAppIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)_baseSceneIdentifier;
- (id)_createLaunchSnapshotFromImageAtPath:(id)arg1 forSceneID:(id)arg2 size:(struct CGSize)arg3 scale:(double)arg4 interfaceOrientation:(long long)arg5;
- (id)_customStartupImagePathForLaunchingOrientation:(long long)arg1;
- (id)_existingLaunchSnapshotForSceneID:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 interfaceOrientation:(long long)arg4;
- (id)_snapshotManifest;
- (id)bestSnapshotWithImageName:(id)arg1 sceneHandle:(id)arg2 variantID:(id)arg3 scale:(double)arg4 size:(struct CGSize)arg5 contentTypeMask:(unsigned long long)arg6 statusBarStateMask:(unsigned long long)arg7 launchingOrientation:(long long)arg8 contentOverridesContext:(id)arg9;
@property(retain, nonatomic) SBBookmarkIcon *bookmarkIcon;
- (id)displayName;
- (Class)iconClass;
- (id)iconIdentifier;
- (_Bool)isWebApplication;
@property(retain, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
- (void)refreshLaunchImagesInSnapshotManifestIfNeeded;
@property(readonly, copy, nonatomic) NSString *webClipIdentifier;

@end
