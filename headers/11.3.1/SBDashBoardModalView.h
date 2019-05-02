//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewBase.h"

#import "SBLockScreenModalView.h"

@class NSLayoutConstraint, NSString, SBDashBoardModalButton, SBDashBoardStatusTextViewController, UIButton, UIColor, UIImage, UIImageView, UILabel, UILayoutGuide, UIView, _UILegibilitySettings;

@interface SBDashBoardModalView : SBDashBoardViewBase <SBLockScreenModalView>
{
    id <SBDashBoardModalViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_secondarySubtitleLabel;
    UIImageView *_imageView;
    SBDashBoardModalButton *_primaryActionButton;
    UIButton *_secondaryActionButton;
    UIView *_centralGroupView;
    UILayoutGuide *_dateViewLayoutGuide;
    NSLayoutConstraint *_dateViewVerticalConstraint;
    NSLayoutConstraint *_centralGroupTopConstraint;
    NSLayoutConstraint *_centralGroupBottomConstraint;
    NSString *_overrideFooterText;
    SBDashBoardStatusTextViewController *_statusTextViewController;
    _UILegibilitySettings *_legibilitySettings;
    _Bool _showsStatusText;
    _Bool _needsTitleConstraints;
    _Bool _needsSubTitleConstraints;
    _Bool _needsSecondarySubTitleConstraints;
    _Bool _needsPrimaryActionConstraints;
    _Bool _needsSecondaryActionConstraints;
    _Bool _needsImageConstraints;
    _Bool _showsDateView;
}

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (void)_createPrimaryActionButtonIfNecessary;
- (void)_createSecondaryActionButtonIfNecessary;
- (struct CGRect)_dateTimeFrame;
- (id)_fontWithTextStyle:(id)arg1 cappedToSize:(id)arg2;
@property(retain, nonatomic, getter=_imageView, setter=_setImageView:) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)_labelWithNumberOfLines:(unsigned long long)arg1 font:(id)arg2;
- (void)_positionBottomElementWithLayoutAnchor:(id)arg1 lessThanOrEqual:(_Bool)arg2;
- (id)_preferredContentSizeCategoryCappedToSize:(id)arg1;
@property(retain, nonatomic, getter=_primaryActionButton, setter=_setPrimaryActionButton:) SBDashBoardModalButton *primaryActionButton; // @synthesize primaryActionButton=_primaryActionButton;
- (id)_primaryActionFont;
- (_Bool)_replaceView:(id)arg1 withNewView:(id)arg2 inParentView:(id)arg3;
@property(retain, nonatomic, getter=_secondaryActionButton, setter=_setSecondaryActionButton:) UIButton *secondaryActionButton; // @synthesize secondaryActionButton=_secondaryActionButton;
- (id)_secondaryActionFont;
@property(retain, nonatomic, getter=_secondarySubtitleLabel, setter=_setSecondarySubtitleLabel:) UILabel *secondarySubtitleLabel; // @synthesize secondarySubtitleLabel=_secondarySubtitleLabel;
@property(retain, nonatomic, getter=_subtitleLabel, setter=_setSubtitleLabel:) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic, getter=_titleLabel, setter=_setTitleLabel:) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)_subtitleFont;
- (double)_timeLabelBaselineY;
- (double)_timeToSubtitleLabelBaselineDifferenceY;
- (id)_titleFont;
@property(nonatomic) __weak id <SBDashBoardModalViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *footerText;
@property(retain, nonatomic) UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) UIColor *primaryActionButtonBackgroundColor;
@property(copy, nonatomic) NSString *primaryActionButtonText;
@property(copy, nonatomic) NSString *secondaryActionButtonText;
@property(copy, nonatomic) NSString *secondarySubtitleText;
@property(nonatomic) _Bool showsDateView; // @synthesize showsDateView=_showsDateView;
@property(nonatomic) _Bool showsStatusText; // @synthesize showsStatusText=_showsStatusText;
@property(copy, nonatomic) NSString *subtitleText;
@property(copy, nonatomic) NSString *titleText;
- (void)updateConstraints;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

