//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBFMobileKeyBag, SBFMobileKeyBagState;

@protocol SBFMobileKeyBagObserver <NSObject>

@optional
- (void)keybag:(SBFMobileKeyBag *)arg1 extendedStateDidChange:(SBFMobileKeyBagState *)arg2;
- (void)keybagDidFinishProcessingStateChange:(SBFMobileKeyBag *)arg1;
- (void)keybagDidUnlockForTheFirstTime:(SBFMobileKeyBag *)arg1;
- (void)keybagWillBeginProcessingStateChange:(SBFMobileKeyBag *)arg1;
@end

