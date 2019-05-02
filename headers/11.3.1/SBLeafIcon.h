//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIcon.h"

#import "NSCopying.h"

@class NSMutableSet, NSString;

@interface SBLeafIcon : SBIcon <NSCopying>
{
    NSString *_leafIdentifier;
    NSString *_applicationBundleID;
    NSMutableSet *_dataSources;
    id <SBLeafIconDataSource> _activeDataSource;
    id <SBLeafIconDataSource> _dataSourceAtUninstallation;
}

+ (Class)downloadingIconClass;
- (void).cxx_destruct;
- (void)_noteActiveDataSourceDidChangeAndReloadIcon:(_Bool)arg1;
- (void)_noteActiveDataSourceDidChangeNotification:(id)arg1;
- (void)_noteActiveDataSourceDidGenerateIconFormat:(int)arg1;
- (void)_noteActiveDataSourceDidGenerateImageNotification:(id)arg1;
- (void)_noteDataSourceDidInvalidateNotification:(id)arg1;
- (void)_updateActiveDataSource;
- (id)accessoryTextForLocation:(long long)arg1;
- (int)accessoryTypeForLocation:(long long)arg1;
- (id)activeDataSource;
- (void)addIconDataSource:(id)arg1;
- (id)applicationBundleID;
- (id)badgeNumberOrString;
- (_Bool)canEllipsizeLabel;
- (_Bool)canTightenLabel;
- (void)completeUninstall;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)displayNameForLocation:(long long)arg1;
- (id)generateIconImage:(int)arg1;
- (id)getGenericIconImage:(int)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isUninstallSupported;
- (long long)labelAccessoryType;
- (_Bool)launchEnabled;
- (void)launchFromLocation:(long long)arg1 context:(id)arg2 activationSettings:(id)arg3 actions:(id)arg4;
- (id)leafIdentifier;
- (id)nodeIdentifier;
- (_Bool)progressIsPaused;
- (double)progressPercent;
- (long long)progressState;
- (void)removeIconDataSource:(id)arg1;
- (void)removeIconDataSourcesOfClass:(Class)arg1;
- (void)setUninstalled;

@end

