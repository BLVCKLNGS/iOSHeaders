//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkBannerItem.h"

@class NSDate, NSString, SBAlertItem, SBUISound;

@interface SBStarkAlertItemBannerItem : SBStarkBannerItem
{
    SBAlertItem *_alertItem;
    NSString *_title;
    NSString *_message;
    SBUISound *_sound;
    NSDate *_originDate;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)action;
- (id)category;
- (id)categoryImage;
- (void)dealloc;
- (long long)defaultActionType;
- (CDUnknownBlockType)ignoreAction;
- (id)initWithAlertItem:(id)arg1 configuration:(id)arg2;
- (id)initWithConfiguration:(id)arg1;
- (_Bool)isSticky;
- (_Bool)matchesContext:(id)arg1;
- (unsigned long long)priority;
- (void)reloadDisplayProperties;
- (id)sound;
- (id)sourceDate;
- (id)subActionLabels;
- (id)subActions;
- (id)title;

@end

