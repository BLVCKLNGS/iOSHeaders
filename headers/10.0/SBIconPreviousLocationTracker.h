//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, SBIconModel;

@interface SBIconPreviousLocationTracker : NSObject
{
    NSMapTable *_previousIconLocations;
    SBIconModel *_iconModel;
}

@property(retain, nonatomic) SBIconModel *iconModel; // @synthesize iconModel=_iconModel;
- (void).cxx_destruct;
- (id)previousLocationInfoForIcon:(id)arg1;
- (void)captureLocationInfoForIcon:(id)arg1 inModel:(id)arg2;

@end

