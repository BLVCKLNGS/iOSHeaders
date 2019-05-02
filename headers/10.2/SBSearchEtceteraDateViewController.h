//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBDateTimeOverrideObserver.h"

@class NSDate, NSString, SBFLockScreenAlternateDateLabel, SBUILegibilityLabel, UIView, _UILegibilitySettings;

@interface SBSearchEtceteraDateViewController : UIViewController <SBDateTimeOverrideObserver>
{
    UIView *_containerView;
    SBUILegibilityLabel *_dateLabel;
    SBFLockScreenAlternateDateLabel *_alternateDateLabel;
    NSDate *_overrideDate;
    _Bool _useMultiLineDate;
    _UILegibilitySettings *_legibilitySettings;
}

@property(nonatomic) _Bool useMultiLineDate; // @synthesize useMultiLineDate=_useMultiLineDate;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) UIView *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void).cxx_destruct;
- (void)_layoutDateLabel;
- (void)_updateDateLabel;
- (id)_lunarDateFont;
- (id)_dateLabelFont;
- (void)setupAlternateDateLabelIfNecessary;
- (void)significantTimeChanged:(id)arg1;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

