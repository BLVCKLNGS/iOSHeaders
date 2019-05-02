//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLockOverlayView.h"

@class CNContact, _UILegibilityView;

@interface SBLockScreenUserPictureView : SBLockOverlayView
{
    CNContact *_contact;
    double _strength;
    _UILegibilityView *_monogramLegibilityView;
    double _diameter;
}

+ (id)_monogrammerForLegibilitySettings:(id)arg1 diameter:(double)arg2;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void).cxx_destruct;
- (void)_regenerateImage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;

@end

