//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class SBApplication;

@interface SBApplicationLaunchNotifyAlertItem : SBAlertItem
{
    SBApplication *_application;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SBApplication *application; // @synthesize application=_application;
- (_Bool)dismissOnLock;
- (id)initWithApplication:(id)arg1;

@end

