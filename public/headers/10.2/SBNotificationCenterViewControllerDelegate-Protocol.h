//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBulletinActionHandler.h"

@protocol SBNotificationCenterViewControllerDelegate <SBBulletinActionHandler>
- (void)dismissPartialPulldownSpotlightAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (_Bool)shouldPinViewsForPartialPulldown;
- (_Bool)shouldAllowPartialPulldownForCurrentTransition;
- (_Bool)shouldClipContentView;
@end

