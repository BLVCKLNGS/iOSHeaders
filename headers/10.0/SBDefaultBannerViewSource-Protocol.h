//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BBAccessoryIcon, NSDate, NSString, UIImage;

@protocol SBDefaultBannerViewSource <NSObject>
- (BBAccessoryIcon *)accessoryIconMask;
- (_Bool)showMessagePreview;
- (UIImage *)attachmentImage;
- (NSString *)attachmentText;
- (UIImage *)iconImage;
- (NSDate *)sourceDate;
- (NSString *)suppressedMessage;
- (NSString *)message;
- (NSString *)subtitle;
- (NSString *)title;
@end

