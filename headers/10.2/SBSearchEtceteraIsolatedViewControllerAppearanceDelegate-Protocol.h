//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBSearchEtceteraIsolatedViewController, _UILegibilitySettings;

@protocol SBSearchEtceteraIsolatedViewControllerAppearanceDelegate <NSObject>

@optional
- (_Bool)searchEtceteraIsolatedViewController:(SBSearchEtceteraIsolatedViewController *)arg1 shouldDelaySearchWillDismissWithReason:(unsigned long long)arg2;
- (_Bool)searchEtceteraIsolatedViewController:(SBSearchEtceteraIsolatedViewController *)arg1 shouldPresentSearchFromSource:(unsigned long long)arg2;
- (void)searchEtceteraIsolatedViewController:(SBSearchEtceteraIsolatedViewController *)arg1 didChangeToMode:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)searchEtceteraIsolatedViewController:(SBSearchEtceteraIsolatedViewController *)arg1 changingToMode:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)searchEtceteraIsolatedViewController:(SBSearchEtceteraIsolatedViewController *)arg1 willChangeToMode:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id <SBSearchEtceteraIsolatedViewControllerAnimatedTransitioning>)customAnimator;
- (long long)requestedWallpaperVariantForWidgetBackgroundViews;
- (_Bool)displaysWidgets;
- (_UILegibilitySettings *)requestedLegibilitySettings;
@end

