//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

@interface SBSIMLockEntryAlert : SBAlert
{
    long long _status;
}

- (_Bool)_forcesPortraitOrientation;
- (void)activate;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)deactivate;
- (_Bool)hasTranslucentBackground;
- (id)lockEntryView;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (long long)status;
- (unsigned long long)supportedInterfaceOrientations;

@end

