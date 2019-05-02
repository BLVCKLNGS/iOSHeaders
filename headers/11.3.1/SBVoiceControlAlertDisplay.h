//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertView.h"

#import "SUICFlamesViewDelegate.h"
#import "SiriUISuggestionsViewDelegate.h"
#import "VSRecognitionSessionDelegate.h"
#import "VSSpeechSynthesizerDelegate.h"

@class NSDictionary, NSString, SUICFlamesView, SiriUISuggestionsView, UILabel, UIView, VSRecognitionSession;

@interface SBVoiceControlAlertDisplay : SBAlertView <VSRecognitionSessionDelegate, VSSpeechSynthesizerDelegate, SUICFlamesViewDelegate, SiriUISuggestionsViewDelegate>
{
    VSRecognitionSession *_session;
    _Bool _wasRecognizing;
    _Bool _didConfigureRouting;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SUICFlamesView *_flamesView;
    SiriUISuggestionsView *_suggestionsView;
    long long _keywordCount;
    long long _startingKeywordIndex;
    NSDictionary *_locStrings;
    _Bool _didDismiss;
    _Bool _awaitingButtonRelease;
    _Bool _isBecomingVisible;
    CDUnknownBlockType _postSoundBlock;
}

- (void).cxx_destruct;
- (void)_configureRoutingIfNecessary;
- (void)_continueRecognitionAction;
- (void)_continueWithRecognitionAction;
- (id)_desiredRouteDictionary;
- (void)_dismissSlightlyLater;
- (void)_invalidateRouting;
- (void)_keywordsChanged;
- (id)_localizedStringForKey:(id)arg1;
- (_Bool)_openDialRequest:(id)arg1;
- (void)_performConfirmationAction;
- (void)_performNoMatchFound;
- (void)_pickedRouteChanged:(id)arg1;
- (void)_resetSession;
- (void)_setFeedbackVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_speakFeedbackText;
- (void)_speakText:(id)arg1;
- (void)_startSession;
- (double)_subtitleBaseline;
- (double)_titleBaseline;
- (_Bool)_wasTriggeredByMenu;
- (void)alertDisplayWillBecomeVisible;
- (void)alertWillBeDismissed;
- (_Bool)alphanumericKeyboard;
- (float)audioLevelForFlamesView:(id)arg1;
- (void)dealloc;
- (void)dismiss;
- (void)handleButtonUpCancel;
- (void)handleHeadsetButtonUpFromActivation:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;
- (id)nextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2;
@property(copy, nonatomic) CDUnknownBlockType postSoundBlock; // @synthesize postSoundBlock=_postSoundBlock;
- (void)recognitionSession:(id)arg1 didCompleteActionWithError:(id)arg2;
- (void)recognitionSession:(id)arg1 didFinishSpeakingFeedbackStringWithError:(id)arg2;
- (id)recognitionSession:(id)arg1 openURL:(id)arg2;
- (void)recognitionSessionDidBeginAction:(id)arg1;
- (_Bool)recognitionSessionWillBeginAction:(id)arg1;
- (void)setStatusText:(id)arg1;
- (void)setTitleText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
