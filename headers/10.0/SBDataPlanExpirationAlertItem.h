//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDataPlanAccountAlertItem.h"

@class NSDate;

@interface SBDataPlanExpirationAlertItem : SBDataPlanAccountAlertItem
{
    NSDate *_expirationDate;
}

@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void).cxx_destruct;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithAccountURL:(id)arg1 expirationDate:(id)arg2;

@end

