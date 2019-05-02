//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLeafIcon.h"

@class NSString, SBApplication, UIImage;

@interface SBApplicationIcon : SBLeafIcon
{
    SBApplication *_application;
    UIImage *_cachedSquareHomeScreenContentsImage;
    NSString *_masqueradeIdentifier;
    CDUnknownBlockType _uninstallStringsLocalizationBlock;
}

- (void).cxx_destruct;
- (id)masqueradeIdentifier;
- (id)application;
- (_Bool)isApplicationIcon;
- (void)_noteActiveDataSourceDidChangeAndReloadIcon:(_Bool)arg1;
- (void)userTouchBegan;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertBodyForAppWithDocumentsOrDataInCloud;
- (id)uninstallAlertBodyNotAllowed;
- (id)uninstallAlertBody;
- (id)uninstallAlertTitleNotAllowed;
- (id)uninstallAlertTitle;
- (id)_localizedUninstallStringForKey:(id)arg1;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (void)setBadge:(id)arg1;
- (id)automationID;
- (id)tags;
- (id)getUnmaskedIconImage:(int)arg1;
- (id)__loadUnmaskedIconImageForFormat:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (void)asynchronouslyRequestIconImageForFormat:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_blockForGeneratingIconImageInBackgroundWithFormat:(int)arg1 complete:(CDUnknownBlockType)arg2;
- (id)__loadIconImageForDataSource:(id)arg1 format:(int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplication:(id)arg1;

@end

