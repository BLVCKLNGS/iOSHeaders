//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BBObserverDelegate-Protocol.h"

@class BBObserver, NSArray, NSMutableSet, NSString;

@interface SBNotificationSectionSettings : NSObject <BBObserverDelegate>
{
    long long _sectionOrderRule;
    NSArray *_sectionOrder;
    BBObserver *_bbObserver;
    NSMutableSet *_settingsObservers;
}

@property(retain, nonatomic) NSMutableSet *settingsObservers; // @synthesize settingsObservers=_settingsObservers;
@property(retain, nonatomic) BBObserver *bbObserver; // @synthesize bbObserver=_bbObserver;
@property(readonly, copy, nonatomic) NSArray *sectionOrder; // @synthesize sectionOrder=_sectionOrder;
@property(readonly, nonatomic) long long sectionOrderRule; // @synthesize sectionOrderRule=_sectionOrderRule;
- (void).cxx_destruct;
- (void)_performOnAllObservers:(CDUnknownBlockType)arg1;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)observer:(id)arg1 updateSectionOrder:(id)arg2;
- (void)observer:(id)arg1 updateSectionOrderRule:(long long)arg2;
- (void)unregisterSettingsObserver:(id)arg1;
- (void)registerSettingsObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

