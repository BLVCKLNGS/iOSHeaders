//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "SBDashBoardStatusTextViewControllerDelegate.h"

@class NSString, SBDashBoardFixedFooterView, SBDashBoardStatusTextViewController;

@interface SBDashBoardFixedFooterViewController : SBDashBoardViewControllerBase <SBDashBoardStatusTextViewControllerDelegate>
{
    SBDashBoardStatusTextViewController *_statusTextViewController;
    NSString *_cachedMesaFailureText;
    _Bool _temporaryMesaFailureTextActive;
    _Bool _authenticatedSinceFingerOn;
}

+ (Class)viewClass;
- (void).cxx_destruct;
- (void)dashBoardStatusTextViewControllerContentDidChange:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)updateCallToActionForMesaMatchFailure;
@property(readonly, nonatomic) SBDashBoardFixedFooterView *fixedFooterView;
- (void)_updateCallToActionTextAnimated:(_Bool)arg1;
- (void)updateCallToActionForReversingInteractiveTransition;
- (void)_addStatusTextViewControllerIfNecessary;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

