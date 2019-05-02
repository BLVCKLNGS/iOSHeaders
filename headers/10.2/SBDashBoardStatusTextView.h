//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBUILegibility.h"

@class NSArray, NSString, SBUILegibilityLabel, _UILegibilitySettings;

@interface SBDashBoardStatusTextView : UIView <SBUILegibility>
{
    _UILegibilitySettings *_legibilitySettings;
    double _strength;
    SBUILegibilityLabel *_internalLegalTextLabel;
    SBUILegibilityLabel *_deviceInformationLabel;
    SBUILegibilityLabel *_supervisionLabel;
    unsigned long long _transactionCount;
    NSString *_internalLegalText;
    NSString *_supervisionText;
    NSArray *_deviceInformationText;
}

@property(copy, nonatomic) NSArray *deviceInformationText; // @synthesize deviceInformationText=_deviceInformationText;
@property(copy, nonatomic) NSString *supervisionText; // @synthesize supervisionText=_supervisionText;
@property(copy, nonatomic) NSString *internalLegalText; // @synthesize internalLegalText=_internalLegalText;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(nonatomic) double strength; // @synthesize strength=_strength;
- (void).cxx_destruct;
- (double)_spacingBetweenNonLegalLabels;
- (double)_lineHeightOfNonLegalLabels;
- (double)_nonLegalTextParagraphSpacing;
- (double)_nonLegalLabelFontLeading;
- (void)_updateDeviceInformationLabel;
- (void)_updateSupervisionLabel;
- (void)_updateInternalLegalLabel;
- (id)_font;
- (void)_updateLegibilityStrength;
- (void)_updateTextViews;
- (void)_updateTextViewsIfNecessary;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateTextsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

