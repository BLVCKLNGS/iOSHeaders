//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, SBBannerContainerViewController, SBUIBannerAction;

@protocol SBBannerContextViewControllerDelegate
- (void)bannerViewControllerDidPullDown:(SBBannerContainerViewController *)arg1;
- (void)bannerViewControllerDidShrinkForKeyboard:(SBBannerContainerViewController *)arg1;
- (void)bannerViewControllerDidReceiveRaiseGesture:(SBBannerContainerViewController *)arg1;
- (void)bannerViewController:(SBBannerContainerViewController *)arg1 didRequestSticky:(_Bool)arg2;
- (void)bannerViewControllerDidRequestSticky:(SBBannerContainerViewController *)arg1;
- (void)bannerViewControllerDidRequestDismissal:(SBBannerContainerViewController *)arg1;
- (void)bannerViewControllerDidSelectAction:(SBBannerContainerViewController *)arg1;
- (void)bannerViewController:(SBBannerContainerViewController *)arg1 willSelectAction:(SBUIBannerAction *)arg2 withContext:(NSDictionary *)arg3;
@end
