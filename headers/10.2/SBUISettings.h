//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UISettings.h"

@class NSHashTable;

@interface SBUISettings : _UISettings
{
    NSHashTable *__managedkeyObservers;
    NSHashTable *__managedKeyPathObservers;
}

@property(retain, nonatomic) NSHashTable *_managedKeyPathObservers; // @synthesize _managedKeyPathObservers=__managedKeyPathObservers;
@property(retain, nonatomic) NSHashTable *_managedkeyObservers; // @synthesize _managedkeyObservers=__managedkeyObservers;
- (void).cxx_destruct;
- (void)addKeyPathObserverIfPrototyping:(id)arg1;
- (void)addKeyObserverIfPrototyping:(id)arg1;
- (_Bool)_isPrototypingEnabled:(id)arg1;
- (id)archiveValueForKey:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (void)removeKeyPathObserver:(id)arg1;
- (void)removeKeyObserver:(id)arg1;
- (void)_prototypingIsAllowedSettingChanged:(id)arg1;
- (void)dealloc;
- (void)setDefaultValues;

@end

