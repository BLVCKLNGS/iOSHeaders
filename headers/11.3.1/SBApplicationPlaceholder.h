//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSInvalidatable.h"
#import "FBApplicationPlaceholderObserver.h"
#import "SBLeafIconDataSource.h"

@class FBApplicationPlaceholder, NSMutableDictionary, NSMutableSet, NSString;

@interface SBApplicationPlaceholder : NSObject <FBApplicationPlaceholderObserver, SBLeafIconDataSource, BSInvalidatable>
{
    _Bool _invalidated;
    NSMutableDictionary *_generatedIconImagesByKey;
    NSMutableSet *_formatsPendingGeneration;
    FBApplicationPlaceholder *_placeholderProxy;
    id <SBApplicationPlaceholderDelegate> _delegate;
}

+ (id)backgroundQueue;
- (void).cxx_destruct;
- (id)_defaultIconImageWithFormat:(int)arg1;
- (void)_generateIconImageWithFormat:(int)arg1;
- (void)_generatePendingIconFormats;
- (id)_getOrGenerateIconImageWithFormat:(int)arg1;
- (id)_iconImageKeyForBundleID:(id)arg1 format:(int)arg2;
- (void)_progressChanged;
- (void)_reloadThumbnailImage;
- (_Bool)_shouldDisplayAppName;
- (id)applicationBundleID;
- (id)applicationDisplayName;
- (_Bool)cancel;
- (void)dealloc;
@property(nonatomic) __weak id <SBApplicationPlaceholderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (id)fetchIconImageWithFormat:(int)arg1;
- (id)icon:(id)arg1 defaultImageWithFormat:(int)arg2;
- (id)icon:(id)arg1 imageWithFormat:(int)arg2;
- (_Bool)icon:(id)arg1 launchFromLocation:(long long)arg2 context:(id)arg3 activationSettings:(id)arg4 actions:(id)arg5;
- (int)iconAccessoryType:(id)arg1;
- (_Bool)iconAllowsLaunch:(id)arg1;
- (id)iconBadgeNumberOrString:(id)arg1;
- (_Bool)iconCanEllipsizeLabel:(id)arg1;
- (_Bool)iconCanTightenLabel:(id)arg1;
@property(readonly, nonatomic) Class iconClass;
- (_Bool)iconCompleteUninstall:(id)arg1;
- (id)iconDisplayName:(id)arg1 forLocation:(long long)arg2;
- (id)iconFormattedAccessoryString:(id)arg1;
- (long long)iconLabelAccessoryType:(id)arg1;
- (unsigned long long)iconPriority:(id)arg1;
- (_Bool)iconProgressIsPaused:(id)arg1;
- (double)iconProgressPercent:(id)arg1;
- (long long)iconProgressState:(id)arg1;
- (_Bool)iconSupportsUninstall:(id)arg1;
- (id)initWithPlaceholderProxy:(id)arg1;
- (unsigned long long)installType;
- (void)invalidate;
- (_Bool)isActive;
@property(readonly, nonatomic, getter=isCancelable) _Bool cancelable;
- (_Bool)isCloudDemoted;
- (_Bool)isDone;
- (_Bool)isDownloading;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isFailed;
- (_Bool)isInstalling;
@property(readonly, nonatomic, getter=isPausable) _Bool pausable;
- (_Bool)isPaused;
@property(readonly, nonatomic, getter=isPrioritizable) _Bool prioritizable;
- (_Bool)isStoreDownload;
- (_Bool)isWaiting;
- (_Bool)pause;
- (void)placeholderDidChangeSignificantly:(id)arg1;
- (void)placeholderProgressDidUpdate:(id)arg1;
@property(readonly, nonatomic) FBApplicationPlaceholder *placeholderProxy; // @synthesize placeholderProxy=_placeholderProxy;
- (_Bool)prioritize;
- (_Bool)resume;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

