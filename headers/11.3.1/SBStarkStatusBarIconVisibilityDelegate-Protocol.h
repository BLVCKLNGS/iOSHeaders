//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBLeafIcon;

@protocol SBStarkStatusBarIconVisibilityDelegate <NSObject>
- (_Bool)iconIsDisplayingBadgeForLeafIdentifier:(NSString *)arg1;
- (_Bool)iconIsVisibleForLeafIdentifier:(NSString *)arg1;
- (SBLeafIcon *)leafIconForIdentifier:(NSString *)arg1;
@end

