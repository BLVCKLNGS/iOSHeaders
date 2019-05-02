//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

#import "UIAlertViewDelegate.h"

@class NSObject<OS_dispatch_semaphore>, NSString, SBIcon;

@interface SBDeleteIconAlertItem : SBAlertItem <UIAlertViewDelegate>
{
    SBIcon *_icon;
    _Bool _checkedDocumentsInCloudState;
    _Bool _appHasDocumentsInCloud;
    _Bool _appHasDocumentsWithPendingUpdates;
    _Bool _askedUserAboutDocumentsDocumentsInCloud;
    _Bool _askedUserAboutDocumentsWithPendingUpdates;
    _Bool _checkedForRelatedData;
    _Bool _finishedCheckingForRelatedData;
    _Bool _appHasHealthKitData;
    _Bool _appHasGameKitData;
    NSObject<OS_dispatch_semaphore> *_healthKitResponseSem;
}

- (_Bool)_hasRelatedData;
- (void)_waitForRelatedDataResponsesIfNeeded;
- (void)_startCheckingForRelatedExternalDataIfNeeded;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)_checkDocumentsInCloudStateIfNeeded;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)icon;
- (void)dealloc;
- (id)initWithIcon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

