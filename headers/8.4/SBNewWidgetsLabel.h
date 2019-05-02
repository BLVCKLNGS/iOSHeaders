//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, SBControlColorSettings, UILabel;

@interface SBNewWidgetsLabel : UIView
{
    unsigned long long _badgeNumber;
    UILabel *_label;
    NSString *_text;
    NSString *_numberText;
    SBControlColorSettings *_colorSettings;
}

@property(retain, nonatomic) SBControlColorSettings *colorSettings; // @synthesize colorSettings=_colorSettings;
@property(retain, nonatomic) NSString *numberText; // @synthesize numberText=_numberText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long badgeNumber; // @synthesize badgeNumber=_badgeNumber;
- (struct CGSize)_numberLabelSizeForText:(id)arg1;
- (id)_numberImageForNumberText:(id)arg1 withAttributes:(id)arg2;
- (id)_numberAttributedStringWithNumberText:(id)arg1 attributes:(id)arg2;
- (id)_attributedString;
- (id)_numberTextAttributes;
- (id)_textAttributes;
- (id)_numberFont;
- (id)_textFont;
- (void)_updateLabel;
- (void)updateForContentCategorySizeChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithColorSettings:(id)arg1;

@end

