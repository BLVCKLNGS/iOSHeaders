//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDiagnosticRequestAlertItem.h"

@class NSString;

@interface SBInsecureDrawingAlertItem : SBDiagnosticRequestAlertItem
{
    NSString *_processName;
}

- (void).cxx_destruct;
- (_Bool)ignoreIfAlreadyDisplaying;
- (id)message;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
- (_Bool)shouldShowInLockScreen;
- (id)title;

@end

