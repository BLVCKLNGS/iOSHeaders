//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UABestAppSuggestionManagerDelegate.h"

@class NSString, SBBestAppSuggestion, UABestAppSuggestion, UABestAppSuggestionManager;

@interface SBAppSuggestionManager : NSObject <UABestAppSuggestionManagerDelegate>
{
    UABestAppSuggestionManager *_continuitySuggestionManager;
    UABestAppSuggestion *_continuityCurrentBestSuggestion;
    SBBestAppSuggestion *_currentBestSuggestion;
    _Bool _isListeningForContinuitySuggestion;
    _Bool _isListeningForExpertCenterSuggestion;
    _Bool _screenOnDueToUserEvent;
    _Bool _screenOnAndLookingForEvent;
}

+ (id)sharedInstance;
- (void)bestAppSuggestionChanged:(id)arg1;
- (void)_calculateBestSuggestionAndNotifyListeners;
- (void)noteNotActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2;
- (void)noteActivatingForAppSuggestion:(id)arg1 fromSource:(long long)arg2;
- (void)_setContinuitySuggestionUpdatesEnabled:(_Bool)arg1 expertCenterSuggestionUpdatesEnabled:(_Bool)arg2;
- (void)_evaluateSuggestionUpdates:(id)arg1;
- (void)_handleInitialSpringBoardLaunch;
- (void)_nextUserEventOccured:(id)arg1;
- (void)_screenDidUndim:(id)arg1;
- (void)_screenDidDim:(id)arg1;
- (void)startFetchingPayloadForAppSuggestion:(id)arg1;
- (id)currentSuggestedApp;
- (void)_stopListeningForNotifications;
- (void)_listenForNotifications;
- (void)_destroySuggestionSources;
- (void)_createSuggestionSources;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

