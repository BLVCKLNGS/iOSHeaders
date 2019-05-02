//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBNotificationCell.h"

@class SBNotificationSeparatorView;

@interface SBNotificationsBulletinCell : SBNotificationCell
{
    SBNotificationSeparatorView *_separator;
    _Bool _showsSeparator;
    _Bool _missed;
}

+ (id)defaultColorForRelevanceDate;
+ (struct CGSize)_preferredSizeForRelevanceDateLabel:(id)arg1;
@property(nonatomic, getter=isMissed) _Bool missed; // @synthesize missed=_missed;
@property(nonatomic) _Bool showsSeparator; // @synthesize showsSeparator=_showsSeparator;
- (void).cxx_destruct;
- (void)setSectionLocation:(int)arg1 animated:(_Bool)arg2;
- (void)prepareForReuse;
- (void)setEventDateLabel:(id)arg1;
- (void)setRelevanceDateLabel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

